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


#include "EntitySystemApi.hpp"


namespace inexor {
namespace entity_system {
namespace rest {
namespace api {


using namespace inexor::entity_system::rest::model;
using namespace xg;
using namespace restbed;
using namespace std;


EntitySystemApi::EntitySystemApi() {}
EntitySystemApi::~EntitySystemApi() {}

void EntitySystemApi::publish_resources(std::shared_ptr<Service> service) {
	std::shared_ptr<EntitySystemApiEntitysystemResource> spEntitySystemApiEntitysystemResource = std::make_shared<EntitySystemApiEntitysystemResource>();
	service->publish(spEntitySystemApiEntitysystemResource);
	
}

EntitySystemApiEntitysystemResource::EntitySystemApiEntitysystemResource()
{
	this->set_path("/entitysystem/");
	this->set_method_handler("DELETE", std::bind(&EntitySystemApiEntitysystemResource::DELETE_method_handler, this, std::placeholders::_1));
	this->set_method_handler("GET", std::bind(&EntitySystemApiEntitysystemResource::GET_method_handler, this, std::placeholders::_1));
	this->set_method_handler("POST", std::bind(&EntitySystemApiEntitysystemResource::POST_method_handler, this, std::placeholders::_1));
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
		std::shared_ptr<EntitySystemDto> response = NULL;
		session->close(200, "The entity system", { {"Connection", "close"} });
		return;
	}
	if (status_code == 0) {
		std::shared_ptr<EntitySystemMessageDto> response = NULL;
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
		std::shared_ptr<EntitySystemMessageDto> response = NULL;
		session->close(200, "The entity system", { {"Connection", "close"} });
		return;
	}
	if (status_code == 0) {
		std::shared_ptr<EntitySystemMessageDto> response = NULL;
		session->close(0, "unexpected error", { {"Connection", "close"} });
		return;
	}

}



}
}
}
}

