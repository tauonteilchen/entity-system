// Inexor entity system
// (c)2018 Inexor

#pragma once

#include "entity-system/managers/entities/entity-type-builder-manager/EntityTypeBuilderManager.hpp"
#include "entity-system/providers/entities/entity-type-provider/EntityTypeProvider.hpp"

using namespace inexor::entity_system;
using namespace std;

namespace inexor {
namespace entity_system {
namespace type_system {

	/// @class BoolConstantEntityTypeProvider
    /// @brief Provides the entity type BOOL_CONSTANT.
	class BoolConstantEntityTypeProvider : public EntityTypeProvider
	{
		public:

			/// Constructor.
			BoolConstantEntityTypeProvider(
				shared_ptr<EntityTypeBuilderManager> entity_type_builder_manager
			) : EntityTypeProvider(
				entity_type_builder_manager,
				"BOOL_CONSTANT",
				{
					{ "name", DataType::STRING },
					{ "value", DataType::BOOL }
				},
				{
					{ "name", 1 << Feature::OUTPUT },
					{ "value", 1 << Feature::OUTPUT }
				}
			) {};

			/// Destructor.
			~BoolConstantEntityTypeProvider() {};

	};

}
}
}
