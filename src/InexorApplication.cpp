// Inexor
// (c)2018-2019 Inexor

#include "InexorApplication.hpp"

using namespace inexor::entity_system;
using namespace spdlog;

namespace inexor {

	// Static instances of the Inexor application(s)
        // std::vector<InexorApplication *> InexorApplication::instances;

	InexorApplication::InexorApplication(
		std::shared_ptr<inexor::entity_system::EntitySystem> entity_system,
		std::shared_ptr<inexor::entity_system::RestServer> rest_server,
		std::shared_ptr<inexor::logging::LogManager> log_manager
	)
	{
		this->entity_system = entity_system;
		this->rest_server = rest_server;
		this->log_manager = log_manager;
		this->running = false;
	}
	
	InexorApplication::~InexorApplication()
	{
		// shutdown();
	}

	void InexorApplication::init()
	{

		// Register application instance in static vector
		// You can't do this in the constructor
                //InexorApplication::instances.push_back(this);

		// Logging initialization
		log_manager->init();
		log_manager->register_logger(LOGGER_NAME);

		spdlog::get(LOGGER_NAME)->info("init()");

#ifdef _WIN32
		spdlog::get(LOGGER_NAME)->info("PID: {}", _getpid());
#else
		spdlog::get(LOGGER_NAME)->info("PID: {}", getpid());
#endif

	}

	void InexorApplication::start()
	{
		spdlog::get(LOGGER_NAME)->info("start()");
		if (!running) {

			// Create one single instance of the entity system.
			// @note The entity system has no singleton implementation for now.
			spdlog::get(LOGGER_NAME)->info("Starting entity system...");

			// Setup REST server
			rest_server->set_service(rest_server);
                        rest_server->set_ready_handler([this](Service& service) { ready_handler(service); });
			rest_server->init();
			rest_server->set_logger(std::make_shared<RestServerLogger>());
			rest_server->startService(0);
		} else {
			spdlog::get(LOGGER_NAME)->info("Already running");
		}

	}

	void InexorApplication::run()
	{
	    spdlog::get(LOGGER_NAME)->info("Waiting for services being started");
		while (!running) {
			std::this_thread::sleep_for(10ms);
		}
	    spdlog::get(LOGGER_NAME)->info("Inexor is running");
		while (running) {
			std::this_thread::sleep_for(5s);
			spdlog::get(LOGGER_NAME)->info("Uptime: {} s", rest_server->get_uptime().count());
		}
	    spdlog::get(LOGGER_NAME)->info("Inexor is no longer running");
	}

	void InexorApplication::shutdown()
	{
		if (running) {
			spdlog::get(LOGGER_NAME)->info("Shutting down Inexor...");
			running = false;
			std::this_thread::sleep_for(1s);
			rest_server->stopService();
			spdlog::get(LOGGER_NAME)->info("Shutdown completed");
		} else {
			spdlog::get(LOGGER_NAME)->info("Not running");
		}
	}

	void InexorApplication::register_logger(std::string logger_name) {
		log_manager->register_logger(logger_name);
	}

	std::shared_ptr<inexor::entity_system::EntitySystem> InexorApplication::get_entity_system()
	{
		return entity_system;
	}


	std::shared_ptr<inexor::entity_system::RestServer> InexorApplication::get_rest_server()
	{
		return rest_server;
	}

        void InexorApplication::ready_handler(Service& service)
	{
	    spdlog::get(LOGGER_NAME)->info("REST server is running on http://localhost:{}/{}", rest_server->get_settings()->get_port(), rest_server->get_settings()->get_root());

            // Set running state
            running = true;
	}

};
