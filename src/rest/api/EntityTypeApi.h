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

/*
 * EntityTypeApi.h
 *
 * 
 */

#ifndef EntityTypeApi_H_
#define EntityTypeApi_H_

#include <memory>
#include <crossguid/guid.hpp>
#include <string>
#include <restbed>

#include "../../EntitySystem.hpp"
#include "../model/Attribute.h"
#include "../model/EntityInstance.h"
#include "../model/EntitySystemMessage.h"
#include "../model/EntityType.h"
#include "../model/RelationshipType.h"

using namespace inexor::entity_system::rest::model;
using namespace restbed;

namespace inexor {
namespace entity_system {
namespace rest {
namespace api {

class EntityTypeApi
{
public:
	EntityTypeApi();
	~EntityTypeApi();
	void createResources(std::shared_ptr<inexor::entity_system::EntitySystem> entity_system, std::shared_ptr<Service> service);
};


/// <summary>
/// Creates an entity type
/// </summary>
/// <remarks>
/// 
/// </remarks>
class  EntityTypeApiEntitiesTypesResource: public Resource
{
public:
	EntityTypeApiEntitiesTypesResource(std::shared_ptr<inexor::entity_system::EntitySystem> entity_system);
    virtual ~EntityTypeApiEntitiesTypesResource();
    void POST_method_handler(const std::shared_ptr<Session> session);
    void DELETE_method_handler(const std::shared_ptr<Session> session);
    void GET_method_handler(const std::shared_ptr<Session> session);
private:
	std::shared_ptr<inexor::entity_system::EntitySystem> entity_system;
};

/// <summary>
/// Creates (or updates if already exists) the entity type with the given UUID
/// </summary>
/// <remarks>
/// 
/// </remarks>
class  EntityTypeApiEntitiesTypesEntity_type_uuidResource: public Resource
{
public:
	EntityTypeApiEntitiesTypesEntity_type_uuidResource(std::shared_ptr<inexor::entity_system::EntitySystem> entity_system);
    virtual ~EntityTypeApiEntitiesTypesEntity_type_uuidResource();
    void POST_method_handler(const std::shared_ptr<Session> session);
    void DELETE_method_handler(const std::shared_ptr<Session> session);
    void GET_method_handler(const std::shared_ptr<Session> session);
private:
	std::shared_ptr<inexor::entity_system::EntitySystem> entity_system;
};

/// <summary>
/// Creates (or updates if already exists) the value of the named attribute of the entity type with the given UUID
/// </summary>
/// <remarks>
/// 
/// </remarks>
class  EntityTypeApiEntitiesTypesEntity_type_uuidAttributesNameResource: public Resource
{
public:
	EntityTypeApiEntitiesTypesEntity_type_uuidAttributesNameResource(std::shared_ptr<inexor::entity_system::EntitySystem> entity_system);
    virtual ~EntityTypeApiEntitiesTypesEntity_type_uuidAttributesNameResource();
    void POST_method_handler(const std::shared_ptr<Session> session);
    void DELETE_method_handler(const std::shared_ptr<Session> session);
    void GET_method_handler(const std::shared_ptr<Session> session);
private:
	std::shared_ptr<inexor::entity_system::EntitySystem> entity_system;
};

/// <summary>
/// Deletes all entity instances of the entity type with the given UUID
/// </summary>
/// <remarks>
/// 
/// </remarks>
class  EntityTypeApiEntitiesTypesEntity_type_uuidInstancesResource: public Resource
{
public:
	EntityTypeApiEntitiesTypesEntity_type_uuidInstancesResource(std::shared_ptr<inexor::entity_system::EntitySystem> entity_system);
    virtual ~EntityTypeApiEntitiesTypesEntity_type_uuidInstancesResource();
    void DELETE_method_handler(const std::shared_ptr<Session> session);
    void GET_method_handler(const std::shared_ptr<Session> session);
private:
	std::shared_ptr<inexor::entity_system::EntitySystem> entity_system;
};

/// <summary>
/// Returns all incoming relationship types of the entity type with the given UUID
/// </summary>
/// <remarks>
/// 
/// </remarks>
class  EntityTypeApiEntitiesTypesEntity_type_uuidRelationshipsIncomingResource: public Resource
{
public:
	EntityTypeApiEntitiesTypesEntity_type_uuidRelationshipsIncomingResource(std::shared_ptr<inexor::entity_system::EntitySystem> entity_system);
    virtual ~EntityTypeApiEntitiesTypesEntity_type_uuidRelationshipsIncomingResource();
    void GET_method_handler(const std::shared_ptr<Session> session);
private:
	std::shared_ptr<inexor::entity_system::EntitySystem> entity_system;
};

/// <summary>
/// Returns all outgoing relationship types of the entity type with the given UUID
/// </summary>
/// <remarks>
/// 
/// </remarks>
class  EntityTypeApiEntitiesTypesEntity_type_uuidRelationshipsOutgoingResource: public Resource
{
public:
	EntityTypeApiEntitiesTypesEntity_type_uuidRelationshipsOutgoingResource(std::shared_ptr<inexor::entity_system::EntitySystem> entity_system);
    virtual ~EntityTypeApiEntitiesTypesEntity_type_uuidRelationshipsOutgoingResource();
    void GET_method_handler(const std::shared_ptr<Session> session);
private:
	std::shared_ptr<inexor::entity_system::EntitySystem> entity_system;
};

/// <summary>
/// Returns all incoming and outgoing relationship types of the entity type with the given UUID
/// </summary>
/// <remarks>
/// 
/// </remarks>
class  EntityTypeApiEntitiesTypesEntity_type_uuidRelationshipsResource: public Resource
{
public:
	EntityTypeApiEntitiesTypesEntity_type_uuidRelationshipsResource(std::shared_ptr<inexor::entity_system::EntitySystem> entity_system);
    virtual ~EntityTypeApiEntitiesTypesEntity_type_uuidRelationshipsResource();
    void GET_method_handler(const std::shared_ptr<Session> session);
private:
	std::shared_ptr<inexor::entity_system::EntitySystem> entity_system;
};

/// <summary>
/// Returns all attributes of the given entity type with the given UUID
/// </summary>
/// <remarks>
/// 
/// </remarks>
class  EntityTypeApiEntitiesTypesEntity_type_uuidAttributesResource: public Resource
{
public:
	EntityTypeApiEntitiesTypesEntity_type_uuidAttributesResource(std::shared_ptr<inexor::entity_system::EntitySystem> entity_system);
    virtual ~EntityTypeApiEntitiesTypesEntity_type_uuidAttributesResource();
    void GET_method_handler(const std::shared_ptr<Session> session);
private:
	std::shared_ptr<inexor::entity_system::EntitySystem> entity_system;
};


}
}
}
}

#endif /* EntityTypeApi_H_ */
