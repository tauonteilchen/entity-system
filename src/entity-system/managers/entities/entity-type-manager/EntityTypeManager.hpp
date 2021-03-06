// Inexor entity system
// (c)2018-2019 Inexor

#pragma once

#include <vector>
#include <string>
#include <optional>
#include <unordered_map>
#include <boost/signals2.hpp>
#include <crossguid/guid.hpp>

#include "entity-system/listeners/entities/EntityTypeCreatedListener.hpp"
#include "entity-system/listeners/entities/EntityTypeDeletedListener.hpp"
#include "entity-system/model/entities/entity-types/EntityType.hpp"
#include "entity-system/managers/manager-templates/TypeManagerTemplate.hpp"


namespace inexor {
namespace entity_system {


    /// @class EntityTypeManager
	/// @brief A manager class for entity types.
	class EntityTypeManager : public TypeManagerTemplate<EntityType>
	{
		public:

			/// @brief Constructor.
			EntityTypeManager();

			/// @brief Destructor.
			~EntityTypeManager();
		
			/// @brief Creates a new entity type.
			/// @param ent_type_name The name of the new entity type.
            /// @return ?
			O_ENT_TYPE create_entity_type(const std::string&);


            /// @brief Creates a new entity type.
            /// @param ent_type_GUID The GUID of the new entity type.
            /// @param ent_type_name The name of the new entity type.
            /// @return ?
			O_ENT_TYPE create_entity_type(const xg::Guid&, const std::string&);
            

			/// @brief Checks if an entity type does already exist.
            /// @return True if the entity type already exists, false otherwise.
			bool does_entity_type_exist(const xg::Guid&);


			/// @brief Checks if an entity type does already exist.
			/// @param ent_type_name The name of the entity type.
            /// @return True if the entity type already exists, false otherwise.
            bool does_entity_type_exist(const std::string&);
			

			/// @brief Checks if an entity type does already exist.
			/// @param ent_type A const reference of a shared pointer to the entity type.
            /// @return True if the entity type already exists, false otherwise.
			bool does_entity_type_exist(const ENT_TYPE&);

            
            /// @brief Returns the number of existing entity types.
			/// @return The number of existing entity types.
			std::size_t get_entity_type_count() const;
			

            /// @brief Returns an entity type.
            /// @param ent_type_GUID The GUID of the entity type.
            /// @return A std::optional<ENT_TYPE> of the entity type.
			O_ENT_TYPE get_entity_type(const xg::Guid&);


            /// @brief Returns an entity type.
            /// @param ent_type_name The name of the entity type.
            /// @return A std::optional<ENT_TYPE> of the entity type.
			O_ENT_TYPE get_entity_type(const std::string&);


			/// @brief Deletes an entity type by GUID.
            /// @param ? The GUID of the entity type which will be deleted.
            /// @return ENTSYS_SUCCESS if deleting the entity type succeeded,
            /// <br>ENTSYS_ERROR if deleting the entity type failed.
			std::size_t delete_entity_type(const xg::Guid&);


            /// @brief Deletes an entity type by name.
			/// @param ent_type_name The name of the entity type which will be deleted.
            /// @return ENTSYS_SUCCESS if deleting the entity type succeeded,
            /// <br>ENTSYS_ERROR if deleting the entity type failed.
			std::size_t delete_entity_type(const std::string&);


			/// @brief Deletes an entity type by entity type.
			/// @param ent_type A const reference of a shared pointer to the entity type which will be deleted.
            /// @return ENTSYS_SUCCESS if deleting the entity type succeeded,
            /// <br>ENTSYS_ERROR if deleting the entity type failed.
			std::size_t delete_entity_type(const ENT_TYPE&);


			/// @brief Removes all types of entities.
			void delete_all_entity_types();


			/// @brief Registers a new listener
			void register_on_created(std::shared_ptr<EntityTypeCreatedListener> listener);


			/// @brief Registers a new listener
			void register_on_deleted(std::shared_ptr<EntityTypeDeletedListener> listener);


		private:


			/// Notifies all listeners that a new entity type has been created.
			void notify_entity_type_created(ENT_TYPE new_entity_type);


			/// Notifies all listeners that an entity type has been deleted.
			void notify_entity_type_deleted(const xg::Guid& type_GUID);


			/// Signal, that an entity type has been created.
			boost::signals2::signal<void(ENT_TYPE new_entity_type)> signal_entity_type_created;


			/// Signal, that an entity type has been deleted.
			boost::signals2::signal<void(const xg::Guid& type_GUID)> signal_entity_type_deleted;

	};


};
};
