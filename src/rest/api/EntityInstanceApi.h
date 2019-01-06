/**
* Inexor Entity System
* No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
*
* OpenAPI spec version: 3.0.0
* Contact: info@inexor.org
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
/*
 * EntityInstanceApi.h
 *
 * 
 */

#ifndef EntityInstanceApi_H_
#define EntityInstanceApi_H_


#include <pistache/http.h>
#include <pistache/router.h>
#include <pistache/http_headers.h>
#include <pistache/optional.h>


#include "../model/Attribute.h"
#include "../model/EntityInstance.h"
#include "../model/EntitySystemMessage.h"
#include "../model/RelationshipInstance.h"
#include <string>

namespace inexor {
namespace entity_system {
namespace server {
namespace api {

using namespace inexor::entity_system::server::model;

class  EntityInstanceApi {
public:
    EntityInstanceApi(std::shared_ptr<Pistache::Rest::Router>);
    virtual ~EntityInstanceApi() {}
    void init();

    const std::string base = "/api/v1";

private:
    void setupRoutes();

    void create_entity_instance_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void create_or_update_entity_instance_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void create_or_update_entity_instance_attribute_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void delete_all_entity_instances_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void delete_entity_instance_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void delete_entity_instance_attribute_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void delete_relationship_instances_between_start_and_end_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void get_all_entity_instances_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void get_all_relationship_instances_by_relationship_type_of_entity_instance_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void get_all_relationship_instances_of_entity_instance_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void get_entity_instance_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void get_entity_instance_attribute_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void get_entity_instance_attributes_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void get_incoming_relationship_instances_by_relationship_type_of_entity_instance_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void get_incoming_relationship_instances_of_entity_instance_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void get_outgoing_relationship_instances_by_relationship_type_of_entity_instance_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void get_outgoing_relationship_instances_of_entity_instance_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void get_relationship_instances_between_start_and_end_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void entity_instance_api_default_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);

    std::shared_ptr<Pistache::Rest::Router> router;

    /// <summary>
    /// Creates an entity instance
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="entityInstance">The entity instanceas object</param>
    virtual void create_entity_instance(const EntityInstance &entityInstance, Pistache::Http::ResponseWriter &response) = 0;

    /// <summary>
    /// Creates or updates an entity instance
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="entityInstanceUuid">The UUID of the entity instance to create or update</param>
    /// <param name="entityInstance">The entity instance as object</param>
    virtual void create_or_update_entity_instance(const std::string &entityInstanceUuid, const EntityInstance &entityInstance, Pistache::Http::ResponseWriter &response) = 0;

    /// <summary>
    /// Creates (or updates if already exists) the attribute of the entity instance
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="entityInstanceUuid">The UUID of the entity instance</param>
    /// <param name="name">The name of the attribute</param>
    /// <param name="attribute">The attribute as object</param>
    virtual void create_or_update_entity_instance_attribute(const std::string &entityInstanceUuid, const std::string &name, const Attribute &attribute, Pistache::Http::ResponseWriter &response) = 0;

    /// <summary>
    /// Deletes all entity instances
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    virtual void delete_all_entity_instances(Pistache::Http::ResponseWriter &response) = 0;

    /// <summary>
    /// Deletes the entity instance with the given UUID
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="entityInstanceUuid">The UUID of the entity instance to delete</param>
    virtual void delete_entity_instance(const std::string &entityInstanceUuid, Pistache::Http::ResponseWriter &response) = 0;

    /// <summary>
    /// Deletes the attribute of the entity instance
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="entityInstanceUuid">The UUID of the entity instance</param>
    /// <param name="name">The name of the attribute</param>
    virtual void delete_entity_instance_attribute(const std::string &entityInstanceUuid, const std::string &name, Pistache::Http::ResponseWriter &response) = 0;

    /// <summary>
    /// Deletes all relationships instances between a start entity instance and an end entity instance
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="startEntityInstanceUuid">The UUID of the start entity instance</param>
    /// <param name="endEntityInstanceUuid">The UUID of the end entity instance</param>
    virtual void delete_relationship_instances_between_start_and_end(const std::string &startEntityInstanceUuid, const std::string &endEntityInstanceUuid, Pistache::Http::ResponseWriter &response) = 0;

    /// <summary>
    /// Returns all entity instances
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    virtual void get_all_entity_instances(Pistache::Http::ResponseWriter &response) = 0;

    /// <summary>
    /// Returns all incoming and outgoing relationship instances of a certain relationship type
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="entityInstanceUuid">The UUID of the entity instance</param>
    /// <param name="relationshipTypeUuid">The UUID of the relationship type</param>
    virtual void get_all_relationship_instances_by_relationship_type_of_entity_instance(const std::string &entityInstanceUuid, const std::string &relationshipTypeUuid, Pistache::Http::ResponseWriter &response) = 0;

    /// <summary>
    /// Returns all incoming and outgoing relationship instances of the entity instance
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="entityInstanceUuid">The UUID of the entity instance</param>
    virtual void get_all_relationship_instances_of_entity_instance(const std::string &entityInstanceUuid, Pistache::Http::ResponseWriter &response) = 0;

    /// <summary>
    /// Returns the entity instance with the given UUID
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="entityInstanceUuid">The UUID of the entity instance to retrieve</param>
    virtual void get_entity_instance(const std::string &entityInstanceUuid, Pistache::Http::ResponseWriter &response) = 0;

    /// <summary>
    /// Returns the value of the named attribute of the entity instance
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="entityInstanceUuid">The UUID of the entity instance</param>
    /// <param name="name">The name of the attribute</param>
    virtual void get_entity_instance_attribute(const std::string &entityInstanceUuid, const std::string &name, Pistache::Http::ResponseWriter &response) = 0;

    /// <summary>
    /// Returns all attributes of the entity instance with the given UUID
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="entityInstanceUuid">The UUID of the entity instance</param>
    virtual void get_entity_instance_attributes(const std::string &entityInstanceUuid, Pistache::Http::ResponseWriter &response) = 0;

    /// <summary>
    /// Returns all incoming and outgoing relationship instances of a certain relationship type
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="entityInstanceUuid">The UUID of the entity instance</param>
    /// <param name="relationshipTypeUuid">The UUID of the relationship type</param>
    virtual void get_incoming_relationship_instances_by_relationship_type_of_entity_instance(const std::string &entityInstanceUuid, const std::string &relationshipTypeUuid, Pistache::Http::ResponseWriter &response) = 0;

    /// <summary>
    /// Returns all incoming relationship instances of the entity instance
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="entityInstanceUuid">The UUID of the entity instance</param>
    virtual void get_incoming_relationship_instances_of_entity_instance(const std::string &entityInstanceUuid, Pistache::Http::ResponseWriter &response) = 0;

    /// <summary>
    /// Returns all incoming and outgoing relationship instances of a certain relationship type
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="entityInstanceUuid">The UUID of the entity instance</param>
    /// <param name="relationshipTypeUuid">The UUID of the relationship type</param>
    virtual void get_outgoing_relationship_instances_by_relationship_type_of_entity_instance(const std::string &entityInstanceUuid, const std::string &relationshipTypeUuid, Pistache::Http::ResponseWriter &response) = 0;

    /// <summary>
    /// Returns all outgoing relationship instances of the entity instance
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="entityInstanceUuid">The UUID of the entity instance</param>
    virtual void get_outgoing_relationship_instances_of_entity_instance(const std::string &entityInstanceUuid, Pistache::Http::ResponseWriter &response) = 0;

    /// <summary>
    /// Returns all relationships instances between a start entity instance and an end entity instance
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="startEntityInstanceUuid">The UUID of the start entity instance</param>
    /// <param name="endEntityInstanceUuid">The UUID of the end entity instance</param>
    virtual void get_relationship_instances_between_start_and_end(const std::string &startEntityInstanceUuid, const std::string &endEntityInstanceUuid, Pistache::Http::ResponseWriter &response) = 0;

};

}
}
}
}

#endif /* EntityInstanceApi_H_ */

