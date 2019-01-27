// Inexor entity system
// (c)2018-2019 Inexor

#include <memory>
#include <boost/di.hpp>
#include "spdlog/spdlog.h"

#include "InexorApplicationManager.hpp"
#include "entity-system-rest/RestServer.hpp"

int main(int argc, char* argv[])
{
    spdlog::info("Inexor (c) 2009-2019");
    auto manager = inexor::InexorApplicationManager();
    auto injector = boost::di::make_injector();
    auto entity_system = injector.create<std::shared_ptr<inexor::entity_system::EntitySystem>>();
    auto log_manager = injector.create<std::shared_ptr<inexor::logging::LogManager>>();

    auto rest_server = injector.create<std::shared_ptr<inexor::entity_system::RestServer>>();
    manager.create_application(entity_system, rest_server, log_manager);
    manager.start();
    manager.run();

    return EXIT_SUCCESS;
}
