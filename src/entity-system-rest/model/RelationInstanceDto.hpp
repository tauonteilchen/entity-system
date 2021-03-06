/**
 * Inexor Entity System
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * OpenAPI spec version: 3.0.0
 * Contact: info@inexor.org
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 4.0.0-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#pragma once

#include <string>
#include <vector>
#include <memory>

#include "AttributeDto.hpp"

namespace inexor {
namespace entity_system {
namespace rest {
namespace model {

	/// <summary>
	///
	/// </summary>
	class RelationInstanceDto
	{
		public:
			RelationInstanceDto();
			virtual ~RelationInstanceDto();

			std::string to_json_string();
			void from_json_string(std::string const& json_string);

			/// <summary>
			///
			/// </summary>
			std::string get_relation_instance_uuid() const;
			void set_relation_instance_uuid(std::string relation_instance_uuid);

			/// <summary>
			///
			/// </summary>
			std::string get_relation_type_uuid() const;
			void set_relation_type_uuid(std::string relation_type_uuid);

			/// <summary>
			///
			/// </summary>
			std::string get_start_node_entity_instance_uuid() const;
			void set_start_node_entity_instance_uuid(std::string start_node_entity_instance_uuid);

			/// <summary>
			///
			/// </summary>
			std::string get_end_node_entity_instance_uuid() const;
			void set_end_node_entity_instance_uuid(std::string end_node_entity_instance_uuid);

			/// <summary>
			///
			/// </summary>
			std::vector<std::shared_ptr<AttributeDto>> get_attributes() const;
			void set_attributes(std::vector<std::shared_ptr<AttributeDto>> attributes);

		protected:
			std::string relation_instance_uuid;
			std::string relation_type_uuid;
			std::string start_node_entity_instance_uuid;
			std::string end_node_entity_instance_uuid;
			std::vector<std::shared_ptr<AttributeDto>> attributes;
	};

}
}
}
}
