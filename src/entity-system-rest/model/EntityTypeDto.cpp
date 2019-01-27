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



#include "EntityTypeDto.hpp"

#include <string>
#include <sstream>
#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/json_parser.hpp>

using boost::property_tree::ptree;
using boost::property_tree::read_json;
using boost::property_tree::write_json;

namespace inexor {
namespace entity_system {
namespace rest {
namespace model {

	EntityTypeDto::EntityTypeDto()
	{
		entity_type_uuid = "";
		name = "";
	}

	EntityTypeDto::~EntityTypeDto()
	{
	}

	std::string EntityTypeDto::to_json_string()
	{
		std::stringstream ss;
		ptree pt;
		pt.put("entity_type_uuid", entity_type_uuid);
		pt.put("name", name);
		write_json(ss, pt, false);
		return ss.str();
	}

	void EntityTypeDto::from_json_string(std::string const& json_string)
	{
		std::stringstream ss(json_string);
		ptree pt;
		read_json(ss,pt);
		entity_type_uuid = pt.get("entity_type_uuid", "");
		name = pt.get("name", "");
	}

	std::string EntityTypeDto::get_entity_type_uuid() const
	{
		return entity_type_uuid;
	}

	void EntityTypeDto::set_entity_type_uuid(std::string entity_type_uuid)
	{
		this->entity_type_uuid = entity_type_uuid;
	}

	std::string EntityTypeDto::get_name() const
	{
		return name;
	}

	void EntityTypeDto::set_name(std::string name)
	{
		this->name = name;
	}

	std::vector<std::shared_ptr<AttributeDto>> EntityTypeDto::get_attributes() const
	{
		return attributes;
	}

	void EntityTypeDto::set_attributes(std::vector<std::shared_ptr<AttributeDto>> attributes)
	{
		this->attributes = attributes;
	}

}
}
}
}

