/**
 * Inexor Entity System
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * OpenAPI spec version: 3.0.0
 * Contact: info@inexor.org
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 4.0.0-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */


#include <corvusoft/restbed/byte.hpp>
#include <corvusoft/restbed/string.hpp>
#include <corvusoft/restbed/settings.hpp>
#include <corvusoft/restbed/request.hpp>

#include "EntitySystemApi.h"

namespace inexor {
namespace entity_system {
namespace rest {
namespace api {

using namespace inexor::entity_system::rest::model;

EntitySystemApi::EntitySystemApi() {
	std::shared_ptr<EntitySystemApiEntitysystemResource> spEntitySystemApiEntitysystemResource = std::make_shared<EntitySystemApiEntitysystemResource>();
	this->publish(spEntitySystemApiEntitysystemResource);
	
}

EntitySystemApi::~EntitySystemApi() {}

void EntitySystemApi::startService(int const& port) {
	std::shared_ptr<restbed::Settings> settings = std::make_shared<restbed::Settings>();
	settings->set_port(port);
	settings->set_root("/api/v1");
	
	this->start(settings);
}

void EntitySystemApi::stopService() {
	this->stop();
}

EntitySystemApiEntitysystemResource::EntitySystemApiEntitysystemResource()
{
	this->set_path("/entitysystem/");
	this->set_method_handler("DELETE",
		std::bind(&EntitySystemApiEntitysystemResource::DELETE_method_handler, this,
			std::placeholders::_1));
	this->set_method_handler("GET",
		std::bind(&EntitySystemApiEntitysystemResource::GET_method_handler, this,
			std::placeholders::_1));
	this->set_method_handler("POST",
		std::bind(&EntitySystemApiEntitysystemResource::POST_method_handler, this,
			std::placeholders::_1));
}

EntitySystemApiEntitysystemResource::~EntitySystemApiEntitysystemResource()
{
}

void EntitySystemApiEntitysystemResource::DELETE_method_handler(const std::shared_ptr<restbed::Session> session) {

	const auto request = session->get_request();
			
			

			
			// Change the value of this variable to the appropriate response before sending the response
			int status_code = 200;
			
			/**
			 * Process the received information here
			 */
			
			if (status_code == 200) {
				session->close(200, "The entity system", { {"Connection", "close"} });
				return;
			}
			if (status_code == 0) {
				session->close(0, "unexpected error", { {"Connection", "close"} });
				return;
			}

}

void EntitySystemApiEntitysystemResource::GET_method_handler(const std::shared_ptr<restbed::Session> session) {

	const auto request = session->get_request();

			

			
			// Change the value of this variable to the appropriate response before sending the response
			int status_code = 200;
			
			/**
			 * Process the received information here
			 */
			
			if (status_code == 200) {
				std::shared_ptr<EntitySystem> response = NULL;
				session->close(200, "The entity system", { {"Connection", "close"} });
				return;
			}
			if (status_code == 0) {
				std::shared_ptr<EntitySystemMessage> response = NULL;
				session->close(0, "unexpected error", { {"Connection", "close"} });
				return;
			}

}
void EntitySystemApiEntitysystemResource::POST_method_handler(const std::shared_ptr<restbed::Session> session) {

	const auto request = session->get_request();

			

			
			// Change the value of this variable to the appropriate response before sending the response
			int status_code = 200;
			
			/**
			 * Process the received information here
			 */
			
			if (status_code == 200) {
				std::shared_ptr<EntitySystemMessage> response = NULL;
				session->close(200, "The entity system", { {"Connection", "close"} });
				return;
			}
			if (status_code == 0) {
				std::shared_ptr<EntitySystemMessage> response = NULL;
				session->close(0, "unexpected error", { {"Connection", "close"} });
				return;
			}

}



}
}
}
}

