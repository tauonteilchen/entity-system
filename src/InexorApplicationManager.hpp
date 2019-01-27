// Inexor entity system
// (c)2018-2019 Inexor

#pragma once

#include <vector>
#include <thread>
#include <csignal>
#include <memory>

#include "InexorApplication.hpp"

namespace inexor {

class InexorApplicationManager {
private:
    std::vector<InexorApplication> instances;
    static InexorApplicationManager* manager; // This is quite dirty and should ONLY be used for singleton

public:
    InexorApplicationManager();

    void create_application(
        std::shared_ptr<inexor::entity_system::EntitySystem> entity_system,
        std::shared_ptr<inexor::entity_system::RestServer> rest_server,
        std::shared_ptr<inexor::logging::LogManager> log_manager
    );

    // TODO: Start and stop specific instances
    void start();
    void run();

    /// Signal handlers
    void sighup_handler(int signum);
    void sigterm_handler(int signum);

    // Hack handlers
    static void call_sighup_handler(int signum);
    static void call_sigterm_handler(int signum);
};

}
