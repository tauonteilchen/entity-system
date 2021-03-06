// Inexor entity system
// (c)2018-2019 Inexor

#pragma once

#include "entity-system/model/relation-attributes/relation-attribute-types/RelationAttributeType.hpp"
#include "entity-system/model/entities/entity-types/EntityType.hpp"
#include "entity-system/model/base/type/TypeBase.hpp"
#include "entity-system/util/type-definitions/TypeDefinitions.hpp"
#include "entity-system/util/uuid/GUIDBase.hpp"


namespace inexor {
namespace entity_system {

	
	/// A base class for entity relation types.
	class RelationType : public TypeBase, public GUIDBase
	{
		private:

			/// The source entity type.
			ENT_TYPE source_entity_type;

			/// The target entity type.
			ENT_TYPE target_entity_type;

			/// Entity relation attribute types which
			/// are linked to this entity relation type.
			std::vector<REL_ATTR_TYPE> linked_rel_attr_types;

		public:

			/// Constructor.
			/// @param rel_type_name The name of the new relation type name.
			/// @param ent_type_source A const reference to a shared pointer of an
			/// entity type which is the source entity from which the relation will start.
			/// @param ent_type_target A const reference to a shared pointer of an
			/// entity type which is the target entity to which the relation will go.
			/// @note The GUID of the new entity relation type will
			/// be created automatically by the inheritance of GUIDBase!
			RelationType(const std::string&, const ENT_TYPE&, const ENT_TYPE&);

            /// @brief Constructor.
            /// @param ent_type_GUID The GUID of the entity type which will be created.
            /// @param rel_type_name The unique name of the realtion type which will be created.
			/// @param ent_type_source A const reference to a shared pointer of an
			/// entity type which is the source entity from which the relation will start.
			/// @param ent_type_target A const reference to a shared pointer of an
			/// entity type which is the target entity to which the relation will go.
			RelationType(const xg::Guid&, const std::string&, const ENT_TYPE&, const ENT_TYPE&);

			/// Destructor.
			~RelationType();

			/// Links an relation attribute type to this relation type.
			/// @param rel_attr_type A const reference to a shared pointer of an
			/// relation attribute type which will be linked to this relation type.
			void link_relation_attribute_type(const REL_ATTR_TYPE&);
			
			/// Returns all linked relation attribute types.
			/// @return A std::vector of shared pointers of relation attribute type.
			std::vector<REL_ATTR_TYPE> get_linked_attribute_types() const;

			/// Implement a data validation method as
			/// required by class inheritance of DataValidation!
			virtual ENTSYS_DATA_VALIDATION_RESULT validate() override;


	};


};
};
