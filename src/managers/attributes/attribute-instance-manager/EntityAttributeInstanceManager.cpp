// Inexor entity system prototype
// (c)2018-2019 Inexor

#include "EntityAttributeInstanceManager.hpp"
#include "../../../EntitySystem.hpp"


namespace inexor {
namespace entity_system {


	extern std::shared_ptr<EntitySystem> entsys;


    EntityAttributeInstanceManager::EntityAttributeInstanceManager() : InstanceManagerTemplate(entity_attribute_type_instance_error)
    {
		// TODO: Implement!
    }


    EntityAttributeInstanceManager::~EntityAttributeInstanceManager()
    {
		// TODO: Implement!
    }


	ENT_ATTR_INST EntityAttributeInstanceManager::create_entity_attribute_type_instance(const ENT_ATTR_TYPE& ent_attr_type)
	{
		// Create entity attribute type instance.
		ENT_ATTR_INST new_ent_attr_type_instance = std::make_shared<EntityAttributeInstance>(ent_attr_type);

		// Call template base class method.
		add_instance(new_ent_attr_type_instance->get_GUID(), new_ent_attr_type_instance);

        // Read only, no mutex required.
		return new_ent_attr_type_instance;
	}


	const std::size_t EntityAttributeInstanceManager::get_entity_attribute_type_instance_count() const
	{
		// Call template base class method.
        // Read only, no mutex required.
		return get_instance_count();
	}

	
	void EntityAttributeInstanceManager::delete_all_entity_attribute_type_instances()
	{
		// Call template base class method.
        // Mutex is implemented in base class.
		delete_all_instances();
	}


};
};
