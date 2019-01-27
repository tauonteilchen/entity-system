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


#include "RelationTypeApi.hpp"


namespace inexor {
namespace entity_system {
namespace rest {
namespace api {


using namespace inexor::entity_system::rest::model;
using namespace xg;
using namespace restbed;
using namespace std;


RelationTypeApi::RelationTypeApi(
	std::shared_ptr<RelationTypeApiRelationsTypesRelation_type_uuidResource> spRelationTypeApiRelationsTypesRelation_type_uuidResource,
	std::shared_ptr<RelationTypeApiRelationsTypesResource> spRelationTypeApiRelationsTypesResource,
	std::shared_ptr<RelationTypeApiEntitiesTypesEntity_type_uuidRelationsIncomingResource> spRelationTypeApiEntitiesTypesEntity_type_uuidRelationsIncomingResource,
	std::shared_ptr<RelationTypeApiEntitiesTypesEntity_type_uuidRelationsOutgoingResource> spRelationTypeApiEntitiesTypesEntity_type_uuidRelationsOutgoingResource,
	std::shared_ptr<RelationTypeApiEntitiesInstancesEntity_instance_uuidRelationsRelation_type_uuidResource> spRelationTypeApiEntitiesInstancesEntity_instance_uuidRelationsRelation_type_uuidResource,
	std::shared_ptr<RelationTypeApiEntitiesTypesEntity_type_uuidRelationsResource> spRelationTypeApiEntitiesTypesEntity_type_uuidRelationsResource,
	std::shared_ptr<RelationTypeApiEntitiesInstancesEntity_instance_uuidRelationsRelation_type_uuidIncomingResource> spRelationTypeApiEntitiesInstancesEntity_instance_uuidRelationsRelation_type_uuidIncomingResource,
	std::shared_ptr<RelationTypeApiEntitiesInstancesEntity_instance_uuidRelationsRelation_type_uuidOutgoingResource> spRelationTypeApiEntitiesInstancesEntity_instance_uuidRelationsRelation_type_uuidOutgoingResource
)
{
	this->spRelationTypeApiRelationsTypesRelation_type_uuidResource = spRelationTypeApiRelationsTypesRelation_type_uuidResource;
	this->spRelationTypeApiRelationsTypesResource = spRelationTypeApiRelationsTypesResource;
	this->spRelationTypeApiEntitiesTypesEntity_type_uuidRelationsIncomingResource = spRelationTypeApiEntitiesTypesEntity_type_uuidRelationsIncomingResource;
	this->spRelationTypeApiEntitiesTypesEntity_type_uuidRelationsOutgoingResource = spRelationTypeApiEntitiesTypesEntity_type_uuidRelationsOutgoingResource;
	this->spRelationTypeApiEntitiesInstancesEntity_instance_uuidRelationsRelation_type_uuidResource = spRelationTypeApiEntitiesInstancesEntity_instance_uuidRelationsRelation_type_uuidResource;
	this->spRelationTypeApiEntitiesTypesEntity_type_uuidRelationsResource = spRelationTypeApiEntitiesTypesEntity_type_uuidRelationsResource;
	this->spRelationTypeApiEntitiesInstancesEntity_instance_uuidRelationsRelation_type_uuidIncomingResource = spRelationTypeApiEntitiesInstancesEntity_instance_uuidRelationsRelation_type_uuidIncomingResource;
	this->spRelationTypeApiEntitiesInstancesEntity_instance_uuidRelationsRelation_type_uuidOutgoingResource = spRelationTypeApiEntitiesInstancesEntity_instance_uuidRelationsRelation_type_uuidOutgoingResource;
}

RelationTypeApi::~RelationTypeApi() {}

void RelationTypeApi::publish_resources(std::shared_ptr<Service> service) {
	service->publish(spRelationTypeApiRelationsTypesRelation_type_uuidResource);
	service->publish(spRelationTypeApiRelationsTypesResource);
	service->publish(spRelationTypeApiEntitiesTypesEntity_type_uuidRelationsIncomingResource);
	service->publish(spRelationTypeApiEntitiesTypesEntity_type_uuidRelationsOutgoingResource);
	service->publish(spRelationTypeApiEntitiesInstancesEntity_instance_uuidRelationsRelation_type_uuidResource);
	service->publish(spRelationTypeApiEntitiesTypesEntity_type_uuidRelationsResource);
	service->publish(spRelationTypeApiEntitiesInstancesEntity_instance_uuidRelationsRelation_type_uuidIncomingResource);
	service->publish(spRelationTypeApiEntitiesInstancesEntity_instance_uuidRelationsRelation_type_uuidOutgoingResource);
}

RelationTypeApiRelationsTypesRelation_type_uuidResource::RelationTypeApiRelationsTypesRelation_type_uuidResource(
	std::shared_ptr<inexor::entity_system::RelationTypeManager> relation_type_manager
)
{
	this->relation_type_manager = relation_type_manager;
	this->set_path("/relations/types/{relation_type_uuid: .*}/");
	this->set_method_handler("POST", std::bind(&RelationTypeApiRelationsTypesRelation_type_uuidResource::POST_method_handler, this, std::placeholders::_1));
	this->set_method_handler("DELETE", std::bind(&RelationTypeApiRelationsTypesRelation_type_uuidResource::DELETE_method_handler, this, std::placeholders::_1));
	this->set_method_handler("GET", std::bind(&RelationTypeApiRelationsTypesRelation_type_uuidResource::GET_method_handler, this, std::placeholders::_1));
}

RelationTypeApiRelationsTypesRelation_type_uuidResource::~RelationTypeApiRelationsTypesRelation_type_uuidResource()
{
}

void RelationTypeApiRelationsTypesRelation_type_uuidResource::POST_method_handler(const std::shared_ptr<restbed::Session> session) {

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
			const std::string relation_type_uuid = request->get_path_parameter("relation_type_uuid", "");
			

			
			// Change the value of this variable to the appropriate response before sending the response
			int status_code = 200;
			
			/**
			 * Process the received information here
			 */
			
			if (status_code == 200) {
				session->close(200, "The created or updated relation type", { {"Connection", "close"} });
				return;
			}
			if (status_code == 0) {
				session->close(0, "unexpected error", { {"Connection", "close"} });
				return;
			}

		});
}

void RelationTypeApiRelationsTypesRelation_type_uuidResource::DELETE_method_handler(const std::shared_ptr<restbed::Session> session) {

	const auto request = session->get_request();

	// Getting the path params
	const std::string relation_type_uuid = request->get_path_parameter("relation_type_uuid", "");

	// Change the value of this variable to the appropriate response before sending the response
	int status_code = 200;

	/**
	 * Process the received information here
	 */

	if (status_code == 200) {
		std::shared_ptr<EntitySystemMessageDto> response = NULL;
		session->close(200, "Success message", { {"Connection", "close"} });
		return;
	}
	if (status_code == 0) {
		std::shared_ptr<EntitySystemMessageDto> response = NULL;
		session->close(0, "unexpected error", { {"Connection", "close"} });
		return;
	}

}

void RelationTypeApiRelationsTypesRelation_type_uuidResource::GET_method_handler(const std::shared_ptr<restbed::Session> session) {

	const auto request = session->get_request();

	// Getting the path params
	const std::string relation_type_uuid = request->get_path_parameter("relation_type_uuid", "");

	// Change the value of this variable to the appropriate response before sending the response
	int status_code = 200;

	/**
	 * Process the received information here
	 */

	if (status_code == 200) {
		std::shared_ptr<RelationTypeDto> response = NULL;
		session->close(200, "An relation type", { {"Connection", "close"} });
		return;
	}
	if (status_code == 0) {
		std::shared_ptr<EntitySystemMessageDto> response = NULL;
		session->close(0, "unexpected error", { {"Connection", "close"} });
		return;
	}

}


RelationTypeApiRelationsTypesResource::RelationTypeApiRelationsTypesResource(
	std::shared_ptr<inexor::entity_system::RelationTypeManager> relation_type_manager
)
{
	this->relation_type_manager = relation_type_manager;
	this->set_path("/relations/types/");
	this->set_method_handler("POST", std::bind(&RelationTypeApiRelationsTypesResource::POST_method_handler, this, std::placeholders::_1));
	this->set_method_handler("DELETE", std::bind(&RelationTypeApiRelationsTypesResource::DELETE_method_handler, this, std::placeholders::_1));
	this->set_method_handler("GET", std::bind(&RelationTypeApiRelationsTypesResource::GET_method_handler, this, std::placeholders::_1));
}

RelationTypeApiRelationsTypesResource::~RelationTypeApiRelationsTypesResource()
{
}

void RelationTypeApiRelationsTypesResource::POST_method_handler(const std::shared_ptr<restbed::Session> session) {

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
			
			// Change the value of this variable to the appropriate response before sending the response
			int status_code = 200;
			
			/**
			 * Process the received information here
			 */
			
			if (status_code == 200) {
				session->close(200, "The created relation type", { {"Connection", "close"} });
				return;
			}
			if (status_code == 0) {
				session->close(0, "unexpected error", { {"Connection", "close"} });
				return;
			}

		});
}

void RelationTypeApiRelationsTypesResource::DELETE_method_handler(const std::shared_ptr<restbed::Session> session) {

	const auto request = session->get_request();

	// Change the value of this variable to the appropriate response before sending the response
	int status_code = 200;

	/**
	 * Process the received information here
	 */

	if (status_code == 200) {
		std::shared_ptr<EntitySystemMessageDto> response = NULL;
		session->close(200, "Success message", { {"Connection", "close"} });
		return;
	}
	if (status_code == 0) {
		std::shared_ptr<EntitySystemMessageDto> response = NULL;
		session->close(0, "unexpected error", { {"Connection", "close"} });
		return;
	}

}
void RelationTypeApiRelationsTypesResource::GET_method_handler(const std::shared_ptr<restbed::Session> session) {

	const auto request = session->get_request();

	// Change the value of this variable to the appropriate response before sending the response
	int status_code = 200;

	/**
	 * Process the received information here
	 */

	if (status_code == 200) {
		std::shared_ptr<RelationTypeDto> response = NULL;
		session->close(200, "Array of relation types", { {"Connection", "close"} });
		return;
	}
	if (status_code == 0) {
		std::shared_ptr<EntitySystemMessageDto> response = NULL;
		session->close(0, "unexpected error", { {"Connection", "close"} });
		return;
	}

}


RelationTypeApiEntitiesTypesEntity_type_uuidRelationsIncomingResource::RelationTypeApiEntitiesTypesEntity_type_uuidRelationsIncomingResource(
	std::shared_ptr<inexor::entity_system::RelationTypeManager> relation_type_manager
)
{
	this->relation_type_manager = relation_type_manager;
	this->set_path("/entities/types/{entity_type_uuid: .*}/relations/incoming/");
	this->set_method_handler("GET", std::bind(&RelationTypeApiEntitiesTypesEntity_type_uuidRelationsIncomingResource::GET_method_handler, this, std::placeholders::_1));
}

RelationTypeApiEntitiesTypesEntity_type_uuidRelationsIncomingResource::~RelationTypeApiEntitiesTypesEntity_type_uuidRelationsIncomingResource()
{
}

void RelationTypeApiEntitiesTypesEntity_type_uuidRelationsIncomingResource::GET_method_handler(const std::shared_ptr<restbed::Session> session) {

	const auto request = session->get_request();

	// Getting the path params
	const std::string entity_type_uuid = request->get_path_parameter("entity_type_uuid", "");



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



RelationTypeApiEntitiesTypesEntity_type_uuidRelationsOutgoingResource::RelationTypeApiEntitiesTypesEntity_type_uuidRelationsOutgoingResource(
	std::shared_ptr<inexor::entity_system::RelationTypeManager> relation_type_manager
)
{
	this->relation_type_manager = relation_type_manager;
	this->set_path("/entities/types/{entity_type_uuid: .*}/relations/outgoing/");
	this->set_method_handler("GET", std::bind(&RelationTypeApiEntitiesTypesEntity_type_uuidRelationsOutgoingResource::GET_method_handler, this, std::placeholders::_1));
}

RelationTypeApiEntitiesTypesEntity_type_uuidRelationsOutgoingResource::~RelationTypeApiEntitiesTypesEntity_type_uuidRelationsOutgoingResource()
{
}

void RelationTypeApiEntitiesTypesEntity_type_uuidRelationsOutgoingResource::GET_method_handler(const std::shared_ptr<restbed::Session> session) {

	const auto request = session->get_request();

	// Getting the path params
	const std::string entity_type_uuid = request->get_path_parameter("entity_type_uuid", "");



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



RelationTypeApiEntitiesInstancesEntity_instance_uuidRelationsRelation_type_uuidResource::RelationTypeApiEntitiesInstancesEntity_instance_uuidRelationsRelation_type_uuidResource(
	std::shared_ptr<inexor::entity_system::RelationTypeManager> relation_type_manager
)
{
	this->relation_type_manager = relation_type_manager;
	this->set_path("/entities/instances/{entity_instance_uuid: .*}/relations/{relation_type_uuid: .*}/");
	this->set_method_handler("GET", std::bind(&RelationTypeApiEntitiesInstancesEntity_instance_uuidRelationsRelation_type_uuidResource::GET_method_handler, this, std::placeholders::_1));
}

RelationTypeApiEntitiesInstancesEntity_instance_uuidRelationsRelation_type_uuidResource::~RelationTypeApiEntitiesInstancesEntity_instance_uuidRelationsRelation_type_uuidResource()
{
}

void RelationTypeApiEntitiesInstancesEntity_instance_uuidRelationsRelation_type_uuidResource::GET_method_handler(const std::shared_ptr<restbed::Session> session) {

	const auto request = session->get_request();

	// Getting the path params
	const std::string entity_instance_uuid = request->get_path_parameter("entity_instance_uuid", "");
	const std::string relation_type_uuid = request->get_path_parameter("relation_type_uuid", "");



	// Change the value of this variable to the appropriate response before sending the response
	int status_code = 200;

	/**
	 * Process the received information here
	 */

	if (status_code == 200) {
		session->close(200, "Array of relation instances", { {"Connection", "close"} });
		return;
	}
	if (status_code == 0) {
		session->close(0, "unexpected error", { {"Connection", "close"} });
		return;
	}

}



RelationTypeApiEntitiesTypesEntity_type_uuidRelationsResource::RelationTypeApiEntitiesTypesEntity_type_uuidRelationsResource(
	std::shared_ptr<inexor::entity_system::RelationTypeManager> relation_type_manager
)
{
	this->relation_type_manager = relation_type_manager;
	this->set_path("/entities/types/{entity_type_uuid: .*}/relations/");
	this->set_method_handler("GET", std::bind(&RelationTypeApiEntitiesTypesEntity_type_uuidRelationsResource::GET_method_handler, this, std::placeholders::_1));
}

RelationTypeApiEntitiesTypesEntity_type_uuidRelationsResource::~RelationTypeApiEntitiesTypesEntity_type_uuidRelationsResource()
{
}

void RelationTypeApiEntitiesTypesEntity_type_uuidRelationsResource::GET_method_handler(const std::shared_ptr<restbed::Session> session) {

	const auto request = session->get_request();

	// Getting the path params
	const std::string entity_type_uuid = request->get_path_parameter("entity_type_uuid", "");



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



RelationTypeApiEntitiesInstancesEntity_instance_uuidRelationsRelation_type_uuidIncomingResource::RelationTypeApiEntitiesInstancesEntity_instance_uuidRelationsRelation_type_uuidIncomingResource(
	std::shared_ptr<inexor::entity_system::RelationTypeManager> relation_type_manager
)
{
	this->relation_type_manager = relation_type_manager;
	this->set_path("/entities/instances/{entity_instance_uuid: .*}/relations/{relation_type_uuid: .*}/incoming/");
	this->set_method_handler("GET", std::bind(&RelationTypeApiEntitiesInstancesEntity_instance_uuidRelationsRelation_type_uuidIncomingResource::GET_method_handler, this, std::placeholders::_1));
}

RelationTypeApiEntitiesInstancesEntity_instance_uuidRelationsRelation_type_uuidIncomingResource::~RelationTypeApiEntitiesInstancesEntity_instance_uuidRelationsRelation_type_uuidIncomingResource()
{
}

void RelationTypeApiEntitiesInstancesEntity_instance_uuidRelationsRelation_type_uuidIncomingResource::GET_method_handler(const std::shared_ptr<restbed::Session> session) {

	const auto request = session->get_request();

	// Getting the path params
	const std::string entity_instance_uuid = request->get_path_parameter("entity_instance_uuid", "");
	const std::string relation_type_uuid = request->get_path_parameter("relation_type_uuid", "");



	// Change the value of this variable to the appropriate response before sending the response
	int status_code = 200;

	/**
	 * Process the received information here
	 */

	if (status_code == 200) {
		session->close(200, "Array of relation instances", { {"Connection", "close"} });
		return;
	}
	if (status_code == 0) {
		session->close(0, "unexpected error", { {"Connection", "close"} });
		return;
	}

}



RelationTypeApiEntitiesInstancesEntity_instance_uuidRelationsRelation_type_uuidOutgoingResource::RelationTypeApiEntitiesInstancesEntity_instance_uuidRelationsRelation_type_uuidOutgoingResource(
	std::shared_ptr<inexor::entity_system::RelationTypeManager> relation_type_manager
)
{
	this->relation_type_manager = relation_type_manager;
	this->set_path("/entities/instances/{entity_instance_uuid: .*}/relations/{relation_type_uuid: .*}/outgoing/");
	this->set_method_handler("GET", std::bind(&RelationTypeApiEntitiesInstancesEntity_instance_uuidRelationsRelation_type_uuidOutgoingResource::GET_method_handler, this, std::placeholders::_1));
}

RelationTypeApiEntitiesInstancesEntity_instance_uuidRelationsRelation_type_uuidOutgoingResource::~RelationTypeApiEntitiesInstancesEntity_instance_uuidRelationsRelation_type_uuidOutgoingResource()
{
}

void RelationTypeApiEntitiesInstancesEntity_instance_uuidRelationsRelation_type_uuidOutgoingResource::GET_method_handler(const std::shared_ptr<restbed::Session> session) {

	const auto request = session->get_request();
			
	// Getting the path params
	const std::string entity_instance_uuid = request->get_path_parameter("entity_instance_uuid", "");
	const std::string relation_type_uuid = request->get_path_parameter("relation_type_uuid", "");



	// Change the value of this variable to the appropriate response before sending the response
	int status_code = 200;

	/**
	 * Process the received information here
	 */

	if (status_code == 200) {
		session->close(200, "Array of relation instances", { {"Connection", "close"} });
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

