// Inexor entity system
// (c)2018 Inexor

#pragma once

#include "type-system/providers/constants/IntConstantEntityTypeProvider.hpp"
#include "type-system/providers/constants/FloatConstantEntityTypeProvider.hpp"
#include "type-system/providers/constants/StringConstantEntityTypeProvider.hpp"

using namespace inexor::entity_system;
using namespace std;

namespace inexor {
namespace entity_system {
namespace type_system {

	/// @class ConstantsTypeSystemManager
    /// @brief Management of the type system.
	class ConstantsTypeSystemManager
	{
		public:

			/// Constructor.
			ConstantsTypeSystemManager(
				shared_ptr<IntConstantEntityTypeProvider> int_constant_entity_type_provider,
				shared_ptr<FloatConstantEntityTypeProvider> float_constant_entity_type_provider,
				shared_ptr<StringConstantEntityTypeProvider> string_constant_entity_type_provider
			);

			/// Destructor.
			~ConstantsTypeSystemManager();

			/// Initialization of the loggers
			void init();

		private:

			/// Provider for entity type INT_CONSTANT.
			shared_ptr<IntConstantEntityTypeProvider> int_constant_entity_type_provider;

			/// Provider for entity type FLOAT_CONSTANT.
			shared_ptr<FloatConstantEntityTypeProvider> float_constant_entity_type_provider;

			/// Provider for entity type STRING_CONSTANT.
			shared_ptr<StringConstantEntityTypeProvider> string_constant_entity_type_provider;

	};

}
}
}