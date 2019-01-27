#include "InexorApplicationManager.hpp"

namespace inexor {

InexorApplicationManager::InexorApplicationManager()
{
    manager = this;
    signal(SIGHUP, InexorApplicationManager::call_sighup_handler);
    signal(SIGQUIT, InexorApplicationManager::call_sighup_handler);
    signal(SIGTERM, InexorApplicationManager::call_sigterm_handler);
}

void InexorApplicationManager::create_application(
    std::shared_ptr<inexor::entity_system::EntitySystem> entity_system,
    std::shared_ptr<inexor::entity_system::RestServer> rest_server,
    std::shared_ptr<inexor::logging::LogManager> log_manager)
{
    auto application = inexor::InexorApplication(entity_system, rest_server, log_manager);
    this->instances.push_back(application);
    application.init();
}

void InexorApplicationManager::start()
{
    for (auto& instance: this->instances)
    {
        auto start_thread = std::thread(&InexorApplication::start, instance);
        start_thread.join();
    }
}

void InexorApplicationManager::run()
{
    for (auto& instance: this->instances)
    {
        auto run_thread = std::thread(&InexorApplication::run, instance);
        run_thread.join();
    }
}

void InexorApplicationManager::sighup_handler(int signum)
{
    for (auto instance : this->instances)
    {
      std::mem_fn(&InexorApplication::shutdown)(instance);
    }
}

void InexorApplicationManager::sigterm_handler(int signum)
{
    for (auto instance : this->instances)
    {
      std::mem_fn(&InexorApplication::shutdown)(instance);
    }
}

InexorApplicationManager* InexorApplicationManager::manager;

void InexorApplicationManager::call_sighup_handler(int signum)
{
    spdlog::get("manager")->info("Calling sighup handler");
    manager->sighup_handler(signum);
}

void InexorApplicationManager::call_sigterm_handler(int signum)
{
    spdlog::get("manager")->info("Calling sigterm handler");
    manager->sigterm_handler(signum);
}

}
