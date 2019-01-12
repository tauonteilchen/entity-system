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

/*
 * EntitySystemMessage.h
 *
 * 
 */

#ifndef EntitySystemMessage_H_
#define EntitySystemMessage_H_



#include <string>
#include <memory>

namespace inexor {
namespace entity_system {
namespace rest {
namespace model {

/// <summary>
/// 
/// </summary>
class  EntitySystemMessage
{
public:
    EntitySystemMessage();
    virtual ~EntitySystemMessage();
    
    std::string toJsonString();
    void fromJsonString(std::string const& jsonString);

    /////////////////////////////////////////////
    /// EntitySystemMessage members
    
    /// <summary>
    /// 
    /// </summary>
    int32_t getCode() const;
    void setCode(int32_t value);
    /// <summary>
    /// 
    /// </summary>
    std::string getMessage() const;
    void setMessage(std::string value);

protected:
    int32_t m_Code;
    std::string m_Message;
};

}
}
}
}

#endif /* EntitySystemMessage_H_ */
