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


#include "AttributeApi.hpp"

#include <crossguid/guid.hpp>

namespace inexor {
namespace entity_system {
namespace rest {
namespace api {

using namespace inexor::entity_system::rest::model;
using namespace xg;
using namespace restbed;
using namespace std;

AttributeApi::AttributeApi(
	std::shared_ptr<AttributeApiEntitiesInstancesEntity_instance_uuidAttributesNameResource> spAttributeApiEntitiesInstancesEntity_instance_uuidAttributesNameResource,
	std::shared_ptr<AttributeApiEntitiesTypesEntity_type_uuidAttributesNameResource> spAttributeApiEntitiesTypesEntity_type_uuidAttributesNameResource,
	std::shared_ptr<AttributeApiEntitiesInstancesEntity_instance_uuidAttributesResource> spAttributeApiEntitiesInstancesEntity_instance_uuidAttributesResource,
	std::shared_ptr<AttributeApiEntitiesTypesEntity_type_uuidAttributesResource> spAttributeApiEntitiesTypesEntity_type_uuidAttributesResource
) {
	this->spAttributeApiEntitiesInstancesEntity_instance_uuidAttributesNameResource = spAttributeApiEntitiesInstancesEntity_instance_uuidAttributesNameResource;
	this->spAttributeApiEntitiesTypesEntity_type_uuidAttributesNameResource = spAttributeApiEntitiesTypesEntity_type_uuidAttributesNameResource;
	this->spAttributeApiEntitiesInstancesEntity_instance_uuidAttributesResource = spAttributeApiEntitiesInstancesEntity_instance_uuidAttributesResource;
	this->spAttributeApiEntitiesTypesEntity_type_uuidAttributesResource = spAttributeApiEntitiesTypesEntity_type_uuidAttributesResource;
}
AttributeApi::~AttributeApi() {}

void AttributeApi::publish_resources(std::shared_ptr<Service> service) {
	service->publish(spAttributeApiEntitiesInstancesEntity_instance_uuidAttributesNameResource);
	service->publish(spAttributeApiEntitiesTypesEntity_type_uuidAttributesNameResource);
	service->publish(spAttributeApiEntitiesInstancesEntity_instance_uuidAttributesResource);
	service->publish(spAttributeApiEntitiesTypesEntity_type_uuidAttributesResource);
}

AttributeApiEntitiesInstancesEntity_instance_uuidAttributesNameResource::AttributeApiEntitiesInstancesEntity_instance_uuidAttributesNameResource(
	std::shared_ptr<EntityAttributeInstanceManager> entity_attribute_instance_manager
)
{
	this->set_path("/entities/instances/{entity_instance_uuid: .*}/attributes/{name: .*}/");
	this->set_method_handler("POST", std::bind(&AttributeApiEntitiesInstancesEntity_instance_uuidAttributesNameResource::POST_method_handler, this, std::placeholders::_1));
	this->set_method_handler("DELETE", std::bind(&AttributeApiEntitiesInstancesEntity_instance_uuidAttributesNameResource::DELETE_method_handler, this, std::placeholders::_1));
	this->set_method_handler("GET", std::bind(&AttributeApiEntitiesInstancesEntity_instance_uuidAttributesNameResource::GET_method_handler, this, std::placeholders::_1));
}

AttributeApiEntitiesInstancesEntity_instance_uuidAttributesNameResource::~AttributeApiEntitiesInstancesEntity_instance_uuidAttributesNameResource()
{
}

void AttributeApiEntitiesInstancesEntity_instance_uuidAttributesNameResource::POST_method_handler(const std::shared_ptr<restbed::Session> session) {

	const auto request = session->get_request();
	// Body params are present, therefore we have to fetch them
	int content_length = request->get_header("Content-Length", 0);
	session->fetch(content_length,
		[ this ]( const std::shared_ptr<restbed::Session> session, const restbed::Bytes & body )
		{

			const auto request = session->get_request();
			std::string requestBody = restbed::String::format("%.*s\n", ( int ) body.size( ), body.data( ));
			/**
			 * Get body params or form params here from the requestBody string
			 */
			
			// Getting the path params
			const std::string entityInstanceUuid = request->get_path_parameter("entityInstanceUuid", "");
			const std::string name = request->get_path_parameter("name", "");
			

			
			// Change the value of this variable to the appropriate response before sending the response
			int status_code = 200;
			
			/**
			 * Process the received information here
			 */
			
			if (status_code == 200) {
				session->close(200, "The created or updated attribute", { {"Connection", "close"} });
				return;
			}
			if (status_code == 0) {
				session->close(0, "unexpected error", { {"Connection", "close"} });
				return;
			}

		});
}

void AttributeApiEntitiesInstancesEntity_instance_uuidAttributesNameResource::DELETE_method_handler(const std::shared_ptr<restbed::Session> session) {

	const auto request = session->get_request();

	// Getting the path params
	const std::string entityInstanceUuid = request->get_path_parameter("entityInstanceUuid", "");
	const std::string name = request->get_path_parameter("name", "");



	// Change the value of this variable to the appropriate response before sending the response
	int status_code = 200;

	/**
	 * Process the received information here
	 */

	if (status_code == 200) {
		std::shared_ptr<EntitySystemMessage> response = NULL;
		session->close(200, "Success message", { {"Connection", "close"} });
		return;
	}
	if (status_code == 0) {
		std::shared_ptr<EntitySystemMessage> response = NULL;
		session->close(0, "unexpected error", { {"Connection", "close"} });
		return;
	}

}
void AttributeApiEntitiesInstancesEntity_instance_uuidAttributesNameResource::GET_method_handler(const std::shared_ptr<restbed::Session> session) {

	const auto request = session->get_request();

	// Getting the path params
	const std::string entityInstanceUuid = request->get_path_parameter("entityInstanceUuid", "");
	const std::string name = request->get_path_parameter("name", "");



	// Change the value of this variable to the appropriate response before sending the response
	int status_code = 200;

	/**
	 * Process the received information here
	 */

	if (status_code == 200) {
		std::shared_ptr<Attribute> response = NULL;
		session->close(200, "The attribute", { {"Connection", "close"} });
		return;
	}
	if (status_code == 0) {
		std::shared_ptr<EntitySystemMessage> response = NULL;
		session->close(0, "unexpected error", { {"Connection", "close"} });
		return;
	}

}


AttributeApiEntitiesTypesEntity_type_uuidAttributesNameResource::AttributeApiEntitiesTypesEntity_type_uuidAttributesNameResource(
	std::shared_ptr<EntityAttributeTypeManager> entity_attribute_type_manager
)
{
	this->set_path("/entities/types/{entity_type_uuid: .*}/attributes/{name: .*}/");
	this->set_method_handler("POST", std::bind(&AttributeApiEntitiesTypesEntity_type_uuidAttributesNameResource::POST_method_handler, this, std::placeholders::_1));
	this->set_method_handler("DELETE", std::bind(&AttributeApiEntitiesTypesEntity_type_uuidAttributesNameResource::DELETE_method_handler, this, std::placeholders::_1));
	this->set_method_handler("GET", std::bind(&AttributeApiEntitiesTypesEntity_type_uuidAttributesNameResource::GET_method_handler, this, std::placeholders::_1));
}

AttributeApiEntitiesTypesEntity_type_uuidAttributesNameResource::~AttributeApiEntitiesTypesEntity_type_uuidAttributesNameResource()
{
}

void AttributeApiEntitiesTypesEntity_type_uuidAttributesNameResource::POST_method_handler(const std::shared_ptr<restbed::Session> session) {

	const auto request = session->get_request();
	// Body params are present, therefore we have to fetch them
	int content_length = request->get_header("Content-Length", 0);
	session->fetch(content_length,
		[ this ]( const std::shared_ptr<restbed::Session> session, const restbed::Bytes & body )
		{

			const auto request = session->get_request();
			std::string requestBody = restbed::String::format("%.*s\n", ( int ) body.size( ), body.data( ));
			/**
			 * Get body params or form params here from the requestBody string
			 */
			
			// Getting the path params
			const std::string entityTypeUuid = request->get_path_parameter("entityTypeUuid", "");
			const std::string name = request->get_path_parameter("name", "");
			

			
			// Change the value of this variable to the appropriate response before sending the response
			int status_code = 200;
			
			/**
			 * Process the received information here
			 */
			
			if (status_code == 200) {
				session->close(200, "An entity type", { {"Connection", "close"} });
				return;
			}
			if (status_code == 0) {
				session->close(0, "unexpected error", { {"Connection", "close"} });
				return;
			}

		});
}

void AttributeApiEntitiesTypesEntity_type_uuidAttributesNameResource::DELETE_method_handler(const std::shared_ptr<restbed::Session> session) {

	const auto request = session->get_request();

	// Getting the path params
	const std::string entityTypeUuid = request->get_path_parameter("entityTypeUuid", "");
	const std::string name = request->get_path_parameter("name", "");



	// Change the value of this variable to the appropriate response before sending the response
	int status_code = 200;

	/**
	 * Process the received information here
	 */

	if (status_code == 200) {
		std::shared_ptr<EntitySystemMessage> response = NULL;
		session->close(200, "Success message", { {"Connection", "close"} });
		return;
	}
	if (status_code == 0) {
		std::shared_ptr<EntitySystemMessage> response = NULL;
		session->close(0, "unexpected error", { {"Connection", "close"} });
		return;
	}

}

void AttributeApiEntitiesTypesEntity_type_uuidAttributesNameResource::GET_method_handler(const std::shared_ptr<restbed::Session> session) {

	const auto request = session->get_request();

			// Getting the path params
			const std::string entityTypeUuid = request->get_path_parameter("entityTypeUuid", "");
			const std::string name = request->get_path_parameter("name", "");
			

			
			// Change the value of this variable to the appropriate response before sending the response
			int status_code = 200;
			
			/**
			 * Process the received information here
			 */
			
			if (status_code == 200) {
				std::shared_ptr<Attribute> response = NULL;
				session->close(200, "The attribute", { {"Connection", "close"} });
				return;
			}
			if (status_code == 0) {
				std::shared_ptr<EntitySystemMessage> response = NULL;
				session->close(0, "unexpected error", { {"Connection", "close"} });
				return;
			}

}


AttributeApiEntitiesInstancesEntity_instance_uuidAttributesResource::AttributeApiEntitiesInstancesEntity_instance_uuidAttributesResource(
	std::shared_ptr<EntityAttributeInstanceManager> entity_attribute_instance_manager
)
{
	this->set_path("/entities/instances/{entity_instance_uuid: .*}/attributes/");
	this->set_method_handler("GET", std::bind(&AttributeApiEntitiesInstancesEntity_instance_uuidAttributesResource::GET_method_handler, this, std::placeholders::_1));
}

AttributeApiEntitiesInstancesEntity_instance_uuidAttributesResource::~AttributeApiEntitiesInstancesEntity_instance_uuidAttributesResource()
{
}

void AttributeApiEntitiesInstancesEntity_instance_uuidAttributesResource::GET_method_handler(const std::shared_ptr<restbed::Session> session) {

	const auto request = session->get_request();

	// Getting the path params
	const std::string entityInstanceUuid = request->get_path_parameter("entityInstanceUuid", "");



	// Change the value of this variable to the appropriate response before sending the response
	int status_code = 200;

	/**
	 * Process the received information here
	 */

	if (status_code == 200) {
		session->close(200, "Array of attributes", { {"Connection", "close"} });
		return;
	}
	if (status_code == 0) {
		session->close(0, "unexpected error", { {"Connection", "close"} });
		return;
	}

}



AttributeApiEntitiesTypesEntity_type_uuidAttributesResource::AttributeApiEntitiesTypesEntity_type_uuidAttributesResource(
	std::shared_ptr<EntityAttributeTypeManager> entity_attribute_type_manager
)
{
	this->set_path("/entities/types/{entity_type_uuid: .*}/attributes/");
	this->set_method_handler("GET", std::bind(&AttributeApiEntitiesTypesEntity_type_uuidAttributesResource::GET_method_handler, this, std::placeholders::_1));
}

AttributeApiEntitiesTypesEntity_type_uuidAttributesResource::~AttributeApiEntitiesTypesEntity_type_uuidAttributesResource()
{
}

void AttributeApiEntitiesTypesEntity_type_uuidAttributesResource::GET_method_handler(const std::shared_ptr<restbed::Session> session) {

	const auto request = session->get_request();

	// Getting the path params
	const std::string entityTypeUuid = request->get_path_parameter("entityTypeUuid", "");



	// Change the value of this variable to the appropriate response before sending the response
	int status_code = 200;

	/**
	 * Process the received information here
	 */

	if (status_code == 200) {
		session->close(200, "An array of attributes", { {"Connection", "close"} });
		return;
	}
	if (status_code == 0) {
		session->close(0, "unexpected error", { {"Connection", "close"} });
		return;
	}

}


}
}
}
}

