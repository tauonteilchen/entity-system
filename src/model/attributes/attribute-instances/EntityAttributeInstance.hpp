// Inexor entity system prototype
// (c)2018-2019 Inexor

#pragma once

#include "../../../model/attributes/attribute-types/EntityAttributeType.hpp"
#include "../../../util/type-definitions/TypeDefinitions.hpp"
#include "../../../model/data/container/DataContainer.hpp"
#include "../../../model/base/instance/Instance.hpp"
#include "../../../util/uuid/GUIDBase.hpp"


namespace inexor {
namespace entity_system {


	/// A base class for entity attribute type instances.
	class EntityAttributeInstance : public InstanceBase<EntityAttributeType>, public DataContainer, public GUIDBase
	{
		public:

			/// Constructor.
			/// @param ent_attr_type A reference to a shared pointer of
			/// an entity attribute type of which an instance will be created.
			/// @note the GUID of the new entity attribute type instance will
			/// be created automatically by the inheritance of GUIDBase!
			EntityAttributeInstance(const ENT_ATTR_TYPE&);

			/// Destructor.
			~EntityAttributeInstance();

			// Note: Set and get methods are already implemented by inheriting from DataContainer.

	};


};
};
