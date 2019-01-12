// Inexor entity system prototype
// (c)2018-2019 Inexor

#include "EntityTypeManager.hpp"


namespace inexor {
namespace entity_system {
    

	EntityTypeManager::EntityTypeManager() : TypeManagerTemplate(entity_type_error)
	{
		// TODO: Implement!
	}


	EntityTypeManager::~EntityTypeManager()
	{
		// TODO: Implement!
	}


	bool EntityTypeManager::does_entity_type_exist(const std::string& ent_type_name)
	{
		// Call method of the template base class.
		return does_type_exist(ent_type_name);
	}


	bool EntityTypeManager::does_entity_type_exist(const ENT_TYPE& ent_type)
	{
		// Call method of the template base class.
		return does_entity_type_exist(ent_type->get_type_name());
	}


    /// Checks if an entity type does already exist.
    bool EntityTypeManager::does_entity_type_exist(const xg::Guid& type_GUID)
    {
        return does_entity_type_exist(get_type(type_GUID)->get_type_name());
    }


	ENT_TYPE EntityTypeManager::create_entity_type(const std::string& ent_type_name)
	{
		// Check if an entity type with this name does already exist.
		if(! is_type_name_valid(ent_type_name))
		{
			// This entity type does already exist.
			// TODO: Throw error message.
			return entity_type_error;
		}
		// TODO: Add more validation here.

		// Create a new entity type.
		ENT_TYPE new_entity_type = std::make_shared<EntityType>(ent_type_name);

		// Add the new instance to the type map.
		// Call method of the template base class.
		add_type(ent_type_name, new_entity_type);

		return new_entity_type;
	}


	std::size_t EntityTypeManager::get_entity_type_count() const
	{
		// Call method of the template base class.
		return get_type_count();
	}


	void EntityTypeManager::delete_entity_type(const std::string& ent_type_name)
	{
		// Call method of the template base class.
		delete_type(ent_type_name);
	}


	void EntityTypeManager::delete_entity_type(const ENT_TYPE& ent_type_name)
	{
		// Call method of the template base class.
		delete_type(ent_type_name->get_type_name());
	}

    
	void EntityTypeManager::delete_entity_type(const xg::Guid& type_GUID)
    {
		// Call method of the template base class.
        delete_type(type_GUID);
    }


	void EntityTypeManager::delete_all_entity_types()
	{
		// Call method of the template base class.
		// TODO: Make sure all entity type instances will
		// be deleted before deleting the entity types.
		delete_all_types();
	}


};
};
