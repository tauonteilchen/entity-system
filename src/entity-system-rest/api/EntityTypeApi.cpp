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


#include "EntityTypeApi.hpp"


namespace inexor {
namespace entity_system {
namespace rest {
namespace api {


using namespace inexor::entity_system::rest::model;
using namespace xg;
using namespace restbed;
using namespace std;


EntityTypeApi::EntityTypeApi(
	shared_ptr<EntityTypeApiEntitiesTypesResource> spEntityTypeApiEntitiesTypesResource,
	shared_ptr<EntityTypeApiEntitiesTypesEntity_type_uuidResource> spEntityTypeApiEntitiesTypesEntity_type_uuidResource,
	shared_ptr<EntityTypeApiEntitiesTypesEntity_type_uuidAttributesNameResource> spEntityTypeApiEntitiesTypesEntity_type_uuidAttributesNameResource,
	shared_ptr<EntityTypeApiEntitiesTypesEntity_type_uuidInstancesResource> spEntityTypeApiEntitiesTypesEntity_type_uuidInstancesResource,
	shared_ptr<EntityTypeApiEntitiesTypesEntity_type_uuidRelationsIncomingResource> spEntityTypeApiEntitiesTypesEntity_type_uuidRelationsIncomingResource,
	shared_ptr<EntityTypeApiEntitiesTypesEntity_type_uuidRelationsOutgoingResource> spEntityTypeApiEntitiesTypesEntity_type_uuidRelationsOutgoingResource,
	shared_ptr<EntityTypeApiEntitiesTypesEntity_type_uuidRelationsResource> spEntityTypeApiEntitiesTypesEntity_type_uuidRelationsResource,
	shared_ptr<EntityTypeApiEntitiesTypesEntity_type_uuidAttributesResource> spEntityTypeApiEntitiesTypesEntity_type_uuidAttributesResource
)
{
	this->spEntityTypeApiEntitiesTypesResource = spEntityTypeApiEntitiesTypesResource;
	this->spEntityTypeApiEntitiesTypesEntity_type_uuidResource = spEntityTypeApiEntitiesTypesEntity_type_uuidResource;
	this->spEntityTypeApiEntitiesTypesEntity_type_uuidAttributesNameResource = spEntityTypeApiEntitiesTypesEntity_type_uuidAttributesNameResource;
	this->spEntityTypeApiEntitiesTypesEntity_type_uuidInstancesResource = spEntityTypeApiEntitiesTypesEntity_type_uuidInstancesResource;
	this->spEntityTypeApiEntitiesTypesEntity_type_uuidRelationsIncomingResource = spEntityTypeApiEntitiesTypesEntity_type_uuidRelationsIncomingResource;
	this->spEntityTypeApiEntitiesTypesEntity_type_uuidRelationsOutgoingResource = spEntityTypeApiEntitiesTypesEntity_type_uuidRelationsOutgoingResource;
	this->spEntityTypeApiEntitiesTypesEntity_type_uuidRelationsResource = spEntityTypeApiEntitiesTypesEntity_type_uuidRelationsResource;
	this->spEntityTypeApiEntitiesTypesEntity_type_uuidAttributesResource = spEntityTypeApiEntitiesTypesEntity_type_uuidAttributesResource;
}

EntityTypeApi::~EntityTypeApi()
{
}

void EntityTypeApi::publish_resources(std::shared_ptr<Service> service) {
	service->publish(spEntityTypeApiEntitiesTypesResource);
	service->publish(spEntityTypeApiEntitiesTypesEntity_type_uuidResource);
	service->publish(spEntityTypeApiEntitiesTypesEntity_type_uuidAttributesNameResource);
	service->publish(spEntityTypeApiEntitiesTypesEntity_type_uuidInstancesResource);
	service->publish(spEntityTypeApiEntitiesTypesEntity_type_uuidRelationsIncomingResource);
	service->publish(spEntityTypeApiEntitiesTypesEntity_type_uuidRelationsOutgoingResource);
	service->publish(spEntityTypeApiEntitiesTypesEntity_type_uuidRelationsResource);
	service->publish(spEntityTypeApiEntitiesTypesEntity_type_uuidAttributesResource);
}

/**
 * Defines the method handlers for route /entities/types/
 */
EntityTypeApiEntitiesTypesResource::EntityTypeApiEntitiesTypesResource(
	std::shared_ptr<inexor::entity_system::EntityTypeManager> entity_type_manager
)
{
	this->entity_type_manager = entity_type_manager;
	this->set_path("/entities/types/");
	this->set_method_handler("POST", bind(&EntityTypeApiEntitiesTypesResource::POST_method_handler, this, placeholders::_1));
	this->set_method_handler("DELETE", bind(&EntityTypeApiEntitiesTypesResource::DELETE_method_handler, this, placeholders::_1));
	this->set_method_handler("GET", bind(&EntityTypeApiEntitiesTypesResource::GET_method_handler, this, placeholders::_1));
}

EntityTypeApiEntitiesTypesResource::~EntityTypeApiEntitiesTypesResource()
{
}

/**
 * TODO: Creates an entity type.
 */
void EntityTypeApiEntitiesTypesResource::POST_method_handler(const shared_ptr<Session> session) {

	const auto request = session->get_request();

	// TODO: implement
	auto entity_type = this->entity_type_manager->create_entity_type("");

			
	// Change the value of this variable to the appropriate response before sending the response
	int status_code = 200;

	/**
	 * TODO: Create new entity type using POST body.
	 */

	if (status_code == 200) {
		session->close(200, "The created entity type", { {"Connection", "close"} });
		return;
	}
	if (status_code == 0) {
		session->close(0, "unexpected error", { {"Connection", "close"} });
		return;
	}

}

/**
 * Deletes all entity types (and all entity instances).
 * DONE.
 */
void EntityTypeApiEntitiesTypesResource::DELETE_method_handler(const shared_ptr<Session> session) {
	const auto request = session->get_request();
	int status_code = 200;
	this->entity_type_manager->delete_all_entity_types();
	if (status_code == 200) {
		shared_ptr<EntitySystemMessageDto> response = NULL;
		session->close(200, "Success message", { {"Connection", "close"} });
		return;
	}
	if (status_code == 0) {
		shared_ptr<EntitySystemMessageDto> response = NULL;
		session->close(0, "unexpected error", { {"Connection", "close"} });
		return;
	}
}

/**
 * TODO: Lists all entity types.
 */
void EntityTypeApiEntitiesTypesResource::GET_method_handler(const shared_ptr<Session> session) {
	const auto request = session->get_request();
	// Change the value of this variable to the appropriate response before sending the response
	int status_code = 200;
	/**
	 * Process the received information here
	 */
	if (status_code == 200) {
		shared_ptr<EntityTypeDto> response = NULL;
		session->close(200, "A list of entity types", { {"Connection", "close"} });
		return;
	}
	if (status_code == 0) {
		shared_ptr<EntitySystemMessageDto> response = NULL;
		session->close(0, "unexpected error", { {"Connection", "close"} });
		return;
	}
}

/**
 * Defines the method handlers for route /entities/types/{entity_type_uuid}/
 */
EntityTypeApiEntitiesTypesEntity_type_uuidResource::EntityTypeApiEntitiesTypesEntity_type_uuidResource(
	std::shared_ptr<inexor::entity_system::EntityTypeManager> entity_type_manager
)
{
	this->entity_type_manager = entity_type_manager;
	this->set_path("/entities/types/{entity_type_uuid: .*}/");
	this->set_method_handler("POST", bind(&EntityTypeApiEntitiesTypesEntity_type_uuidResource::POST_method_handler, this, placeholders::_1));
	this->set_method_handler("DELETE", bind(&EntityTypeApiEntitiesTypesEntity_type_uuidResource::DELETE_method_handler, this, placeholders::_1));
	this->set_method_handler("GET", bind(&EntityTypeApiEntitiesTypesEntity_type_uuidResource::GET_method_handler, this, placeholders::_1));
}

EntityTypeApiEntitiesTypesEntity_type_uuidResource::~EntityTypeApiEntitiesTypesEntity_type_uuidResource()
{
}

void EntityTypeApiEntitiesTypesEntity_type_uuidResource::POST_method_handler(const shared_ptr<Session> session) {

	const auto request = session->get_request();
	// Body params are present, therefore we have to fetch them
	int content_length = request->get_header("Content-Length", 0);
	session->fetch(content_length,
		[ this ]( const shared_ptr<Session> session, const Bytes & body )
		{

			const auto request = session->get_request();
			string requestBody = String::format("%.*s\n", ( int ) body.size( ), body.data( ));
			/**
			 * Get body params or form params here from the requestBody string
			 */
			
			// Getting the path params
			const string entity_type_uuid = request->get_path_parameter("entity_type_uuid", "");
			

			
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

void EntityTypeApiEntitiesTypesEntity_type_uuidResource::DELETE_method_handler(const shared_ptr<Session> session) {

	const auto request = session->get_request();

	// Getting the path params
	const string entity_type_uuid = request->get_path_parameter("entity_type_uuid", "");



	// Change the value of this variable to the appropriate response before sending the response
	int status_code = 200;

	/**
	 * Process the received information here
	 */
	// entity_system->delete_entity_type(g(entity_type_uuid));

	if (status_code == 200) {
		shared_ptr<EntitySystemMessageDto> response = NULL;
		session->close(200, "Success message", { {"Connection", "close"} });
		return;
	}
	if (status_code == 0) {
		shared_ptr<EntitySystemMessageDto> response = NULL;
		session->close(0, "unexpected error", { {"Connection", "close"} });
		return;
	}

}
void EntityTypeApiEntitiesTypesEntity_type_uuidResource::GET_method_handler(const shared_ptr<Session> session) {

	const auto request = session->get_request();

	std::map< std::string, std::string > params = request->get_path_parameters();
	for (auto& kv : params) {
		std::cout << kv.first << " has value " << kv.second << std::endl;
	}

	// Getting the path params
	std::string entity_type_uuid = request->get_path_parameter("entity_type_uuid", "");

	spdlog::get("inexor.entity.rest")->info("Searching for entity type {}", entity_type_uuid);

	bool exists = this->entity_type_manager->does_entity_type_exist(Guid(entity_type_uuid));
	spdlog::get("inexor.entity.rest")->info(exists ? "entity type exists" : "entity type does not exist");

	std::optional<std::shared_ptr<inexor::entity_system::EntityType> > entity_type_o = this->entity_type_manager->get_entity_type(Guid(entity_type_uuid));

	if (entity_type_o.has_value()) {
		spdlog::get("inexor.entity.rest")->info("found");
		std::shared_ptr<inexor::entity_system::EntityType> entity_type = entity_type_o.value();
		shared_ptr<EntityTypeDto> entity_type_model = std::make_shared<EntityTypeDto>();
		entity_type_model->set_entity_type_uuid(entity_type->get_GUID().str());
		entity_type_model->set_name(entity_type->get_type_name());
		session->close(restbed::OK, entity_type_model->to_json_string(), { {"Connection", "close"} });
		return;
	} else {
		spdlog::get("inexor.entity.rest")->info("not found");
		shared_ptr<EntitySystemMessageDto> entity_system_message = std::make_shared<EntitySystemMessageDto>();
		entity_system_message->setCode(404);
		entity_system_message->setMessage(fmt::format("Entity type UUID('{}') not found", entity_type_uuid));
		session->close(restbed::NOT_FOUND, entity_system_message->to_json_string(), { {"Connection", "close"} });
		return;
	}

}


EntityTypeApiEntitiesTypesEntity_type_uuidAttributesNameResource::EntityTypeApiEntitiesTypesEntity_type_uuidAttributesNameResource(
	std::shared_ptr<inexor::entity_system::EntityTypeManager> entity_type_manager
)
{
	this->entity_type_manager = entity_type_manager;
	this->set_path("/entities/types/{entity_type_uuid: .*}/attributes/{name: .*}/");
	this->set_method_handler("POST", bind(&EntityTypeApiEntitiesTypesEntity_type_uuidAttributesNameResource::POST_method_handler, this, placeholders::_1));
	this->set_method_handler("DELETE", bind(&EntityTypeApiEntitiesTypesEntity_type_uuidAttributesNameResource::DELETE_method_handler, this, placeholders::_1));
	this->set_method_handler("GET", bind(&EntityTypeApiEntitiesTypesEntity_type_uuidAttributesNameResource::GET_method_handler, this, placeholders::_1));
}

EntityTypeApiEntitiesTypesEntity_type_uuidAttributesNameResource::~EntityTypeApiEntitiesTypesEntity_type_uuidAttributesNameResource()
{
}

void EntityTypeApiEntitiesTypesEntity_type_uuidAttributesNameResource::POST_method_handler(const shared_ptr<Session> session) {

	const auto request = session->get_request();
	// Body params are present, therefore we have to fetch them
	int content_length = request->get_header("Content-Length", 0);
	session->fetch(content_length,
		[ this ]( const shared_ptr<Session> session, const Bytes & body )
		{

			const auto request = session->get_request();
			string requestBody = String::format("%.*s\n", ( int ) body.size( ), body.data( ));
			/**
			 * Get body params or form params here from the requestBody string
			 */
			
			// Getting the path params
			const string entity_type_uuid = request->get_path_parameter("entity_type_uuid", "");
			const string name = request->get_path_parameter("name", "");
			

			
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

void EntityTypeApiEntitiesTypesEntity_type_uuidAttributesNameResource::DELETE_method_handler(const shared_ptr<Session> session) {

	const auto request = session->get_request();

	// Getting the path params
	const string entity_type_uuid = request->get_path_parameter("entity_type_uuid", "");
	const string name = request->get_path_parameter("name", "");



	// Change the value of this variable to the appropriate response before sending the response
	int status_code = 200;

	/**
	 * Process the received information here
	 */

	// Guid g(entity_type_uuid);
	// auto entity_type = entity_system->get_type(g(entity_type_uuid));
	// auto attribute_type = entity_type->get_attribute_by_name(name);
	// entity_system->delete_entity_attribute_type(attribute_type->get_uuid());

	if (status_code == 200) {
		shared_ptr<EntitySystemMessageDto> response = NULL;
		session->close(200, "Success message", { {"Connection", "close"} });
		return;
	}
	if (status_code == 0) {
		shared_ptr<EntitySystemMessageDto> response = NULL;
		session->close(0, "unexpected error", { {"Connection", "close"} });
		return;
	}

}
void EntityTypeApiEntitiesTypesEntity_type_uuidAttributesNameResource::GET_method_handler(const shared_ptr<Session> session) {

	const auto request = session->get_request();

	// Getting the path params
	const string entity_type_uuid = request->get_path_parameter("entity_type_uuid", "");
	const string name = request->get_path_parameter("name", "");



	// Change the value of this variable to the appropriate response before sending the response
	int status_code = 200;

	/**
	 * Process the received information here
	 */

	if (status_code == 200) {
		shared_ptr<AttributeDto> response = NULL;
		session->close(200, "The attribute", { {"Connection", "close"} });
		return;
	}
	if (status_code == 0) {
		shared_ptr<EntitySystemMessageDto> response = NULL;
		session->close(0, "unexpected error", { {"Connection", "close"} });
		return;
	}

}


EntityTypeApiEntitiesTypesEntity_type_uuidInstancesResource::EntityTypeApiEntitiesTypesEntity_type_uuidInstancesResource(
	std::shared_ptr<inexor::entity_system::EntityTypeManager> entity_type_manager
)
{
	this->entity_type_manager = entity_type_manager;
	this->set_path("/entities/types/{entity_type_uuid: .*}/instances/");
	this->set_method_handler("DELETE", bind(&EntityTypeApiEntitiesTypesEntity_type_uuidInstancesResource::DELETE_method_handler, this, placeholders::_1));
	this->set_method_handler("GET", bind(&EntityTypeApiEntitiesTypesEntity_type_uuidInstancesResource::GET_method_handler, this, placeholders::_1));
}

EntityTypeApiEntitiesTypesEntity_type_uuidInstancesResource::~EntityTypeApiEntitiesTypesEntity_type_uuidInstancesResource()
{
}

void EntityTypeApiEntitiesTypesEntity_type_uuidInstancesResource::DELETE_method_handler(const shared_ptr<Session> session) {

	const auto request = session->get_request();

	// Getting the path params
	const string entity_type_uuid = request->get_path_parameter("entity_type_uuid", "");



	// Change the value of this variable to the appropriate response before sending the response
	int status_code = 200;

	/**
	 * Process the received information here
	 */

	if (status_code == 200) {
		session->close(200, "Success message", { {"Connection", "close"} });
		return;
	}
	if (status_code == 0) {
		session->close(0, "unexpected error", { {"Connection", "close"} });
		return;
	}

}

void EntityTypeApiEntitiesTypesEntity_type_uuidInstancesResource::GET_method_handler(const shared_ptr<Session> session) {

	const auto request = session->get_request();

	// Getting the path params
	const string entity_type_uuid = request->get_path_parameter("entity_type_uuid", "");



	// Change the value of this variable to the appropriate response before sending the response
	int status_code = 200;

	/**
	 * Process the received information here
	 */

	if (status_code == 200) {
		shared_ptr<EntityInstanceDto> response = NULL;
		session->close(200, "Array of entity instances", { {"Connection", "close"} });
		return;
	}
	if (status_code == 0) {
		shared_ptr<EntitySystemMessageDto> response = NULL;
		session->close(0, "unexpected error", { {"Connection", "close"} });
		return;
	}

}


EntityTypeApiEntitiesTypesEntity_type_uuidRelationsIncomingResource::EntityTypeApiEntitiesTypesEntity_type_uuidRelationsIncomingResource(
	std::shared_ptr<inexor::entity_system::EntityTypeManager> entity_type_manager
)
{
	this->entity_type_manager = entity_type_manager;
	this->set_path("/entities/types/{entity_type_uuid: .*}/relations/incoming/");
	this->set_method_handler("GET", bind(&EntityTypeApiEntitiesTypesEntity_type_uuidRelationsIncomingResource::GET_method_handler, this, placeholders::_1));
}

EntityTypeApiEntitiesTypesEntity_type_uuidRelationsIncomingResource::~EntityTypeApiEntitiesTypesEntity_type_uuidRelationsIncomingResource()
{
}

void EntityTypeApiEntitiesTypesEntity_type_uuidRelationsIncomingResource::GET_method_handler(const shared_ptr<Session> session) {

	const auto request = session->get_request();

	// Getting the path params
	const string entity_type_uuid = request->get_path_parameter("entity_type_uuid", "");



	// Change the value of this variable to the appropriate response before sending the response
	int status_code = 200;

	/**
	 * Process the received information here
	 */

	if (status_code == 200) {
		session->close(200, "The incoming relation types", { {"Connection", "close"} });
		return;
	}
	if (status_code == 0) {
		session->close(0, "unexpected error", { {"Connection", "close"} });
		return;
	}

}



EntityTypeApiEntitiesTypesEntity_type_uuidRelationsOutgoingResource::EntityTypeApiEntitiesTypesEntity_type_uuidRelationsOutgoingResource(
	std::shared_ptr<inexor::entity_system::EntityTypeManager> entity_type_manager
)
{
	this->entity_type_manager = entity_type_manager;
	this->set_path("/entities/types/{entity_type_uuid: .*}/relations/outgoing/");
	this->set_method_handler("GET", bind(&EntityTypeApiEntitiesTypesEntity_type_uuidRelationsOutgoingResource::GET_method_handler, this, placeholders::_1));
}

EntityTypeApiEntitiesTypesEntity_type_uuidRelationsOutgoingResource::~EntityTypeApiEntitiesTypesEntity_type_uuidRelationsOutgoingResource()
{
}

void EntityTypeApiEntitiesTypesEntity_type_uuidRelationsOutgoingResource::GET_method_handler(const shared_ptr<Session> session) {

	const auto request = session->get_request();

	// Getting the path params
	const string entity_type_uuid = request->get_path_parameter("entity_type_uuid", "");



	// Change the value of this variable to the appropriate response before sending the response
	int status_code = 200;

	/**
	 * Process the received information here
	 */

	if (status_code == 200) {
		session->close(200, "The outgoing relation types", { {"Connection", "close"} });
		return;
	}
	if (status_code == 0) {
		session->close(0, "unexpected error", { {"Connection", "close"} });
		return;
	}

}



EntityTypeApiEntitiesTypesEntity_type_uuidRelationsResource::EntityTypeApiEntitiesTypesEntity_type_uuidRelationsResource(
	std::shared_ptr<inexor::entity_system::EntityTypeManager> entity_type_manager
)
{
	this->entity_type_manager = entity_type_manager;
	this->set_path("/entities/types/{entity_type_uuid: .*}/relations/");
	this->set_method_handler("GET", bind(&EntityTypeApiEntitiesTypesEntity_type_uuidRelationsResource::GET_method_handler, this, placeholders::_1));
}

EntityTypeApiEntitiesTypesEntity_type_uuidRelationsResource::~EntityTypeApiEntitiesTypesEntity_type_uuidRelationsResource()
{
}

void EntityTypeApiEntitiesTypesEntity_type_uuidRelationsResource::GET_method_handler(const shared_ptr<Session> session) {

	const auto request = session->get_request();

	// Getting the path params
	const string entity_type_uuid = request->get_path_parameter("entity_type_uuid", "");



	// Change the value of this variable to the appropriate response before sending the response
	int status_code = 200;

	/**
	 * Process the received information here
	 */

	if (status_code == 200) {
		session->close(200, "The incoming and outgoing relation types", { {"Connection", "close"} });
		return;
	}
	if (status_code == 0) {
		session->close(0, "unexpected error", { {"Connection", "close"} });
		return;
	}

}



EntityTypeApiEntitiesTypesEntity_type_uuidAttributesResource::EntityTypeApiEntitiesTypesEntity_type_uuidAttributesResource(
	std::shared_ptr<inexor::entity_system::EntityTypeManager> entity_type_manager
)
{
	this->entity_type_manager = entity_type_manager;
	this->set_path("/entities/types/{entity_type_uuid: .*}/attributes/");
	this->set_method_handler("GET", bind(&EntityTypeApiEntitiesTypesEntity_type_uuidAttributesResource::GET_method_handler, this, placeholders::_1));
}

EntityTypeApiEntitiesTypesEntity_type_uuidAttributesResource::~EntityTypeApiEntitiesTypesEntity_type_uuidAttributesResource()
{
}

void EntityTypeApiEntitiesTypesEntity_type_uuidAttributesResource::GET_method_handler(const shared_ptr<Session> session) {

	const auto request = session->get_request();

	// Getting the path params
	const string entity_type_uuid = request->get_path_parameter("entity_type_uuid", "");



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

