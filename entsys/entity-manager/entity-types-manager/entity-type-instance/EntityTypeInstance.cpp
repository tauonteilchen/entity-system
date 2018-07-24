// Inexor entity system prototype
// (c)2018 Inexor

#include "EntityTypeInstance.hpp"
#include "../../../EntitySystem.hpp"

extern inexor::entsys::EntitySystem* entity_system;


namespace inexor {
namespace entsys {


    EntityTypeInstance::EntityTypeInstance()
    {
    }


    EntityTypeInstance::~EntityTypeInstance()
    {
    }


    EntityTypeInstance::EntityTypeInstance(const std::string& type_name)
    {
        // TODO: Does this constructor call of an inherited class even work?
        EntityType(entity_system->get_entity_type(type_name));
    }


};
};
