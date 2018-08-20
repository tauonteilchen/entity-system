// Inexor entity system prototype
// (c)2018 Inexor

#include "EntityTypeManager.hpp"


namespace inexor {
namespace entity_system {
    

    EntityTypeManager::EntityTypeManager()
    {
		// TODO: implement!
    }


    EntityTypeManager::~EntityTypeManager()
    {
		// TODO: implement!
    }
	

	bool EntityTypeManager::does_entity_type_exist(const std::string& param_entity_type_name)
	{
		// Returns false is entity type does not already exist.
		return !(map_of_entity_types.end() == map_of_entity_types.find(param_entity_type_name.c_str()));
	}

	
	ENTSYS_RESULT EntityTypeManager::create_entity_type(const std::shared_ptr<EntityType>& param_new_entity_type)
	{
		if(ENTSYS_DATA_VALID != param_new_entity_type->validate())
		{
			error_message("error: data of new entity type is invalid!");
			return ENTSYS_ERROR_DATA_INVALID;
		}
		
		// Get the name of the new entity type.
		std::string new_ent_type_name = param_new_entity_type->get_entity_type_name();

		// Check if entity type with this name does already exist.
		if(false == does_entity_type_exist(new_ent_type_name))
		{
			// Add to map of entity types.
			map_of_entity_types[new_ent_type_name] = param_new_entity_type;
		}
		else
		{
			error_message("error: new entity type already exists!");
			return ENTSYS_ERROR_DATA_DUPLICATE;
		}

		return ENTSYS_SUCCESS;
	}


	std::size_t EntityTypeManager::get_entity_types_count() const
	{
		return map_of_entity_types.size();
	}


	ENTSYS_RESULT EntityTypeManager::delete_entity_type(const std::string& param_entity_type_name)
	{
		// TODO: [CRITICAL] Remove all instances of this
		// entity type before removing the entity type itself!
		map_of_entity_types.erase(param_entity_type_name);
		return ENTSYS_SUCCESS;
	}

	
	ENTSYS_RESULT EntityTypeManager::delete_entity_type(const std::shared_ptr<EntityType>& param_entity_type_name)
	{
		// TODO: [CRITICAL] Remove all instances of this
		// entity type before removing the entity type itself!
		return delete_entity_type(param_entity_type_name->get_entity_type_name());
	}


	bool EntityTypeManager::is_entity_attribute_type_linked_to_entity_type(const std::string& param_entity_attribute_type_name,
		                                                                   const std::string& param_entity_type_name)
	{
		return map_of_entity_types[param_entity_type_name]->is_entity_attribute_type_linked(param_entity_attribute_type_name);
	}


	bool EntityTypeManager::is_entity_attribute_type_linked_to_entity_type(const std::shared_ptr<EntityAttributeType>& param_entity_attribute_type,
		                                                                   const std::shared_ptr<EntityType>& param_entity_type)
	{
		return is_entity_attribute_type_linked_to_entity_type(param_entity_attribute_type->get_entity_attribute_type_name(),
			                                                  param_entity_type->get_entity_type_name());
	}


	ENTSYS_RESULT EntityTypeManager::link_entity_attribute_type_to_entity_type(const std::shared_ptr<EntityAttributeType>& param_entity_attribute_type,
		                                                                       const std::shared_ptr<EntityType>& param_entity_type)
	{
		// TODO: Do we need this wrapper ?
		return param_entity_type->link_entity_attribute_type_to_entity_type(param_entity_attribute_type);
	}


};
};
