// Inexor entity system prototype
// (c)2018 Inexor

#pragma once

#include "entity-type-instance/EntityTypeInstance.hpp"
#include "../../templates/TypeInstanceManagerTemplate.hpp"


namespace inexor {
namespace entity_system {


	/// A manager class for entity type instances.
    class EntityTypeInstanceManager : public TypeInstanceManagerTemplate<EntityTypeInstance>
	{            
		private:

			/// We need this entity type error
			/// to create the entity type instance error.
			const ENT_TYPE entity_type_error
				= std::make_shared<EntityType>("ERROR");

			/// This entity type instance error
			/// will be returned when a method fails.
			const ENT_TYPE_INST entity_type_instance_error
				= std::make_shared<EntityTypeInstance>(entity_type_error);

        protected:

			/// Constructor
			EntityTypeInstanceManager();

			/// Destructor
			~EntityTypeInstanceManager();
			
		public:

			/// Create an entity type instance.
			/// @param ent_type A const reference of a shared pointer
			/// to an entity type of which an instance will be created.
			/// @return A shared pointer to the entity type instance which was created.
			/// <br>If this method fails, entity_type_instance_error will be returned
			/// as error object.
			ENT_TYPE_INST create_entity_type_instance(const ENT_TYPE&);

			/// Returns the number of existing entity type instances.
			/// @return The number of existing entity type instances.
			const std::size_t get_entity_type_instance_count() const;

			/// Returns the number of existing entity type instances of given type.
			/// @param ? TODO
			const std::size_t get_entity_type_instances_count_of_type(const ENT_TYPE&);

			/// Returns all entity type instances.
			/// @return All entity type instances which exist in the entity system.
			const std::vector<ENT_TYPE_INST> get_all_entity_type_instances() const;

			/// Returns all entity type instances of given type.
			/// @param ? TODO
			const std::vector<ENT_TYPE_INST> get_all_entity_type_instances_of_type(const ENT_TYPE&);

			/// Delete all entity type instances
			void delete_all_entity_type_instances();

			// TODO: Delete by UUID!

	};


};
};
