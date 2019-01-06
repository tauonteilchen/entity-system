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
 * EntitySystem.h
 *
 * 
 */

#ifndef EntitySystem_H_
#define EntitySystem_H_


#include "ModelBase.h"

#include "RelationshipType.h"
#include "RelationshipInstance.h"
#include "EntityType.h"
#include "EntityInstance.h"
#include <vector>

namespace inexor {
namespace entity_system {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  EntitySystem
    : public ModelBase
{
public:
    EntitySystem();
    virtual ~EntitySystem();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(const nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// EntitySystem members

    /// <summary>
    /// 
    /// </summary>
    std::vector<EntityType>& getEntityTypes();
        /// <summary>
    /// 
    /// </summary>
    std::vector<RelationshipType>& getRelationshipTypes();
        /// <summary>
    /// 
    /// </summary>
    std::vector<EntityInstance>& getEntityInstances();
        /// <summary>
    /// 
    /// </summary>
    std::vector<RelationshipInstance>& getRelationshipInstances();
    
protected:
    std::vector<EntityType> m_Entity_types;

    std::vector<RelationshipType> m_Relationship_types;

    std::vector<EntityInstance> m_Entity_instances;

    std::vector<RelationshipInstance> m_Relationship_instances;

};

}
}
}
}

#endif /* EntitySystem_H_ */
