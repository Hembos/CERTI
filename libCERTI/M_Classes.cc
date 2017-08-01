// Generated on 2017 August Tue, 01 at 16:48:15 by the CERTI message generator
#include <string>
#include <vector>
#include "M_Classes.hh"
// ----------------------------------------------------------------------------
// CERTI - HLA RunTime Infrastructure
// Copyright (C) 2002-2008  ONERA
//
// This program is free software ; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public License
// as published by the Free Software Foundation ; either version 2 of
// the License, or (at your option) Any later version.
//
// This program is distributed in the hope that it will be useful, but
// WITHOUT ANY WARRANTY ; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
// Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public
// License along with this program ; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307
// USA
//
// ----------------------------------------------------------------------------
// CERTI Messages description
// ----------------------------------------------------------------------------
// The messages related classes will be placed in the certi package
namespace certi {

EventRetraction::EventRetraction() {
    sendingFederate=0;
    SN=0;
}

void EventRetraction::serialize(libhla::MessageBuffer& msgBuffer) {
    //Specific serialization code
    msgBuffer.write_uint32(sendingFederate);
    msgBuffer.write_uint64(SN);
}

void EventRetraction::deserialize(libhla::MessageBuffer& msgBuffer) {
    //Specific deserialization code
    sendingFederate = static_cast<FederateHandle>(msgBuffer.read_uint32());
    SN = msgBuffer.read_uint64();
}

std::ostream& operator<<(std::ostream& os, const EventRetraction& msg) {
    os << "[EventRetraction - Begin]" << std::endl;
    
    // === Specific show code {
    os << "  sendingFederate = " << msg.sendingFederate << std::endl;
    os << "  SN = " << msg.SN << std::endl;
    // } Specific show code ===
    
    os << "[EventRetraction - End]" << std::endl;
    return os;
}

M_Open_Connexion::M_Open_Connexion() {
    this->messageName = "M_Open_Connexion";
    this->type = Message::OPEN_CONNEXION;
    //versionMajor= <no default value in message spec using builtin>
    //versionMinor= <no default value in message spec using builtin>
}

void M_Open_Connexion::serialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::serialize(msgBuffer);
    //Specific serialization code
    msgBuffer.write_uint32(versionMajor);
    msgBuffer.write_uint32(versionMinor);
}

void M_Open_Connexion::deserialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::deserialize(msgBuffer);
    //Specific deserialization code
    versionMajor = msgBuffer.read_uint32();
    versionMinor = msgBuffer.read_uint32();
}

std::ostream& operator<<(std::ostream& os, const M_Open_Connexion& msg) {
    os << "[M_Open_Connexion - Begin]" << std::endl;
    
    os << static_cast<const M_Open_Connexion::Super&>(msg); // show parent class
    
    // === Specific show code {
    os << "  versionMajor = " << msg.versionMajor << std::endl;
    os << "  versionMinor = " << msg.versionMinor << std::endl;
    // } Specific show code ===
    
    os << "[M_Open_Connexion - End]" << std::endl;
    return os;
}

M_Close_Connexion::M_Close_Connexion() {
    this->messageName = "M_Close_Connexion";
    this->type = Message::CLOSE_CONNEXION;
}

M_Create_Federation_Execution::M_Create_Federation_Execution() {
    this->messageName = "M_Create_Federation_Execution";
    this->type = Message::CREATE_FEDERATION_EXECUTION;
    //federationName= <no default value in message spec using builtin>
    //FEDid= <no default value in message spec using builtin>
}

void M_Create_Federation_Execution::serialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::serialize(msgBuffer);
    //Specific serialization code
    msgBuffer.write_string(federationName);
    msgBuffer.write_string(FEDid);
}

void M_Create_Federation_Execution::deserialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::deserialize(msgBuffer);
    //Specific deserialization code
    msgBuffer.read_string(federationName);
    msgBuffer.read_string(FEDid);
}

std::ostream& operator<<(std::ostream& os, const M_Create_Federation_Execution& msg) {
    os << "[M_Create_Federation_Execution - Begin]" << std::endl;
    
    os << static_cast<const M_Create_Federation_Execution::Super&>(msg); // show parent class
    
    // === Specific show code {
    os << "  federationName = " << msg.federationName << std::endl;
    os << "  FEDid = " << msg.FEDid << std::endl;
    // } Specific show code ===
    
    os << "[M_Create_Federation_Execution - End]" << std::endl;
    return os;
}

M_Destroy_Federation_Execution::M_Destroy_Federation_Execution() {
    this->messageName = "M_Destroy_Federation_Execution";
    this->type = Message::DESTROY_FEDERATION_EXECUTION;
    //federationName= <no default value in message spec using builtin>
}

void M_Destroy_Federation_Execution::serialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::serialize(msgBuffer);
    //Specific serialization code
    msgBuffer.write_string(federationName);
}

void M_Destroy_Federation_Execution::deserialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::deserialize(msgBuffer);
    //Specific deserialization code
    msgBuffer.read_string(federationName);
}

std::ostream& operator<<(std::ostream& os, const M_Destroy_Federation_Execution& msg) {
    os << "[M_Destroy_Federation_Execution - Begin]" << std::endl;
    
    os << static_cast<const M_Destroy_Federation_Execution::Super&>(msg); // show parent class
    
    // === Specific show code {
    os << "  federationName = " << msg.federationName << std::endl;
    // } Specific show code ===
    
    os << "[M_Destroy_Federation_Execution - End]" << std::endl;
    return os;
}

M_Join_Federation_Execution::M_Join_Federation_Execution() {
    this->messageName = "M_Join_Federation_Execution";
    this->type = Message::JOIN_FEDERATION_EXECUTION;
    //federate= <no default value in message spec using builtin>
    //federationName= <no default value in message spec using builtin>
    //federateName= <no default value in message spec using builtin>
}

void M_Join_Federation_Execution::serialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::serialize(msgBuffer);
    //Specific serialization code
    msgBuffer.write_uint32(federate);
    msgBuffer.write_string(federationName);
    msgBuffer.write_string(federateName);
}

void M_Join_Federation_Execution::deserialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::deserialize(msgBuffer);
    //Specific deserialization code
    federate = static_cast<FederateHandle>(msgBuffer.read_uint32());
    msgBuffer.read_string(federationName);
    msgBuffer.read_string(federateName);
}

std::ostream& operator<<(std::ostream& os, const M_Join_Federation_Execution& msg) {
    os << "[M_Join_Federation_Execution - Begin]" << std::endl;
    
    os << static_cast<const M_Join_Federation_Execution::Super&>(msg); // show parent class
    
    // === Specific show code {
    os << "  federate = " << msg.federate << std::endl;
    os << "  federationName = " << msg.federationName << std::endl;
    os << "  federateName = " << msg.federateName << std::endl;
    // } Specific show code ===
    
    os << "[M_Join_Federation_Execution - End]" << std::endl;
    return os;
}

M_Resign_Federation_Execution::M_Resign_Federation_Execution() {
    this->messageName = "M_Resign_Federation_Execution";
    this->type = Message::RESIGN_FEDERATION_EXECUTION;
    //resignAction= <no default value in message spec using builtin>
}

void M_Resign_Federation_Execution::serialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::serialize(msgBuffer);
    //Specific serialization code
    msgBuffer.write_uint16(resignAction);
}

void M_Resign_Federation_Execution::deserialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::deserialize(msgBuffer);
    //Specific deserialization code
    resignAction = static_cast<ResignAction>(msgBuffer.read_uint16());
}

std::ostream& operator<<(std::ostream& os, const M_Resign_Federation_Execution& msg) {
    os << "[M_Resign_Federation_Execution - Begin]" << std::endl;
    
    os << static_cast<const M_Resign_Federation_Execution::Super&>(msg); // show parent class
    
    // === Specific show code {
    os << "  resignAction = " << msg.resignAction << std::endl;
    // } Specific show code ===
    
    os << "[M_Resign_Federation_Execution - End]" << std::endl;
    return os;
}

M_Register_Federation_Synchronization_Point::M_Register_Federation_Synchronization_Point() {
    this->messageName = "M_Register_Federation_Synchronization_Point";
    this->type = Message::REGISTER_FEDERATION_SYNCHRONIZATION_POINT;
    //federateSet= <no default value in message spec using builtin>
}

void M_Register_Federation_Synchronization_Point::serialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::serialize(msgBuffer);
    //Specific serialization code
    uint32_t federateSetSize = federateSet.size();
    msgBuffer.write_uint32(federateSetSize);
    for (uint32_t i = 0; i < federateSetSize; ++i) {
        msgBuffer.write_uint32(federateSet[i]);
    }
}

void M_Register_Federation_Synchronization_Point::deserialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::deserialize(msgBuffer);
    //Specific deserialization code
    uint32_t federateSetSize = msgBuffer.read_uint32();
    federateSet.resize(federateSetSize);
    for (uint32_t i = 0; i < federateSetSize; ++i) {
        federateSet[i] = static_cast<FederateHandle>(msgBuffer.read_uint32());
    }
}

std::ostream& operator<<(std::ostream& os, const M_Register_Federation_Synchronization_Point& msg) {
    os << "[M_Register_Federation_Synchronization_Point - Begin]" << std::endl;
    
    os << static_cast<const M_Register_Federation_Synchronization_Point::Super&>(msg); // show parent class
    
    // === Specific show code {
    os << "  federateSet [] =" << std::endl;
    for (const auto& element: msg.federateSet) {
        os << element;
    }
    os << std::endl;
    // } Specific show code ===
    
    os << "[M_Register_Federation_Synchronization_Point - End]" << std::endl;
    return os;
}

M_Synchronization_Point_Registration_Failed::M_Synchronization_Point_Registration_Failed() {
    this->messageName = "M_Synchronization_Point_Registration_Failed";
    this->type = Message::SYNCHRONIZATION_POINT_REGISTRATION_FAILED;
}

M_Synchronization_Point_Registration_Succeeded::M_Synchronization_Point_Registration_Succeeded() {
    this->messageName = "M_Synchronization_Point_Registration_Succeeded";
    this->type = Message::SYNCHRONIZATION_POINT_REGISTRATION_SUCCEEDED;
}

M_Announce_Synchronization_Point::M_Announce_Synchronization_Point() {
    this->messageName = "M_Announce_Synchronization_Point";
    this->type = Message::ANNOUNCE_SYNCHRONIZATION_POINT;
}

M_Synchronization_Point_Achieved::M_Synchronization_Point_Achieved() {
    this->messageName = "M_Synchronization_Point_Achieved";
    this->type = Message::SYNCHRONIZATION_POINT_ACHIEVED;
}

M_Federation_Synchronized::M_Federation_Synchronized() {
    this->messageName = "M_Federation_Synchronized";
    this->type = Message::FEDERATION_SYNCHRONIZED;
}

M_Request_Federation_Save::M_Request_Federation_Save() {
    this->messageName = "M_Request_Federation_Save";
    this->type = Message::REQUEST_FEDERATION_SAVE;
}

M_Initiate_Federate_Save::M_Initiate_Federate_Save() {
    this->messageName = "M_Initiate_Federate_Save";
    this->type = Message::INITIATE_FEDERATE_SAVE;
}

M_Federate_Save_Begun::M_Federate_Save_Begun() {
    this->messageName = "M_Federate_Save_Begun";
    this->type = Message::FEDERATE_SAVE_BEGUN;
}

M_Federate_Save_Complete::M_Federate_Save_Complete() {
    this->messageName = "M_Federate_Save_Complete";
    this->type = Message::FEDERATE_SAVE_COMPLETE;
}

M_Federate_Save_Not_Complete::M_Federate_Save_Not_Complete() {
    this->messageName = "M_Federate_Save_Not_Complete";
    this->type = Message::FEDERATE_SAVE_NOT_COMPLETE;
}

M_Federation_Saved::M_Federation_Saved() {
    this->messageName = "M_Federation_Saved";
    this->type = Message::FEDERATION_SAVED;
}

M_Federation_Not_Saved::M_Federation_Not_Saved() {
    this->messageName = "M_Federation_Not_Saved";
    this->type = Message::FEDERATION_NOT_SAVED;
}

M_Request_Federation_Restore::M_Request_Federation_Restore() {
    this->messageName = "M_Request_Federation_Restore";
    this->type = Message::REQUEST_FEDERATION_RESTORE;
}

M_Request_Federation_Restore_Failed::M_Request_Federation_Restore_Failed() {
    this->messageName = "M_Request_Federation_Restore_Failed";
    this->type = Message::REQUEST_FEDERATION_RESTORE_FAILED;
    //reason= <no default value in message spec using builtin>
}

void M_Request_Federation_Restore_Failed::serialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::serialize(msgBuffer);
    //Specific serialization code
    msgBuffer.write_string(reason);
}

void M_Request_Federation_Restore_Failed::deserialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::deserialize(msgBuffer);
    //Specific deserialization code
    msgBuffer.read_string(reason);
}

std::ostream& operator<<(std::ostream& os, const M_Request_Federation_Restore_Failed& msg) {
    os << "[M_Request_Federation_Restore_Failed - Begin]" << std::endl;
    
    os << static_cast<const M_Request_Federation_Restore_Failed::Super&>(msg); // show parent class
    
    // === Specific show code {
    os << "  reason = " << msg.reason << std::endl;
    // } Specific show code ===
    
    os << "[M_Request_Federation_Restore_Failed - End]" << std::endl;
    return os;
}

M_Request_Federation_Restore_Succeeded::M_Request_Federation_Restore_Succeeded() {
    this->messageName = "M_Request_Federation_Restore_Succeeded";
    this->type = Message::REQUEST_FEDERATION_RESTORE_SUCCEEDED;
}

M_Initiate_Federate_Restore::M_Initiate_Federate_Restore() {
    this->messageName = "M_Initiate_Federate_Restore";
    this->type = Message::INITIATE_FEDERATE_RESTORE;
    //federate= <no default value in message spec using builtin>
}

void M_Initiate_Federate_Restore::serialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::serialize(msgBuffer);
    //Specific serialization code
    msgBuffer.write_uint32(federate);
}

void M_Initiate_Federate_Restore::deserialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::deserialize(msgBuffer);
    //Specific deserialization code
    federate = static_cast<FederateHandle>(msgBuffer.read_uint32());
}

std::ostream& operator<<(std::ostream& os, const M_Initiate_Federate_Restore& msg) {
    os << "[M_Initiate_Federate_Restore - Begin]" << std::endl;
    
    os << static_cast<const M_Initiate_Federate_Restore::Super&>(msg); // show parent class
    
    // === Specific show code {
    os << "  federate = " << msg.federate << std::endl;
    // } Specific show code ===
    
    os << "[M_Initiate_Federate_Restore - End]" << std::endl;
    return os;
}

M_Federate_Restore_Complete::M_Federate_Restore_Complete() {
    this->messageName = "M_Federate_Restore_Complete";
    this->type = Message::FEDERATE_RESTORE_COMPLETE;
}

M_Federate_Restore_Not_Complete::M_Federate_Restore_Not_Complete() {
    this->messageName = "M_Federate_Restore_Not_Complete";
    this->type = Message::FEDERATE_RESTORE_NOT_COMPLETE;
}

M_Federation_Restored::M_Federation_Restored() {
    this->messageName = "M_Federation_Restored";
    this->type = Message::FEDERATION_RESTORED;
}

M_Federation_Not_Restored::M_Federation_Not_Restored() {
    this->messageName = "M_Federation_Not_Restored";
    this->type = Message::FEDERATION_NOT_RESTORED;
}

M_Federation_Restore_Begun::M_Federation_Restore_Begun() {
    this->messageName = "M_Federation_Restore_Begun";
    this->type = Message::FEDERATION_RESTORE_BEGUN;
}

M_Publish_Object_Class::M_Publish_Object_Class() {
    this->messageName = "M_Publish_Object_Class";
    this->type = Message::PUBLISH_OBJECT_CLASS;
    //objectClass= <no default value in message spec using builtin>
    //attributes= <no default value in message spec using builtin>
}

void M_Publish_Object_Class::serialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::serialize(msgBuffer);
    //Specific serialization code
    msgBuffer.write_uint32(objectClass);
    uint32_t attributesSize = attributes.size();
    msgBuffer.write_uint32(attributesSize);
    for (uint32_t i = 0; i < attributesSize; ++i) {
        msgBuffer.write_uint32(attributes[i]);
    }
}

void M_Publish_Object_Class::deserialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::deserialize(msgBuffer);
    //Specific deserialization code
    objectClass = static_cast<ObjectClassHandle>(msgBuffer.read_uint32());
    uint32_t attributesSize = msgBuffer.read_uint32();
    attributes.resize(attributesSize);
    for (uint32_t i = 0; i < attributesSize; ++i) {
        attributes[i] = static_cast<AttributeHandle>(msgBuffer.read_uint32());
    }
}

std::ostream& operator<<(std::ostream& os, const M_Publish_Object_Class& msg) {
    os << "[M_Publish_Object_Class - Begin]" << std::endl;
    
    os << static_cast<const M_Publish_Object_Class::Super&>(msg); // show parent class
    
    // === Specific show code {
    os << "  objectClass = " << msg.objectClass << std::endl;
    os << "  attributes [] =" << std::endl;
    for (const auto& element: msg.attributes) {
        os << element;
    }
    os << std::endl;
    // } Specific show code ===
    
    os << "[M_Publish_Object_Class - End]" << std::endl;
    return os;
}

M_Unpublish_Object_Class::M_Unpublish_Object_Class() {
    this->messageName = "M_Unpublish_Object_Class";
    this->type = Message::UNPUBLISH_OBJECT_CLASS;
    //objectClass= <no default value in message spec using builtin>
}

void M_Unpublish_Object_Class::serialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::serialize(msgBuffer);
    //Specific serialization code
    msgBuffer.write_uint32(objectClass);
}

void M_Unpublish_Object_Class::deserialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::deserialize(msgBuffer);
    //Specific deserialization code
    objectClass = static_cast<ObjectClassHandle>(msgBuffer.read_uint32());
}

std::ostream& operator<<(std::ostream& os, const M_Unpublish_Object_Class& msg) {
    os << "[M_Unpublish_Object_Class - Begin]" << std::endl;
    
    os << static_cast<const M_Unpublish_Object_Class::Super&>(msg); // show parent class
    
    // === Specific show code {
    os << "  objectClass = " << msg.objectClass << std::endl;
    // } Specific show code ===
    
    os << "[M_Unpublish_Object_Class - End]" << std::endl;
    return os;
}

M_Publish_Interaction_Class::M_Publish_Interaction_Class() {
    this->messageName = "M_Publish_Interaction_Class";
    this->type = Message::PUBLISH_INTERACTION_CLASS;
    //interactionClass= <no default value in message spec using builtin>
}

void M_Publish_Interaction_Class::serialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::serialize(msgBuffer);
    //Specific serialization code
    msgBuffer.write_uint32(interactionClass);
}

void M_Publish_Interaction_Class::deserialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::deserialize(msgBuffer);
    //Specific deserialization code
    interactionClass = static_cast<InteractionClassHandle>(msgBuffer.read_uint32());
}

std::ostream& operator<<(std::ostream& os, const M_Publish_Interaction_Class& msg) {
    os << "[M_Publish_Interaction_Class - Begin]" << std::endl;
    
    os << static_cast<const M_Publish_Interaction_Class::Super&>(msg); // show parent class
    
    // === Specific show code {
    os << "  interactionClass = " << msg.interactionClass << std::endl;
    // } Specific show code ===
    
    os << "[M_Publish_Interaction_Class - End]" << std::endl;
    return os;
}

M_Unpublish_Interaction_Class::M_Unpublish_Interaction_Class() {
    this->messageName = "M_Unpublish_Interaction_Class";
    this->type = Message::UNPUBLISH_INTERACTION_CLASS;
    //interactionClass= <no default value in message spec using builtin>
}

void M_Unpublish_Interaction_Class::serialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::serialize(msgBuffer);
    //Specific serialization code
    msgBuffer.write_uint32(interactionClass);
}

void M_Unpublish_Interaction_Class::deserialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::deserialize(msgBuffer);
    //Specific deserialization code
    interactionClass = static_cast<InteractionClassHandle>(msgBuffer.read_uint32());
}

std::ostream& operator<<(std::ostream& os, const M_Unpublish_Interaction_Class& msg) {
    os << "[M_Unpublish_Interaction_Class - Begin]" << std::endl;
    
    os << static_cast<const M_Unpublish_Interaction_Class::Super&>(msg); // show parent class
    
    // === Specific show code {
    os << "  interactionClass = " << msg.interactionClass << std::endl;
    // } Specific show code ===
    
    os << "[M_Unpublish_Interaction_Class - End]" << std::endl;
    return os;
}

M_Subscribe_Object_Class_Attributes::M_Subscribe_Object_Class_Attributes() {
    this->messageName = "M_Subscribe_Object_Class_Attributes";
    this->type = Message::SUBSCRIBE_OBJECT_CLASS_ATTRIBUTES;
    //objectClass= <no default value in message spec using builtin>
    //attributes= <no default value in message spec using builtin>
    active=true;
}

void M_Subscribe_Object_Class_Attributes::serialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::serialize(msgBuffer);
    //Specific serialization code
    msgBuffer.write_uint32(objectClass);
    uint32_t attributesSize = attributes.size();
    msgBuffer.write_uint32(attributesSize);
    for (uint32_t i = 0; i < attributesSize; ++i) {
        msgBuffer.write_uint32(attributes[i]);
    }
    msgBuffer.write_bool(active);
}

void M_Subscribe_Object_Class_Attributes::deserialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::deserialize(msgBuffer);
    //Specific deserialization code
    objectClass = static_cast<ObjectClassHandle>(msgBuffer.read_uint32());
    uint32_t attributesSize = msgBuffer.read_uint32();
    attributes.resize(attributesSize);
    for (uint32_t i = 0; i < attributesSize; ++i) {
        attributes[i] = static_cast<AttributeHandle>(msgBuffer.read_uint32());
    }
    active = msgBuffer.read_bool();
}

std::ostream& operator<<(std::ostream& os, const M_Subscribe_Object_Class_Attributes& msg) {
    os << "[M_Subscribe_Object_Class_Attributes - Begin]" << std::endl;
    
    os << static_cast<const M_Subscribe_Object_Class_Attributes::Super&>(msg); // show parent class
    
    // === Specific show code {
    os << "  objectClass = " << msg.objectClass << std::endl;
    os << "  attributes [] =" << std::endl;
    for (const auto& element: msg.attributes) {
        os << element;
    }
    os << std::endl;
    os << "  active = " << msg.active << std::endl;
    // } Specific show code ===
    
    os << "[M_Subscribe_Object_Class_Attributes - End]" << std::endl;
    return os;
}

M_Unsubscribe_Object_Class::M_Unsubscribe_Object_Class() {
    this->messageName = "M_Unsubscribe_Object_Class";
    this->type = Message::UNSUBSCRIBE_OBJECT_CLASS;
    //objectClass= <no default value in message spec using builtin>
}

void M_Unsubscribe_Object_Class::serialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::serialize(msgBuffer);
    //Specific serialization code
    msgBuffer.write_uint32(objectClass);
}

void M_Unsubscribe_Object_Class::deserialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::deserialize(msgBuffer);
    //Specific deserialization code
    objectClass = static_cast<ObjectClassHandle>(msgBuffer.read_uint32());
}

std::ostream& operator<<(std::ostream& os, const M_Unsubscribe_Object_Class& msg) {
    os << "[M_Unsubscribe_Object_Class - Begin]" << std::endl;
    
    os << static_cast<const M_Unsubscribe_Object_Class::Super&>(msg); // show parent class
    
    // === Specific show code {
    os << "  objectClass = " << msg.objectClass << std::endl;
    // } Specific show code ===
    
    os << "[M_Unsubscribe_Object_Class - End]" << std::endl;
    return os;
}

M_Subscribe_Interaction_Class::M_Subscribe_Interaction_Class() {
    this->messageName = "M_Subscribe_Interaction_Class";
    this->type = Message::SUBSCRIBE_INTERACTION_CLASS;
    //interactionClass= <no default value in message spec using builtin>
}

void M_Subscribe_Interaction_Class::serialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::serialize(msgBuffer);
    //Specific serialization code
    msgBuffer.write_uint32(interactionClass);
}

void M_Subscribe_Interaction_Class::deserialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::deserialize(msgBuffer);
    //Specific deserialization code
    interactionClass = static_cast<InteractionClassHandle>(msgBuffer.read_uint32());
}

std::ostream& operator<<(std::ostream& os, const M_Subscribe_Interaction_Class& msg) {
    os << "[M_Subscribe_Interaction_Class - Begin]" << std::endl;
    
    os << static_cast<const M_Subscribe_Interaction_Class::Super&>(msg); // show parent class
    
    // === Specific show code {
    os << "  interactionClass = " << msg.interactionClass << std::endl;
    // } Specific show code ===
    
    os << "[M_Subscribe_Interaction_Class - End]" << std::endl;
    return os;
}

M_Unsubscribe_Interaction_Class::M_Unsubscribe_Interaction_Class() {
    this->messageName = "M_Unsubscribe_Interaction_Class";
    this->type = Message::UNSUBSCRIBE_INTERACTION_CLASS;
    //interactionClass= <no default value in message spec using builtin>
}

void M_Unsubscribe_Interaction_Class::serialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::serialize(msgBuffer);
    //Specific serialization code
    msgBuffer.write_uint32(interactionClass);
}

void M_Unsubscribe_Interaction_Class::deserialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::deserialize(msgBuffer);
    //Specific deserialization code
    interactionClass = static_cast<InteractionClassHandle>(msgBuffer.read_uint32());
}

std::ostream& operator<<(std::ostream& os, const M_Unsubscribe_Interaction_Class& msg) {
    os << "[M_Unsubscribe_Interaction_Class - Begin]" << std::endl;
    
    os << static_cast<const M_Unsubscribe_Interaction_Class::Super&>(msg); // show parent class
    
    // === Specific show code {
    os << "  interactionClass = " << msg.interactionClass << std::endl;
    // } Specific show code ===
    
    os << "[M_Unsubscribe_Interaction_Class - End]" << std::endl;
    return os;
}

M_Start_Registration_For_Object_Class::M_Start_Registration_For_Object_Class() {
    this->messageName = "M_Start_Registration_For_Object_Class";
    this->type = Message::START_REGISTRATION_FOR_OBJECT_CLASS;
    //objectClass= <no default value in message spec using builtin>
}

void M_Start_Registration_For_Object_Class::serialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::serialize(msgBuffer);
    //Specific serialization code
    msgBuffer.write_uint32(objectClass);
}

void M_Start_Registration_For_Object_Class::deserialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::deserialize(msgBuffer);
    //Specific deserialization code
    objectClass = static_cast<ObjectClassHandle>(msgBuffer.read_uint32());
}

std::ostream& operator<<(std::ostream& os, const M_Start_Registration_For_Object_Class& msg) {
    os << "[M_Start_Registration_For_Object_Class - Begin]" << std::endl;
    
    os << static_cast<const M_Start_Registration_For_Object_Class::Super&>(msg); // show parent class
    
    // === Specific show code {
    os << "  objectClass = " << msg.objectClass << std::endl;
    // } Specific show code ===
    
    os << "[M_Start_Registration_For_Object_Class - End]" << std::endl;
    return os;
}

M_Stop_Registration_For_Object_Class::M_Stop_Registration_For_Object_Class() {
    this->messageName = "M_Stop_Registration_For_Object_Class";
    this->type = Message::STOP_REGISTRATION_FOR_OBJECT_CLASS;
    //objectClass= <no default value in message spec using builtin>
}

void M_Stop_Registration_For_Object_Class::serialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::serialize(msgBuffer);
    //Specific serialization code
    msgBuffer.write_uint32(objectClass);
}

void M_Stop_Registration_For_Object_Class::deserialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::deserialize(msgBuffer);
    //Specific deserialization code
    objectClass = static_cast<ObjectClassHandle>(msgBuffer.read_uint32());
}

std::ostream& operator<<(std::ostream& os, const M_Stop_Registration_For_Object_Class& msg) {
    os << "[M_Stop_Registration_For_Object_Class - Begin]" << std::endl;
    
    os << static_cast<const M_Stop_Registration_For_Object_Class::Super&>(msg); // show parent class
    
    // === Specific show code {
    os << "  objectClass = " << msg.objectClass << std::endl;
    // } Specific show code ===
    
    os << "[M_Stop_Registration_For_Object_Class - End]" << std::endl;
    return os;
}

M_Turn_Interactions_On::M_Turn_Interactions_On() {
    this->messageName = "M_Turn_Interactions_On";
    this->type = Message::TURN_INTERACTIONS_ON;
    //interactionClass= <no default value in message spec using builtin>
}

void M_Turn_Interactions_On::serialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::serialize(msgBuffer);
    //Specific serialization code
    msgBuffer.write_uint32(interactionClass);
}

void M_Turn_Interactions_On::deserialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::deserialize(msgBuffer);
    //Specific deserialization code
    interactionClass = static_cast<InteractionClassHandle>(msgBuffer.read_uint32());
}

std::ostream& operator<<(std::ostream& os, const M_Turn_Interactions_On& msg) {
    os << "[M_Turn_Interactions_On - Begin]" << std::endl;
    
    os << static_cast<const M_Turn_Interactions_On::Super&>(msg); // show parent class
    
    // === Specific show code {
    os << "  interactionClass = " << msg.interactionClass << std::endl;
    // } Specific show code ===
    
    os << "[M_Turn_Interactions_On - End]" << std::endl;
    return os;
}

M_Turn_Interactions_Off::M_Turn_Interactions_Off() {
    this->messageName = "M_Turn_Interactions_Off";
    this->type = Message::TURN_INTERACTIONS_OFF;
    //interactionClass= <no default value in message spec using builtin>
}

void M_Turn_Interactions_Off::serialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::serialize(msgBuffer);
    //Specific serialization code
    msgBuffer.write_uint32(interactionClass);
}

void M_Turn_Interactions_Off::deserialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::deserialize(msgBuffer);
    //Specific deserialization code
    interactionClass = static_cast<InteractionClassHandle>(msgBuffer.read_uint32());
}

std::ostream& operator<<(std::ostream& os, const M_Turn_Interactions_Off& msg) {
    os << "[M_Turn_Interactions_Off - Begin]" << std::endl;
    
    os << static_cast<const M_Turn_Interactions_Off::Super&>(msg); // show parent class
    
    // === Specific show code {
    os << "  interactionClass = " << msg.interactionClass << std::endl;
    // } Specific show code ===
    
    os << "[M_Turn_Interactions_Off - End]" << std::endl;
    return os;
}

M_Register_Object_Instance::M_Register_Object_Instance() {
    this->messageName = "M_Register_Object_Instance";
    this->type = Message::REGISTER_OBJECT_INSTANCE;
    //objectClass= <no default value in message spec using builtin>
    //object= <no default value in message spec using builtin>
    _hasObjectName=false;
    //objectName= <no default value in message spec using builtin>
}

void M_Register_Object_Instance::serialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::serialize(msgBuffer);
    //Specific serialization code
    msgBuffer.write_uint32(objectClass);
    msgBuffer.write_uint32(object);
    msgBuffer.write_bool(_hasObjectName);
    if (_hasObjectName) {
        msgBuffer.write_string(objectName);
    }
}

void M_Register_Object_Instance::deserialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::deserialize(msgBuffer);
    //Specific deserialization code
    objectClass = static_cast<ObjectClassHandle>(msgBuffer.read_uint32());
    object = static_cast<ObjectHandle>(msgBuffer.read_uint32());
    _hasObjectName = msgBuffer.read_bool();
    if (_hasObjectName) {
        msgBuffer.read_string(objectName);
    }
}

std::ostream& operator<<(std::ostream& os, const M_Register_Object_Instance& msg) {
    os << "[M_Register_Object_Instance - Begin]" << std::endl;
    
    os << static_cast<const M_Register_Object_Instance::Super&>(msg); // show parent class
    
    // === Specific show code {
    os << "  objectClass = " << msg.objectClass << std::endl;
    os << "  object = " << msg.object << std::endl;
    os << "  (opt) objectName =" << msg.objectName << std::endl;
    // } Specific show code ===
    
    os << "[M_Register_Object_Instance - End]" << std::endl;
    return os;
}

M_Update_Attribute_Values::M_Update_Attribute_Values() {
    this->messageName = "M_Update_Attribute_Values";
    this->type = Message::UPDATE_ATTRIBUTE_VALUES;
    //objectClass= <no default value in message spec using builtin>
    //object= <no default value in message spec using builtin>
    //attributes= <no default value in message spec using builtin>
    //values= <no default value in message spec using builtin>
    _hasEventRetraction=false;
    //eventRetraction= <no default value in message spec using builtin>
}

void M_Update_Attribute_Values::serialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::serialize(msgBuffer);
    //Specific serialization code
    msgBuffer.write_uint32(objectClass);
    msgBuffer.write_uint32(object);
    uint32_t attributesSize = attributes.size();
    msgBuffer.write_uint32(attributesSize);
    for (uint32_t i = 0; i < attributesSize; ++i) {
        msgBuffer.write_uint32(attributes[i]);
    }
    uint32_t valuesSize = values.size();
    msgBuffer.write_uint32(valuesSize);
    for (uint32_t i = 0; i < valuesSize; ++i) {
        //serialize native whose representation is 'repeated' byte 
        msgBuffer.write_uint32(values[i].size());
        msgBuffer.write_bytes(&(values[i][0]),values[i].size());
    }
    msgBuffer.write_bool(_hasEventRetraction);
    if (_hasEventRetraction) {
        eventRetraction.serialize(msgBuffer);
    }
}

void M_Update_Attribute_Values::deserialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::deserialize(msgBuffer);
    //Specific deserialization code
    objectClass = static_cast<ObjectClassHandle>(msgBuffer.read_uint32());
    object = static_cast<ObjectHandle>(msgBuffer.read_uint32());
    uint32_t attributesSize = msgBuffer.read_uint32();
    attributes.resize(attributesSize);
    for (uint32_t i = 0; i < attributesSize; ++i) {
        attributes[i] = static_cast<AttributeHandle>(msgBuffer.read_uint32());
    }
    uint32_t valuesSize = msgBuffer.read_uint32();
    values.resize(valuesSize);
    for (uint32_t i = 0; i < valuesSize; ++i) {
        //deserialize native whose representation is 'repeated' byte 
        values[i].resize(msgBuffer.read_uint32());
        msgBuffer.read_bytes(&(values[i][0]),values[i].size());
    }
    _hasEventRetraction = msgBuffer.read_bool();
    if (_hasEventRetraction) {
        eventRetraction.deserialize(msgBuffer);
    }
}

std::ostream& operator<<(std::ostream& os, const M_Update_Attribute_Values& msg) {
    os << "[M_Update_Attribute_Values - Begin]" << std::endl;
    
    os << static_cast<const M_Update_Attribute_Values::Super&>(msg); // show parent class
    
    // === Specific show code {
    os << "  objectClass = " << msg.objectClass << std::endl;
    os << "  object = " << msg.object << std::endl;
    os << "  attributes [] =" << std::endl;
    for (const auto& element: msg.attributes) {
        os << element;
    }
    os << std::endl;
    os << "  values [] =" << std::endl;
    for (const auto& element: msg.values) {
        os << "// TODO field <values> of type <AttributeValue_t>";
    }
    os << std::endl;
    os << "  (opt) eventRetraction =" << msg.eventRetraction << std::endl;
    // } Specific show code ===
    
    os << "[M_Update_Attribute_Values - End]" << std::endl;
    return os;
}

M_Discover_Object_Instance::M_Discover_Object_Instance() {
    this->messageName = "M_Discover_Object_Instance";
    this->type = Message::DISCOVER_OBJECT_INSTANCE;
    //objectClass= <no default value in message spec using builtin>
    //object= <no default value in message spec using builtin>
    //objectName= <no default value in message spec using builtin>
    _hasEventRetraction=false;
    //eventRetraction= <no default value in message spec using builtin>
}

void M_Discover_Object_Instance::serialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::serialize(msgBuffer);
    //Specific serialization code
    msgBuffer.write_uint32(objectClass);
    msgBuffer.write_uint32(object);
    msgBuffer.write_string(objectName);
    msgBuffer.write_bool(_hasEventRetraction);
    if (_hasEventRetraction) {
        eventRetraction.serialize(msgBuffer);
    }
}

void M_Discover_Object_Instance::deserialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::deserialize(msgBuffer);
    //Specific deserialization code
    objectClass = static_cast<ObjectClassHandle>(msgBuffer.read_uint32());
    object = static_cast<ObjectHandle>(msgBuffer.read_uint32());
    msgBuffer.read_string(objectName);
    _hasEventRetraction = msgBuffer.read_bool();
    if (_hasEventRetraction) {
        eventRetraction.deserialize(msgBuffer);
    }
}

std::ostream& operator<<(std::ostream& os, const M_Discover_Object_Instance& msg) {
    os << "[M_Discover_Object_Instance - Begin]" << std::endl;
    
    os << static_cast<const M_Discover_Object_Instance::Super&>(msg); // show parent class
    
    // === Specific show code {
    os << "  objectClass = " << msg.objectClass << std::endl;
    os << "  object = " << msg.object << std::endl;
    os << "  objectName = " << msg.objectName << std::endl;
    os << "  (opt) eventRetraction =" << msg.eventRetraction << std::endl;
    // } Specific show code ===
    
    os << "[M_Discover_Object_Instance - End]" << std::endl;
    return os;
}

M_Reflect_Attribute_Values::M_Reflect_Attribute_Values() {
    this->messageName = "M_Reflect_Attribute_Values";
    this->type = Message::REFLECT_ATTRIBUTE_VALUES;
    //objectClass= <no default value in message spec using builtin>
    //object= <no default value in message spec using builtin>
    //attributes= <no default value in message spec using builtin>
    //values= <no default value in message spec using builtin>
    _hasEventRetraction=false;
    //eventRetraction= <no default value in message spec using builtin>
}

void M_Reflect_Attribute_Values::serialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::serialize(msgBuffer);
    //Specific serialization code
    msgBuffer.write_uint32(objectClass);
    msgBuffer.write_uint32(object);
    uint32_t attributesSize = attributes.size();
    msgBuffer.write_uint32(attributesSize);
    for (uint32_t i = 0; i < attributesSize; ++i) {
        msgBuffer.write_uint32(attributes[i]);
    }
    uint32_t valuesSize = values.size();
    msgBuffer.write_uint32(valuesSize);
    for (uint32_t i = 0; i < valuesSize; ++i) {
        //serialize native whose representation is 'repeated' byte 
        msgBuffer.write_uint32(values[i].size());
        msgBuffer.write_bytes(&(values[i][0]),values[i].size());
    }
    msgBuffer.write_bool(_hasEventRetraction);
    if (_hasEventRetraction) {
        eventRetraction.serialize(msgBuffer);
    }
}

void M_Reflect_Attribute_Values::deserialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::deserialize(msgBuffer);
    //Specific deserialization code
    objectClass = static_cast<ObjectClassHandle>(msgBuffer.read_uint32());
    object = static_cast<ObjectHandle>(msgBuffer.read_uint32());
    uint32_t attributesSize = msgBuffer.read_uint32();
    attributes.resize(attributesSize);
    for (uint32_t i = 0; i < attributesSize; ++i) {
        attributes[i] = static_cast<AttributeHandle>(msgBuffer.read_uint32());
    }
    uint32_t valuesSize = msgBuffer.read_uint32();
    values.resize(valuesSize);
    for (uint32_t i = 0; i < valuesSize; ++i) {
        //deserialize native whose representation is 'repeated' byte 
        values[i].resize(msgBuffer.read_uint32());
        msgBuffer.read_bytes(&(values[i][0]),values[i].size());
    }
    _hasEventRetraction = msgBuffer.read_bool();
    if (_hasEventRetraction) {
        eventRetraction.deserialize(msgBuffer);
    }
}

std::ostream& operator<<(std::ostream& os, const M_Reflect_Attribute_Values& msg) {
    os << "[M_Reflect_Attribute_Values - Begin]" << std::endl;
    
    os << static_cast<const M_Reflect_Attribute_Values::Super&>(msg); // show parent class
    
    // === Specific show code {
    os << "  objectClass = " << msg.objectClass << std::endl;
    os << "  object = " << msg.object << std::endl;
    os << "  attributes [] =" << std::endl;
    for (const auto& element: msg.attributes) {
        os << element;
    }
    os << std::endl;
    os << "  values [] =" << std::endl;
    for (const auto& element: msg.values) {
        os << "// TODO field <values> of type <AttributeValue_t>";
    }
    os << std::endl;
    os << "  (opt) eventRetraction =" << msg.eventRetraction << std::endl;
    // } Specific show code ===
    
    os << "[M_Reflect_Attribute_Values - End]" << std::endl;
    return os;
}

M_Send_Interaction::M_Send_Interaction() {
    this->messageName = "M_Send_Interaction";
    this->type = Message::SEND_INTERACTION;
    //interactionClass= <no default value in message spec using builtin>
    //parameters= <no default value in message spec using builtin>
    //values= <no default value in message spec using builtin>
    //region= <no default value in message spec using builtin>
    _hasEventRetraction=false;
    //eventRetraction= <no default value in message spec using builtin>
}

void M_Send_Interaction::serialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::serialize(msgBuffer);
    //Specific serialization code
    msgBuffer.write_uint32(interactionClass);
    uint32_t parametersSize = parameters.size();
    msgBuffer.write_uint32(parametersSize);
    for (uint32_t i = 0; i < parametersSize; ++i) {
        msgBuffer.write_uint32(parameters[i]);
    }
    uint32_t valuesSize = values.size();
    msgBuffer.write_uint32(valuesSize);
    for (uint32_t i = 0; i < valuesSize; ++i) {
        //serialize native whose representation is 'repeated' byte 
        msgBuffer.write_uint32(values[i].size());
        msgBuffer.write_bytes(&(values[i][0]),values[i].size());
    }
    msgBuffer.write_uint32(region);
    msgBuffer.write_bool(_hasEventRetraction);
    if (_hasEventRetraction) {
        eventRetraction.serialize(msgBuffer);
    }
}

void M_Send_Interaction::deserialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::deserialize(msgBuffer);
    //Specific deserialization code
    interactionClass = static_cast<InteractionClassHandle>(msgBuffer.read_uint32());
    uint32_t parametersSize = msgBuffer.read_uint32();
    parameters.resize(parametersSize);
    for (uint32_t i = 0; i < parametersSize; ++i) {
        parameters[i] = static_cast<ParameterHandle>(msgBuffer.read_uint32());
    }
    uint32_t valuesSize = msgBuffer.read_uint32();
    values.resize(valuesSize);
    for (uint32_t i = 0; i < valuesSize; ++i) {
        //deserialize native whose representation is 'repeated' byte 
        values[i].resize(msgBuffer.read_uint32());
        msgBuffer.read_bytes(&(values[i][0]),values[i].size());
    }
    region = static_cast<RegionHandle>(msgBuffer.read_uint32());
    _hasEventRetraction = msgBuffer.read_bool();
    if (_hasEventRetraction) {
        eventRetraction.deserialize(msgBuffer);
    }
}

std::ostream& operator<<(std::ostream& os, const M_Send_Interaction& msg) {
    os << "[M_Send_Interaction - Begin]" << std::endl;
    
    os << static_cast<const M_Send_Interaction::Super&>(msg); // show parent class
    
    // === Specific show code {
    os << "  interactionClass = " << msg.interactionClass << std::endl;
    os << "  parameters [] =" << std::endl;
    for (const auto& element: msg.parameters) {
        os << element;
    }
    os << std::endl;
    os << "  values [] =" << std::endl;
    for (const auto& element: msg.values) {
        os << "// TODO field <values> of type <ParameterValue_t>";
    }
    os << std::endl;
    os << "  region = " << msg.region << std::endl;
    os << "  (opt) eventRetraction =" << msg.eventRetraction << std::endl;
    // } Specific show code ===
    
    os << "[M_Send_Interaction - End]" << std::endl;
    return os;
}

M_Receive_Interaction::M_Receive_Interaction() {
    this->messageName = "M_Receive_Interaction";
    this->type = Message::RECEIVE_INTERACTION;
    //interactionClass= <no default value in message spec using builtin>
    //parameters= <no default value in message spec using builtin>
    //values= <no default value in message spec using builtin>
    //region= <no default value in message spec using builtin>
    _hasEventRetraction=false;
    //eventRetraction= <no default value in message spec using builtin>
}

void M_Receive_Interaction::serialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::serialize(msgBuffer);
    //Specific serialization code
    msgBuffer.write_uint32(interactionClass);
    uint32_t parametersSize = parameters.size();
    msgBuffer.write_uint32(parametersSize);
    for (uint32_t i = 0; i < parametersSize; ++i) {
        msgBuffer.write_uint32(parameters[i]);
    }
    uint32_t valuesSize = values.size();
    msgBuffer.write_uint32(valuesSize);
    for (uint32_t i = 0; i < valuesSize; ++i) {
        //serialize native whose representation is 'repeated' byte 
        msgBuffer.write_uint32(values[i].size());
        msgBuffer.write_bytes(&(values[i][0]),values[i].size());
    }
    msgBuffer.write_uint32(region);
    msgBuffer.write_bool(_hasEventRetraction);
    if (_hasEventRetraction) {
        eventRetraction.serialize(msgBuffer);
    }
}

void M_Receive_Interaction::deserialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::deserialize(msgBuffer);
    //Specific deserialization code
    interactionClass = static_cast<InteractionClassHandle>(msgBuffer.read_uint32());
    uint32_t parametersSize = msgBuffer.read_uint32();
    parameters.resize(parametersSize);
    for (uint32_t i = 0; i < parametersSize; ++i) {
        parameters[i] = static_cast<ParameterHandle>(msgBuffer.read_uint32());
    }
    uint32_t valuesSize = msgBuffer.read_uint32();
    values.resize(valuesSize);
    for (uint32_t i = 0; i < valuesSize; ++i) {
        //deserialize native whose representation is 'repeated' byte 
        values[i].resize(msgBuffer.read_uint32());
        msgBuffer.read_bytes(&(values[i][0]),values[i].size());
    }
    region = static_cast<RegionHandle>(msgBuffer.read_uint32());
    _hasEventRetraction = msgBuffer.read_bool();
    if (_hasEventRetraction) {
        eventRetraction.deserialize(msgBuffer);
    }
}

std::ostream& operator<<(std::ostream& os, const M_Receive_Interaction& msg) {
    os << "[M_Receive_Interaction - Begin]" << std::endl;
    
    os << static_cast<const M_Receive_Interaction::Super&>(msg); // show parent class
    
    // === Specific show code {
    os << "  interactionClass = " << msg.interactionClass << std::endl;
    os << "  parameters [] =" << std::endl;
    for (const auto& element: msg.parameters) {
        os << element;
    }
    os << std::endl;
    os << "  values [] =" << std::endl;
    for (const auto& element: msg.values) {
        os << "// TODO field <values> of type <ParameterValue_t>";
    }
    os << std::endl;
    os << "  region = " << msg.region << std::endl;
    os << "  (opt) eventRetraction =" << msg.eventRetraction << std::endl;
    // } Specific show code ===
    
    os << "[M_Receive_Interaction - End]" << std::endl;
    return os;
}

M_Delete_Object_Instance::M_Delete_Object_Instance() {
    this->messageName = "M_Delete_Object_Instance";
    this->type = Message::DELETE_OBJECT_INSTANCE;
    //objectClass= <no default value in message spec using builtin>
    //object= <no default value in message spec using builtin>
    //objectName= <no default value in message spec using builtin>
    _hasEventRetraction=false;
    //eventRetraction= <no default value in message spec using builtin>
}

void M_Delete_Object_Instance::serialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::serialize(msgBuffer);
    //Specific serialization code
    msgBuffer.write_uint32(objectClass);
    msgBuffer.write_uint32(object);
    msgBuffer.write_string(objectName);
    msgBuffer.write_bool(_hasEventRetraction);
    if (_hasEventRetraction) {
        eventRetraction.serialize(msgBuffer);
    }
}

void M_Delete_Object_Instance::deserialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::deserialize(msgBuffer);
    //Specific deserialization code
    objectClass = static_cast<ObjectClassHandle>(msgBuffer.read_uint32());
    object = static_cast<ObjectHandle>(msgBuffer.read_uint32());
    msgBuffer.read_string(objectName);
    _hasEventRetraction = msgBuffer.read_bool();
    if (_hasEventRetraction) {
        eventRetraction.deserialize(msgBuffer);
    }
}

std::ostream& operator<<(std::ostream& os, const M_Delete_Object_Instance& msg) {
    os << "[M_Delete_Object_Instance - Begin]" << std::endl;
    
    os << static_cast<const M_Delete_Object_Instance::Super&>(msg); // show parent class
    
    // === Specific show code {
    os << "  objectClass = " << msg.objectClass << std::endl;
    os << "  object = " << msg.object << std::endl;
    os << "  objectName = " << msg.objectName << std::endl;
    os << "  (opt) eventRetraction =" << msg.eventRetraction << std::endl;
    // } Specific show code ===
    
    os << "[M_Delete_Object_Instance - End]" << std::endl;
    return os;
}

M_Local_Delete_Object_Instance::M_Local_Delete_Object_Instance() {
    this->messageName = "M_Local_Delete_Object_Instance";
    this->type = Message::LOCAL_DELETE_OBJECT_INSTANCE;
    //object= <no default value in message spec using builtin>
}

void M_Local_Delete_Object_Instance::serialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::serialize(msgBuffer);
    //Specific serialization code
    msgBuffer.write_uint32(object);
}

void M_Local_Delete_Object_Instance::deserialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::deserialize(msgBuffer);
    //Specific deserialization code
    object = static_cast<ObjectHandle>(msgBuffer.read_uint32());
}

std::ostream& operator<<(std::ostream& os, const M_Local_Delete_Object_Instance& msg) {
    os << "[M_Local_Delete_Object_Instance - Begin]" << std::endl;
    
    os << static_cast<const M_Local_Delete_Object_Instance::Super&>(msg); // show parent class
    
    // === Specific show code {
    os << "  object = " << msg.object << std::endl;
    // } Specific show code ===
    
    os << "[M_Local_Delete_Object_Instance - End]" << std::endl;
    return os;
}

M_Remove_Object_Instance::M_Remove_Object_Instance() {
    this->messageName = "M_Remove_Object_Instance";
    this->type = Message::REMOVE_OBJECT_INSTANCE;
    //objectClass= <no default value in message spec using builtin>
    //object= <no default value in message spec using builtin>
    //objectName= <no default value in message spec using builtin>
    _hasEventRetraction=false;
    //eventRetraction= <no default value in message spec using builtin>
}

void M_Remove_Object_Instance::serialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::serialize(msgBuffer);
    //Specific serialization code
    msgBuffer.write_uint32(objectClass);
    msgBuffer.write_uint32(object);
    msgBuffer.write_string(objectName);
    msgBuffer.write_bool(_hasEventRetraction);
    if (_hasEventRetraction) {
        eventRetraction.serialize(msgBuffer);
    }
}

void M_Remove_Object_Instance::deserialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::deserialize(msgBuffer);
    //Specific deserialization code
    objectClass = static_cast<ObjectClassHandle>(msgBuffer.read_uint32());
    object = static_cast<ObjectHandle>(msgBuffer.read_uint32());
    msgBuffer.read_string(objectName);
    _hasEventRetraction = msgBuffer.read_bool();
    if (_hasEventRetraction) {
        eventRetraction.deserialize(msgBuffer);
    }
}

std::ostream& operator<<(std::ostream& os, const M_Remove_Object_Instance& msg) {
    os << "[M_Remove_Object_Instance - Begin]" << std::endl;
    
    os << static_cast<const M_Remove_Object_Instance::Super&>(msg); // show parent class
    
    // === Specific show code {
    os << "  objectClass = " << msg.objectClass << std::endl;
    os << "  object = " << msg.object << std::endl;
    os << "  objectName = " << msg.objectName << std::endl;
    os << "  (opt) eventRetraction =" << msg.eventRetraction << std::endl;
    // } Specific show code ===
    
    os << "[M_Remove_Object_Instance - End]" << std::endl;
    return os;
}

M_Change_Attribute_Transportation_Type::M_Change_Attribute_Transportation_Type() {
    this->messageName = "M_Change_Attribute_Transportation_Type";
    this->type = Message::CHANGE_ATTRIBUTE_TRANSPORTATION_TYPE;
    //transportationType= <no default value in message spec using builtin>
    //orderType= <no default value in message spec using builtin>
    //object= <no default value in message spec using builtin>
    //attributes= <no default value in message spec using builtin>
}

void M_Change_Attribute_Transportation_Type::serialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::serialize(msgBuffer);
    //Specific serialization code
    msgBuffer.write_uint8(transportationType);
    msgBuffer.write_uint8(orderType);
    msgBuffer.write_uint32(object);
    uint32_t attributesSize = attributes.size();
    msgBuffer.write_uint32(attributesSize);
    for (uint32_t i = 0; i < attributesSize; ++i) {
        msgBuffer.write_uint32(attributes[i]);
    }
}

void M_Change_Attribute_Transportation_Type::deserialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::deserialize(msgBuffer);
    //Specific deserialization code
    transportationType = static_cast<TransportType>(msgBuffer.read_uint8());
    orderType = static_cast<OrderType>(msgBuffer.read_uint8());
    object = static_cast<ObjectHandle>(msgBuffer.read_uint32());
    uint32_t attributesSize = msgBuffer.read_uint32();
    attributes.resize(attributesSize);
    for (uint32_t i = 0; i < attributesSize; ++i) {
        attributes[i] = static_cast<AttributeHandle>(msgBuffer.read_uint32());
    }
}

std::ostream& operator<<(std::ostream& os, const M_Change_Attribute_Transportation_Type& msg) {
    os << "[M_Change_Attribute_Transportation_Type - Begin]" << std::endl;
    
    os << static_cast<const M_Change_Attribute_Transportation_Type::Super&>(msg); // show parent class
    
    // === Specific show code {
    os << "  transportationType = " << msg.transportationType << std::endl;
    os << "  orderType = " << msg.orderType << std::endl;
    os << "  object = " << msg.object << std::endl;
    os << "  attributes [] =" << std::endl;
    for (const auto& element: msg.attributes) {
        os << element;
    }
    os << std::endl;
    // } Specific show code ===
    
    os << "[M_Change_Attribute_Transportation_Type - End]" << std::endl;
    return os;
}

M_Change_Interaction_Transportation_Type::M_Change_Interaction_Transportation_Type() {
    this->messageName = "M_Change_Interaction_Transportation_Type";
    this->type = Message::CHANGE_INTERACTION_TRANSPORTATION_TYPE;
    //interactionClass= <no default value in message spec using builtin>
    //transportationType= <no default value in message spec using builtin>
    //orderType= <no default value in message spec using builtin>
}

void M_Change_Interaction_Transportation_Type::serialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::serialize(msgBuffer);
    //Specific serialization code
    msgBuffer.write_uint32(interactionClass);
    msgBuffer.write_uint8(transportationType);
    msgBuffer.write_uint8(orderType);
}

void M_Change_Interaction_Transportation_Type::deserialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::deserialize(msgBuffer);
    //Specific deserialization code
    interactionClass = static_cast<InteractionClassHandle>(msgBuffer.read_uint32());
    transportationType = static_cast<TransportType>(msgBuffer.read_uint8());
    orderType = static_cast<OrderType>(msgBuffer.read_uint8());
}

std::ostream& operator<<(std::ostream& os, const M_Change_Interaction_Transportation_Type& msg) {
    os << "[M_Change_Interaction_Transportation_Type - Begin]" << std::endl;
    
    os << static_cast<const M_Change_Interaction_Transportation_Type::Super&>(msg); // show parent class
    
    // === Specific show code {
    os << "  interactionClass = " << msg.interactionClass << std::endl;
    os << "  transportationType = " << msg.transportationType << std::endl;
    os << "  orderType = " << msg.orderType << std::endl;
    // } Specific show code ===
    
    os << "[M_Change_Interaction_Transportation_Type - End]" << std::endl;
    return os;
}

M_Request_Object_Attribute_Value_Update::M_Request_Object_Attribute_Value_Update() {
    this->messageName = "M_Request_Object_Attribute_Value_Update";
    this->type = Message::REQUEST_OBJECT_ATTRIBUTE_VALUE_UPDATE;
    //object= <no default value in message spec using builtin>
    //attributes= <no default value in message spec using builtin>
}

void M_Request_Object_Attribute_Value_Update::serialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::serialize(msgBuffer);
    //Specific serialization code
    msgBuffer.write_uint32(object);
    uint32_t attributesSize = attributes.size();
    msgBuffer.write_uint32(attributesSize);
    for (uint32_t i = 0; i < attributesSize; ++i) {
        msgBuffer.write_uint32(attributes[i]);
    }
}

void M_Request_Object_Attribute_Value_Update::deserialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::deserialize(msgBuffer);
    //Specific deserialization code
    object = static_cast<ObjectHandle>(msgBuffer.read_uint32());
    uint32_t attributesSize = msgBuffer.read_uint32();
    attributes.resize(attributesSize);
    for (uint32_t i = 0; i < attributesSize; ++i) {
        attributes[i] = static_cast<AttributeHandle>(msgBuffer.read_uint32());
    }
}

std::ostream& operator<<(std::ostream& os, const M_Request_Object_Attribute_Value_Update& msg) {
    os << "[M_Request_Object_Attribute_Value_Update - Begin]" << std::endl;
    
    os << static_cast<const M_Request_Object_Attribute_Value_Update::Super&>(msg); // show parent class
    
    // === Specific show code {
    os << "  object = " << msg.object << std::endl;
    os << "  attributes [] =" << std::endl;
    for (const auto& element: msg.attributes) {
        os << element;
    }
    os << std::endl;
    // } Specific show code ===
    
    os << "[M_Request_Object_Attribute_Value_Update - End]" << std::endl;
    return os;
}

M_Request_Class_Attribute_Value_Update::M_Request_Class_Attribute_Value_Update() {
    this->messageName = "M_Request_Class_Attribute_Value_Update";
    this->type = Message::REQUEST_CLASS_ATTRIBUTE_VALUE_UPDATE;
    //objectClass= <no default value in message spec using builtin>
    //attributes= <no default value in message spec using builtin>
}

void M_Request_Class_Attribute_Value_Update::serialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::serialize(msgBuffer);
    //Specific serialization code
    msgBuffer.write_uint32(objectClass);
    uint32_t attributesSize = attributes.size();
    msgBuffer.write_uint32(attributesSize);
    for (uint32_t i = 0; i < attributesSize; ++i) {
        msgBuffer.write_uint32(attributes[i]);
    }
}

void M_Request_Class_Attribute_Value_Update::deserialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::deserialize(msgBuffer);
    //Specific deserialization code
    objectClass = static_cast<ObjectClassHandle>(msgBuffer.read_uint32());
    uint32_t attributesSize = msgBuffer.read_uint32();
    attributes.resize(attributesSize);
    for (uint32_t i = 0; i < attributesSize; ++i) {
        attributes[i] = static_cast<AttributeHandle>(msgBuffer.read_uint32());
    }
}

std::ostream& operator<<(std::ostream& os, const M_Request_Class_Attribute_Value_Update& msg) {
    os << "[M_Request_Class_Attribute_Value_Update - Begin]" << std::endl;
    
    os << static_cast<const M_Request_Class_Attribute_Value_Update::Super&>(msg); // show parent class
    
    // === Specific show code {
    os << "  objectClass = " << msg.objectClass << std::endl;
    os << "  attributes [] =" << std::endl;
    for (const auto& element: msg.attributes) {
        os << element;
    }
    os << std::endl;
    // } Specific show code ===
    
    os << "[M_Request_Class_Attribute_Value_Update - End]" << std::endl;
    return os;
}

M_Provide_Attribute_Value_Update::M_Provide_Attribute_Value_Update() {
    this->messageName = "M_Provide_Attribute_Value_Update";
    this->type = Message::PROVIDE_ATTRIBUTE_VALUE_UPDATE;
    //object= <no default value in message spec using builtin>
    //attributes= <no default value in message spec using builtin>
}

void M_Provide_Attribute_Value_Update::serialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::serialize(msgBuffer);
    //Specific serialization code
    msgBuffer.write_uint32(object);
    uint32_t attributesSize = attributes.size();
    msgBuffer.write_uint32(attributesSize);
    for (uint32_t i = 0; i < attributesSize; ++i) {
        msgBuffer.write_uint32(attributes[i]);
    }
}

void M_Provide_Attribute_Value_Update::deserialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::deserialize(msgBuffer);
    //Specific deserialization code
    object = static_cast<ObjectHandle>(msgBuffer.read_uint32());
    uint32_t attributesSize = msgBuffer.read_uint32();
    attributes.resize(attributesSize);
    for (uint32_t i = 0; i < attributesSize; ++i) {
        attributes[i] = static_cast<AttributeHandle>(msgBuffer.read_uint32());
    }
}

std::ostream& operator<<(std::ostream& os, const M_Provide_Attribute_Value_Update& msg) {
    os << "[M_Provide_Attribute_Value_Update - Begin]" << std::endl;
    
    os << static_cast<const M_Provide_Attribute_Value_Update::Super&>(msg); // show parent class
    
    // === Specific show code {
    os << "  object = " << msg.object << std::endl;
    os << "  attributes [] =" << std::endl;
    for (const auto& element: msg.attributes) {
        os << element;
    }
    os << std::endl;
    // } Specific show code ===
    
    os << "[M_Provide_Attribute_Value_Update - End]" << std::endl;
    return os;
}

M_Attributes_In_Scope::M_Attributes_In_Scope() {
    this->messageName = "M_Attributes_In_Scope";
    this->type = Message::ATTRIBUTES_IN_SCOPE;
    //object= <no default value in message spec using builtin>
    //attributes= <no default value in message spec using builtin>
}

void M_Attributes_In_Scope::serialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::serialize(msgBuffer);
    //Specific serialization code
    msgBuffer.write_uint32(object);
    uint32_t attributesSize = attributes.size();
    msgBuffer.write_uint32(attributesSize);
    for (uint32_t i = 0; i < attributesSize; ++i) {
        msgBuffer.write_uint32(attributes[i]);
    }
}

void M_Attributes_In_Scope::deserialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::deserialize(msgBuffer);
    //Specific deserialization code
    object = static_cast<ObjectHandle>(msgBuffer.read_uint32());
    uint32_t attributesSize = msgBuffer.read_uint32();
    attributes.resize(attributesSize);
    for (uint32_t i = 0; i < attributesSize; ++i) {
        attributes[i] = static_cast<AttributeHandle>(msgBuffer.read_uint32());
    }
}

std::ostream& operator<<(std::ostream& os, const M_Attributes_In_Scope& msg) {
    os << "[M_Attributes_In_Scope - Begin]" << std::endl;
    
    os << static_cast<const M_Attributes_In_Scope::Super&>(msg); // show parent class
    
    // === Specific show code {
    os << "  object = " << msg.object << std::endl;
    os << "  attributes [] =" << std::endl;
    for (const auto& element: msg.attributes) {
        os << element;
    }
    os << std::endl;
    // } Specific show code ===
    
    os << "[M_Attributes_In_Scope - End]" << std::endl;
    return os;
}

M_Attributes_Out_Of_Scope::M_Attributes_Out_Of_Scope() {
    this->messageName = "M_Attributes_Out_Of_Scope";
    this->type = Message::ATTRIBUTES_OUT_OF_SCOPE;
    //object= <no default value in message spec using builtin>
    //attributes= <no default value in message spec using builtin>
}

void M_Attributes_Out_Of_Scope::serialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::serialize(msgBuffer);
    //Specific serialization code
    msgBuffer.write_uint32(object);
    uint32_t attributesSize = attributes.size();
    msgBuffer.write_uint32(attributesSize);
    for (uint32_t i = 0; i < attributesSize; ++i) {
        msgBuffer.write_uint32(attributes[i]);
    }
}

void M_Attributes_Out_Of_Scope::deserialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::deserialize(msgBuffer);
    //Specific deserialization code
    object = static_cast<ObjectHandle>(msgBuffer.read_uint32());
    uint32_t attributesSize = msgBuffer.read_uint32();
    attributes.resize(attributesSize);
    for (uint32_t i = 0; i < attributesSize; ++i) {
        attributes[i] = static_cast<AttributeHandle>(msgBuffer.read_uint32());
    }
}

std::ostream& operator<<(std::ostream& os, const M_Attributes_Out_Of_Scope& msg) {
    os << "[M_Attributes_Out_Of_Scope - Begin]" << std::endl;
    
    os << static_cast<const M_Attributes_Out_Of_Scope::Super&>(msg); // show parent class
    
    // === Specific show code {
    os << "  object = " << msg.object << std::endl;
    os << "  attributes [] =" << std::endl;
    for (const auto& element: msg.attributes) {
        os << element;
    }
    os << std::endl;
    // } Specific show code ===
    
    os << "[M_Attributes_Out_Of_Scope - End]" << std::endl;
    return os;
}

M_Turn_Updates_On_For_Object_Instance::M_Turn_Updates_On_For_Object_Instance() {
    this->messageName = "M_Turn_Updates_On_For_Object_Instance";
    this->type = Message::TURN_UPDATES_ON_FOR_OBJECT_INSTANCE;
    //object= <no default value in message spec using builtin>
    //attributes= <no default value in message spec using builtin>
}

void M_Turn_Updates_On_For_Object_Instance::serialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::serialize(msgBuffer);
    //Specific serialization code
    msgBuffer.write_uint32(object);
    uint32_t attributesSize = attributes.size();
    msgBuffer.write_uint32(attributesSize);
    for (uint32_t i = 0; i < attributesSize; ++i) {
        msgBuffer.write_uint32(attributes[i]);
    }
}

void M_Turn_Updates_On_For_Object_Instance::deserialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::deserialize(msgBuffer);
    //Specific deserialization code
    object = static_cast<ObjectHandle>(msgBuffer.read_uint32());
    uint32_t attributesSize = msgBuffer.read_uint32();
    attributes.resize(attributesSize);
    for (uint32_t i = 0; i < attributesSize; ++i) {
        attributes[i] = static_cast<AttributeHandle>(msgBuffer.read_uint32());
    }
}

std::ostream& operator<<(std::ostream& os, const M_Turn_Updates_On_For_Object_Instance& msg) {
    os << "[M_Turn_Updates_On_For_Object_Instance - Begin]" << std::endl;
    
    os << static_cast<const M_Turn_Updates_On_For_Object_Instance::Super&>(msg); // show parent class
    
    // === Specific show code {
    os << "  object = " << msg.object << std::endl;
    os << "  attributes [] =" << std::endl;
    for (const auto& element: msg.attributes) {
        os << element;
    }
    os << std::endl;
    // } Specific show code ===
    
    os << "[M_Turn_Updates_On_For_Object_Instance - End]" << std::endl;
    return os;
}

M_Turn_Updates_Off_For_Object_Instance::M_Turn_Updates_Off_For_Object_Instance() {
    this->messageName = "M_Turn_Updates_Off_For_Object_Instance";
    this->type = Message::TURN_UPDATES_OFF_FOR_OBJECT_INSTANCE;
    //object= <no default value in message spec using builtin>
    //attributes= <no default value in message spec using builtin>
}

void M_Turn_Updates_Off_For_Object_Instance::serialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::serialize(msgBuffer);
    //Specific serialization code
    msgBuffer.write_uint32(object);
    uint32_t attributesSize = attributes.size();
    msgBuffer.write_uint32(attributesSize);
    for (uint32_t i = 0; i < attributesSize; ++i) {
        msgBuffer.write_uint32(attributes[i]);
    }
}

void M_Turn_Updates_Off_For_Object_Instance::deserialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::deserialize(msgBuffer);
    //Specific deserialization code
    object = static_cast<ObjectHandle>(msgBuffer.read_uint32());
    uint32_t attributesSize = msgBuffer.read_uint32();
    attributes.resize(attributesSize);
    for (uint32_t i = 0; i < attributesSize; ++i) {
        attributes[i] = static_cast<AttributeHandle>(msgBuffer.read_uint32());
    }
}

std::ostream& operator<<(std::ostream& os, const M_Turn_Updates_Off_For_Object_Instance& msg) {
    os << "[M_Turn_Updates_Off_For_Object_Instance - Begin]" << std::endl;
    
    os << static_cast<const M_Turn_Updates_Off_For_Object_Instance::Super&>(msg); // show parent class
    
    // === Specific show code {
    os << "  object = " << msg.object << std::endl;
    os << "  attributes [] =" << std::endl;
    for (const auto& element: msg.attributes) {
        os << element;
    }
    os << std::endl;
    // } Specific show code ===
    
    os << "[M_Turn_Updates_Off_For_Object_Instance - End]" << std::endl;
    return os;
}

M_Request_Attribute_Ownership_Divestiture::M_Request_Attribute_Ownership_Divestiture() {
    this->messageName = "M_Request_Attribute_Ownership_Divestiture";
    this->type = Message::REQUEST_ATTRIBUTE_OWNERSHIP_DIVESTITURE;
}

M_Request_Attribute_Ownership_Assumption::M_Request_Attribute_Ownership_Assumption() {
    this->messageName = "M_Request_Attribute_Ownership_Assumption";
    this->type = Message::REQUEST_ATTRIBUTE_OWNERSHIP_ASSUMPTION;
    //object= <no default value in message spec using builtin>
    //attributes= <no default value in message spec using builtin>
}

void M_Request_Attribute_Ownership_Assumption::serialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::serialize(msgBuffer);
    //Specific serialization code
    msgBuffer.write_uint32(object);
    uint32_t attributesSize = attributes.size();
    msgBuffer.write_uint32(attributesSize);
    for (uint32_t i = 0; i < attributesSize; ++i) {
        msgBuffer.write_uint32(attributes[i]);
    }
}

void M_Request_Attribute_Ownership_Assumption::deserialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::deserialize(msgBuffer);
    //Specific deserialization code
    object = static_cast<ObjectHandle>(msgBuffer.read_uint32());
    uint32_t attributesSize = msgBuffer.read_uint32();
    attributes.resize(attributesSize);
    for (uint32_t i = 0; i < attributesSize; ++i) {
        attributes[i] = static_cast<AttributeHandle>(msgBuffer.read_uint32());
    }
}

std::ostream& operator<<(std::ostream& os, const M_Request_Attribute_Ownership_Assumption& msg) {
    os << "[M_Request_Attribute_Ownership_Assumption - Begin]" << std::endl;
    
    os << static_cast<const M_Request_Attribute_Ownership_Assumption::Super&>(msg); // show parent class
    
    // === Specific show code {
    os << "  object = " << msg.object << std::endl;
    os << "  attributes [] =" << std::endl;
    for (const auto& element: msg.attributes) {
        os << element;
    }
    os << std::endl;
    // } Specific show code ===
    
    os << "[M_Request_Attribute_Ownership_Assumption - End]" << std::endl;
    return os;
}

M_Negotiated_Attribute_Ownership_Divestiture::M_Negotiated_Attribute_Ownership_Divestiture() {
    this->messageName = "M_Negotiated_Attribute_Ownership_Divestiture";
    this->type = Message::NEGOTIATED_ATTRIBUTE_OWNERSHIP_DIVESTITURE;
    //object= <no default value in message spec using builtin>
    //attributes= <no default value in message spec using builtin>
}

void M_Negotiated_Attribute_Ownership_Divestiture::serialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::serialize(msgBuffer);
    //Specific serialization code
    msgBuffer.write_uint32(object);
    uint32_t attributesSize = attributes.size();
    msgBuffer.write_uint32(attributesSize);
    for (uint32_t i = 0; i < attributesSize; ++i) {
        msgBuffer.write_uint32(attributes[i]);
    }
}

void M_Negotiated_Attribute_Ownership_Divestiture::deserialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::deserialize(msgBuffer);
    //Specific deserialization code
    object = static_cast<ObjectHandle>(msgBuffer.read_uint32());
    uint32_t attributesSize = msgBuffer.read_uint32();
    attributes.resize(attributesSize);
    for (uint32_t i = 0; i < attributesSize; ++i) {
        attributes[i] = static_cast<AttributeHandle>(msgBuffer.read_uint32());
    }
}

std::ostream& operator<<(std::ostream& os, const M_Negotiated_Attribute_Ownership_Divestiture& msg) {
    os << "[M_Negotiated_Attribute_Ownership_Divestiture - Begin]" << std::endl;
    
    os << static_cast<const M_Negotiated_Attribute_Ownership_Divestiture::Super&>(msg); // show parent class
    
    // === Specific show code {
    os << "  object = " << msg.object << std::endl;
    os << "  attributes [] =" << std::endl;
    for (const auto& element: msg.attributes) {
        os << element;
    }
    os << std::endl;
    // } Specific show code ===
    
    os << "[M_Negotiated_Attribute_Ownership_Divestiture - End]" << std::endl;
    return os;
}

M_Attribute_Ownership_Divestiture_Notification::M_Attribute_Ownership_Divestiture_Notification() {
    this->messageName = "M_Attribute_Ownership_Divestiture_Notification";
    this->type = Message::ATTRIBUTE_OWNERSHIP_DIVESTITURE_NOTIFICATION;
    //object= <no default value in message spec using builtin>
    //attributes= <no default value in message spec using builtin>
}

void M_Attribute_Ownership_Divestiture_Notification::serialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::serialize(msgBuffer);
    //Specific serialization code
    msgBuffer.write_uint32(object);
    uint32_t attributesSize = attributes.size();
    msgBuffer.write_uint32(attributesSize);
    for (uint32_t i = 0; i < attributesSize; ++i) {
        msgBuffer.write_uint32(attributes[i]);
    }
}

void M_Attribute_Ownership_Divestiture_Notification::deserialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::deserialize(msgBuffer);
    //Specific deserialization code
    object = static_cast<ObjectHandle>(msgBuffer.read_uint32());
    uint32_t attributesSize = msgBuffer.read_uint32();
    attributes.resize(attributesSize);
    for (uint32_t i = 0; i < attributesSize; ++i) {
        attributes[i] = static_cast<AttributeHandle>(msgBuffer.read_uint32());
    }
}

std::ostream& operator<<(std::ostream& os, const M_Attribute_Ownership_Divestiture_Notification& msg) {
    os << "[M_Attribute_Ownership_Divestiture_Notification - Begin]" << std::endl;
    
    os << static_cast<const M_Attribute_Ownership_Divestiture_Notification::Super&>(msg); // show parent class
    
    // === Specific show code {
    os << "  object = " << msg.object << std::endl;
    os << "  attributes [] =" << std::endl;
    for (const auto& element: msg.attributes) {
        os << element;
    }
    os << std::endl;
    // } Specific show code ===
    
    os << "[M_Attribute_Ownership_Divestiture_Notification - End]" << std::endl;
    return os;
}

M_Attribute_Ownership_Acquisition_Notification::M_Attribute_Ownership_Acquisition_Notification() {
    this->messageName = "M_Attribute_Ownership_Acquisition_Notification";
    this->type = Message::ATTRIBUTE_OWNERSHIP_ACQUISITION_NOTIFICATION;
    //object= <no default value in message spec using builtin>
    //attributes= <no default value in message spec using builtin>
}

void M_Attribute_Ownership_Acquisition_Notification::serialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::serialize(msgBuffer);
    //Specific serialization code
    msgBuffer.write_uint32(object);
    uint32_t attributesSize = attributes.size();
    msgBuffer.write_uint32(attributesSize);
    for (uint32_t i = 0; i < attributesSize; ++i) {
        msgBuffer.write_uint32(attributes[i]);
    }
}

void M_Attribute_Ownership_Acquisition_Notification::deserialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::deserialize(msgBuffer);
    //Specific deserialization code
    object = static_cast<ObjectHandle>(msgBuffer.read_uint32());
    uint32_t attributesSize = msgBuffer.read_uint32();
    attributes.resize(attributesSize);
    for (uint32_t i = 0; i < attributesSize; ++i) {
        attributes[i] = static_cast<AttributeHandle>(msgBuffer.read_uint32());
    }
}

std::ostream& operator<<(std::ostream& os, const M_Attribute_Ownership_Acquisition_Notification& msg) {
    os << "[M_Attribute_Ownership_Acquisition_Notification - Begin]" << std::endl;
    
    os << static_cast<const M_Attribute_Ownership_Acquisition_Notification::Super&>(msg); // show parent class
    
    // === Specific show code {
    os << "  object = " << msg.object << std::endl;
    os << "  attributes [] =" << std::endl;
    for (const auto& element: msg.attributes) {
        os << element;
    }
    os << std::endl;
    // } Specific show code ===
    
    os << "[M_Attribute_Ownership_Acquisition_Notification - End]" << std::endl;
    return os;
}

M_Request_Attribute_Ownership_Acquisition::M_Request_Attribute_Ownership_Acquisition() {
    this->messageName = "M_Request_Attribute_Ownership_Acquisition";
    this->type = Message::REQUEST_ATTRIBUTE_OWNERSHIP_ACQUISITION;
    //object= <no default value in message spec using builtin>
    //attributes= <no default value in message spec using builtin>
}

void M_Request_Attribute_Ownership_Acquisition::serialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::serialize(msgBuffer);
    //Specific serialization code
    msgBuffer.write_uint32(object);
    uint32_t attributesSize = attributes.size();
    msgBuffer.write_uint32(attributesSize);
    for (uint32_t i = 0; i < attributesSize; ++i) {
        msgBuffer.write_uint32(attributes[i]);
    }
}

void M_Request_Attribute_Ownership_Acquisition::deserialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::deserialize(msgBuffer);
    //Specific deserialization code
    object = static_cast<ObjectHandle>(msgBuffer.read_uint32());
    uint32_t attributesSize = msgBuffer.read_uint32();
    attributes.resize(attributesSize);
    for (uint32_t i = 0; i < attributesSize; ++i) {
        attributes[i] = static_cast<AttributeHandle>(msgBuffer.read_uint32());
    }
}

std::ostream& operator<<(std::ostream& os, const M_Request_Attribute_Ownership_Acquisition& msg) {
    os << "[M_Request_Attribute_Ownership_Acquisition - Begin]" << std::endl;
    
    os << static_cast<const M_Request_Attribute_Ownership_Acquisition::Super&>(msg); // show parent class
    
    // === Specific show code {
    os << "  object = " << msg.object << std::endl;
    os << "  attributes [] =" << std::endl;
    for (const auto& element: msg.attributes) {
        os << element;
    }
    os << std::endl;
    // } Specific show code ===
    
    os << "[M_Request_Attribute_Ownership_Acquisition - End]" << std::endl;
    return os;
}

M_Request_Attribute_Ownership_Release::M_Request_Attribute_Ownership_Release() {
    this->messageName = "M_Request_Attribute_Ownership_Release";
    this->type = Message::REQUEST_ATTRIBUTE_OWNERSHIP_RELEASE;
    //object= <no default value in message spec using builtin>
    //attributes= <no default value in message spec using builtin>
}

void M_Request_Attribute_Ownership_Release::serialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::serialize(msgBuffer);
    //Specific serialization code
    msgBuffer.write_uint32(object);
    uint32_t attributesSize = attributes.size();
    msgBuffer.write_uint32(attributesSize);
    for (uint32_t i = 0; i < attributesSize; ++i) {
        msgBuffer.write_uint32(attributes[i]);
    }
}

void M_Request_Attribute_Ownership_Release::deserialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::deserialize(msgBuffer);
    //Specific deserialization code
    object = static_cast<ObjectHandle>(msgBuffer.read_uint32());
    uint32_t attributesSize = msgBuffer.read_uint32();
    attributes.resize(attributesSize);
    for (uint32_t i = 0; i < attributesSize; ++i) {
        attributes[i] = static_cast<AttributeHandle>(msgBuffer.read_uint32());
    }
}

std::ostream& operator<<(std::ostream& os, const M_Request_Attribute_Ownership_Release& msg) {
    os << "[M_Request_Attribute_Ownership_Release - Begin]" << std::endl;
    
    os << static_cast<const M_Request_Attribute_Ownership_Release::Super&>(msg); // show parent class
    
    // === Specific show code {
    os << "  object = " << msg.object << std::endl;
    os << "  attributes [] =" << std::endl;
    for (const auto& element: msg.attributes) {
        os << element;
    }
    os << std::endl;
    // } Specific show code ===
    
    os << "[M_Request_Attribute_Ownership_Release - End]" << std::endl;
    return os;
}

M_Query_Attribute_Ownership::M_Query_Attribute_Ownership() {
    this->messageName = "M_Query_Attribute_Ownership";
    this->type = Message::QUERY_ATTRIBUTE_OWNERSHIP;
    //object= <no default value in message spec using builtin>
    //attribute= <no default value in message spec using builtin>
}

void M_Query_Attribute_Ownership::serialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::serialize(msgBuffer);
    //Specific serialization code
    msgBuffer.write_uint32(object);
    msgBuffer.write_uint32(attribute);
}

void M_Query_Attribute_Ownership::deserialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::deserialize(msgBuffer);
    //Specific deserialization code
    object = static_cast<ObjectHandle>(msgBuffer.read_uint32());
    attribute = static_cast<AttributeHandle>(msgBuffer.read_uint32());
}

std::ostream& operator<<(std::ostream& os, const M_Query_Attribute_Ownership& msg) {
    os << "[M_Query_Attribute_Ownership - Begin]" << std::endl;
    
    os << static_cast<const M_Query_Attribute_Ownership::Super&>(msg); // show parent class
    
    // === Specific show code {
    os << "  object = " << msg.object << std::endl;
    os << "  attribute = " << msg.attribute << std::endl;
    // } Specific show code ===
    
    os << "[M_Query_Attribute_Ownership - End]" << std::endl;
    return os;
}

M_Inform_Attribute_Ownership::M_Inform_Attribute_Ownership() {
    this->messageName = "M_Inform_Attribute_Ownership";
    this->type = Message::INFORM_ATTRIBUTE_OWNERSHIP;
    //object= <no default value in message spec using builtin>
    //attribute= <no default value in message spec using builtin>
    //federate= <no default value in message spec using builtin>
}

void M_Inform_Attribute_Ownership::serialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::serialize(msgBuffer);
    //Specific serialization code
    msgBuffer.write_uint32(object);
    msgBuffer.write_uint32(attribute);
    msgBuffer.write_uint32(federate);
}

void M_Inform_Attribute_Ownership::deserialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::deserialize(msgBuffer);
    //Specific deserialization code
    object = static_cast<ObjectHandle>(msgBuffer.read_uint32());
    attribute = static_cast<AttributeHandle>(msgBuffer.read_uint32());
    federate = static_cast<FederateHandle>(msgBuffer.read_uint32());
}

std::ostream& operator<<(std::ostream& os, const M_Inform_Attribute_Ownership& msg) {
    os << "[M_Inform_Attribute_Ownership - Begin]" << std::endl;
    
    os << static_cast<const M_Inform_Attribute_Ownership::Super&>(msg); // show parent class
    
    // === Specific show code {
    os << "  object = " << msg.object << std::endl;
    os << "  attribute = " << msg.attribute << std::endl;
    os << "  federate = " << msg.federate << std::endl;
    // } Specific show code ===
    
    os << "[M_Inform_Attribute_Ownership - End]" << std::endl;
    return os;
}

M_Is_Attribute_Owned_By_Federate::M_Is_Attribute_Owned_By_Federate() {
    this->messageName = "M_Is_Attribute_Owned_By_Federate";
    this->type = Message::IS_ATTRIBUTE_OWNED_BY_FEDERATE;
    //object= <no default value in message spec using builtin>
    //attribute= <no default value in message spec using builtin>
}

void M_Is_Attribute_Owned_By_Federate::serialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::serialize(msgBuffer);
    //Specific serialization code
    msgBuffer.write_uint32(object);
    msgBuffer.write_uint32(attribute);
}

void M_Is_Attribute_Owned_By_Federate::deserialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::deserialize(msgBuffer);
    //Specific deserialization code
    object = static_cast<ObjectHandle>(msgBuffer.read_uint32());
    attribute = static_cast<AttributeHandle>(msgBuffer.read_uint32());
}

std::ostream& operator<<(std::ostream& os, const M_Is_Attribute_Owned_By_Federate& msg) {
    os << "[M_Is_Attribute_Owned_By_Federate - Begin]" << std::endl;
    
    os << static_cast<const M_Is_Attribute_Owned_By_Federate::Super&>(msg); // show parent class
    
    // === Specific show code {
    os << "  object = " << msg.object << std::endl;
    os << "  attribute = " << msg.attribute << std::endl;
    // } Specific show code ===
    
    os << "[M_Is_Attribute_Owned_By_Federate - End]" << std::endl;
    return os;
}

M_Attribute_Is_Not_Owned::M_Attribute_Is_Not_Owned() {
    this->messageName = "M_Attribute_Is_Not_Owned";
    this->type = Message::ATTRIBUTE_IS_NOT_OWNED;
    //object= <no default value in message spec using builtin>
    //attribute= <no default value in message spec using builtin>
    //federate= <no default value in message spec using builtin>
}

void M_Attribute_Is_Not_Owned::serialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::serialize(msgBuffer);
    //Specific serialization code
    msgBuffer.write_uint32(object);
    msgBuffer.write_uint32(attribute);
    msgBuffer.write_uint32(federate);
}

void M_Attribute_Is_Not_Owned::deserialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::deserialize(msgBuffer);
    //Specific deserialization code
    object = static_cast<ObjectHandle>(msgBuffer.read_uint32());
    attribute = static_cast<AttributeHandle>(msgBuffer.read_uint32());
    federate = static_cast<FederateHandle>(msgBuffer.read_uint32());
}

std::ostream& operator<<(std::ostream& os, const M_Attribute_Is_Not_Owned& msg) {
    os << "[M_Attribute_Is_Not_Owned - Begin]" << std::endl;
    
    os << static_cast<const M_Attribute_Is_Not_Owned::Super&>(msg); // show parent class
    
    // === Specific show code {
    os << "  object = " << msg.object << std::endl;
    os << "  attribute = " << msg.attribute << std::endl;
    os << "  federate = " << msg.federate << std::endl;
    // } Specific show code ===
    
    os << "[M_Attribute_Is_Not_Owned - End]" << std::endl;
    return os;
}

M_Attribute_Owned_By_Rti::M_Attribute_Owned_By_Rti() {
    this->messageName = "M_Attribute_Owned_By_Rti";
    this->type = Message::ATTRIBUTE_OWNED_BY_RTI;
}

M_Attribute_Ownership_Acquisition_If_Available::M_Attribute_Ownership_Acquisition_If_Available() {
    this->messageName = "M_Attribute_Ownership_Acquisition_If_Available";
    this->type = Message::ATTRIBUTE_OWNERSHIP_ACQUISITION_IF_AVAILABLE;
    //object= <no default value in message spec using builtin>
    //attributes= <no default value in message spec using builtin>
}

void M_Attribute_Ownership_Acquisition_If_Available::serialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::serialize(msgBuffer);
    //Specific serialization code
    msgBuffer.write_uint32(object);
    uint32_t attributesSize = attributes.size();
    msgBuffer.write_uint32(attributesSize);
    for (uint32_t i = 0; i < attributesSize; ++i) {
        msgBuffer.write_uint32(attributes[i]);
    }
}

void M_Attribute_Ownership_Acquisition_If_Available::deserialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::deserialize(msgBuffer);
    //Specific deserialization code
    object = static_cast<ObjectHandle>(msgBuffer.read_uint32());
    uint32_t attributesSize = msgBuffer.read_uint32();
    attributes.resize(attributesSize);
    for (uint32_t i = 0; i < attributesSize; ++i) {
        attributes[i] = static_cast<AttributeHandle>(msgBuffer.read_uint32());
    }
}

std::ostream& operator<<(std::ostream& os, const M_Attribute_Ownership_Acquisition_If_Available& msg) {
    os << "[M_Attribute_Ownership_Acquisition_If_Available - Begin]" << std::endl;
    
    os << static_cast<const M_Attribute_Ownership_Acquisition_If_Available::Super&>(msg); // show parent class
    
    // === Specific show code {
    os << "  object = " << msg.object << std::endl;
    os << "  attributes [] =" << std::endl;
    for (const auto& element: msg.attributes) {
        os << element;
    }
    os << std::endl;
    // } Specific show code ===
    
    os << "[M_Attribute_Ownership_Acquisition_If_Available - End]" << std::endl;
    return os;
}

M_Attribute_Ownership_Unavailable::M_Attribute_Ownership_Unavailable() {
    this->messageName = "M_Attribute_Ownership_Unavailable";
    this->type = Message::ATTRIBUTE_OWNERSHIP_UNAVAILABLE;
    //object= <no default value in message spec using builtin>
    //attributes= <no default value in message spec using builtin>
}

void M_Attribute_Ownership_Unavailable::serialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::serialize(msgBuffer);
    //Specific serialization code
    msgBuffer.write_uint32(object);
    uint32_t attributesSize = attributes.size();
    msgBuffer.write_uint32(attributesSize);
    for (uint32_t i = 0; i < attributesSize; ++i) {
        msgBuffer.write_uint32(attributes[i]);
    }
}

void M_Attribute_Ownership_Unavailable::deserialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::deserialize(msgBuffer);
    //Specific deserialization code
    object = static_cast<ObjectHandle>(msgBuffer.read_uint32());
    uint32_t attributesSize = msgBuffer.read_uint32();
    attributes.resize(attributesSize);
    for (uint32_t i = 0; i < attributesSize; ++i) {
        attributes[i] = static_cast<AttributeHandle>(msgBuffer.read_uint32());
    }
}

std::ostream& operator<<(std::ostream& os, const M_Attribute_Ownership_Unavailable& msg) {
    os << "[M_Attribute_Ownership_Unavailable - Begin]" << std::endl;
    
    os << static_cast<const M_Attribute_Ownership_Unavailable::Super&>(msg); // show parent class
    
    // === Specific show code {
    os << "  object = " << msg.object << std::endl;
    os << "  attributes [] =" << std::endl;
    for (const auto& element: msg.attributes) {
        os << element;
    }
    os << std::endl;
    // } Specific show code ===
    
    os << "[M_Attribute_Ownership_Unavailable - End]" << std::endl;
    return os;
}

M_Unconditional_Attribute_Ownership_Divestiture::M_Unconditional_Attribute_Ownership_Divestiture() {
    this->messageName = "M_Unconditional_Attribute_Ownership_Divestiture";
    this->type = Message::UNCONDITIONAL_ATTRIBUTE_OWNERSHIP_DIVESTITURE;
    //object= <no default value in message spec using builtin>
    //attributes= <no default value in message spec using builtin>
}

void M_Unconditional_Attribute_Ownership_Divestiture::serialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::serialize(msgBuffer);
    //Specific serialization code
    msgBuffer.write_uint32(object);
    uint32_t attributesSize = attributes.size();
    msgBuffer.write_uint32(attributesSize);
    for (uint32_t i = 0; i < attributesSize; ++i) {
        msgBuffer.write_uint32(attributes[i]);
    }
}

void M_Unconditional_Attribute_Ownership_Divestiture::deserialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::deserialize(msgBuffer);
    //Specific deserialization code
    object = static_cast<ObjectHandle>(msgBuffer.read_uint32());
    uint32_t attributesSize = msgBuffer.read_uint32();
    attributes.resize(attributesSize);
    for (uint32_t i = 0; i < attributesSize; ++i) {
        attributes[i] = static_cast<AttributeHandle>(msgBuffer.read_uint32());
    }
}

std::ostream& operator<<(std::ostream& os, const M_Unconditional_Attribute_Ownership_Divestiture& msg) {
    os << "[M_Unconditional_Attribute_Ownership_Divestiture - Begin]" << std::endl;
    
    os << static_cast<const M_Unconditional_Attribute_Ownership_Divestiture::Super&>(msg); // show parent class
    
    // === Specific show code {
    os << "  object = " << msg.object << std::endl;
    os << "  attributes [] =" << std::endl;
    for (const auto& element: msg.attributes) {
        os << element;
    }
    os << std::endl;
    // } Specific show code ===
    
    os << "[M_Unconditional_Attribute_Ownership_Divestiture - End]" << std::endl;
    return os;
}

M_Attribute_Ownership_Acquisition::M_Attribute_Ownership_Acquisition() {
    this->messageName = "M_Attribute_Ownership_Acquisition";
    this->type = Message::ATTRIBUTE_OWNERSHIP_ACQUISITION;
    //object= <no default value in message spec using builtin>
    //attributes= <no default value in message spec using builtin>
}

void M_Attribute_Ownership_Acquisition::serialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::serialize(msgBuffer);
    //Specific serialization code
    msgBuffer.write_uint32(object);
    uint32_t attributesSize = attributes.size();
    msgBuffer.write_uint32(attributesSize);
    for (uint32_t i = 0; i < attributesSize; ++i) {
        msgBuffer.write_uint32(attributes[i]);
    }
}

void M_Attribute_Ownership_Acquisition::deserialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::deserialize(msgBuffer);
    //Specific deserialization code
    object = static_cast<ObjectHandle>(msgBuffer.read_uint32());
    uint32_t attributesSize = msgBuffer.read_uint32();
    attributes.resize(attributesSize);
    for (uint32_t i = 0; i < attributesSize; ++i) {
        attributes[i] = static_cast<AttributeHandle>(msgBuffer.read_uint32());
    }
}

std::ostream& operator<<(std::ostream& os, const M_Attribute_Ownership_Acquisition& msg) {
    os << "[M_Attribute_Ownership_Acquisition - Begin]" << std::endl;
    
    os << static_cast<const M_Attribute_Ownership_Acquisition::Super&>(msg); // show parent class
    
    // === Specific show code {
    os << "  object = " << msg.object << std::endl;
    os << "  attributes [] =" << std::endl;
    for (const auto& element: msg.attributes) {
        os << element;
    }
    os << std::endl;
    // } Specific show code ===
    
    os << "[M_Attribute_Ownership_Acquisition - End]" << std::endl;
    return os;
}

M_Cancel_Negotiated_Attribute_Ownership_Divestiture::M_Cancel_Negotiated_Attribute_Ownership_Divestiture() {
    this->messageName = "M_Cancel_Negotiated_Attribute_Ownership_Divestiture";
    this->type = Message::CANCEL_NEGOTIATED_ATTRIBUTE_OWNERSHIP_DIVESTITURE;
    //object= <no default value in message spec using builtin>
    //attributes= <no default value in message spec using builtin>
}

void M_Cancel_Negotiated_Attribute_Ownership_Divestiture::serialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::serialize(msgBuffer);
    //Specific serialization code
    msgBuffer.write_uint32(object);
    uint32_t attributesSize = attributes.size();
    msgBuffer.write_uint32(attributesSize);
    for (uint32_t i = 0; i < attributesSize; ++i) {
        msgBuffer.write_uint32(attributes[i]);
    }
}

void M_Cancel_Negotiated_Attribute_Ownership_Divestiture::deserialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::deserialize(msgBuffer);
    //Specific deserialization code
    object = static_cast<ObjectHandle>(msgBuffer.read_uint32());
    uint32_t attributesSize = msgBuffer.read_uint32();
    attributes.resize(attributesSize);
    for (uint32_t i = 0; i < attributesSize; ++i) {
        attributes[i] = static_cast<AttributeHandle>(msgBuffer.read_uint32());
    }
}

std::ostream& operator<<(std::ostream& os, const M_Cancel_Negotiated_Attribute_Ownership_Divestiture& msg) {
    os << "[M_Cancel_Negotiated_Attribute_Ownership_Divestiture - Begin]" << std::endl;
    
    os << static_cast<const M_Cancel_Negotiated_Attribute_Ownership_Divestiture::Super&>(msg); // show parent class
    
    // === Specific show code {
    os << "  object = " << msg.object << std::endl;
    os << "  attributes [] =" << std::endl;
    for (const auto& element: msg.attributes) {
        os << element;
    }
    os << std::endl;
    // } Specific show code ===
    
    os << "[M_Cancel_Negotiated_Attribute_Ownership_Divestiture - End]" << std::endl;
    return os;
}

M_Attribute_Ownership_Release_Response::M_Attribute_Ownership_Release_Response() {
    this->messageName = "M_Attribute_Ownership_Release_Response";
    this->type = Message::ATTRIBUTE_OWNERSHIP_RELEASE_RESPONSE;
    //object= <no default value in message spec using builtin>
    //attributes= <no default value in message spec using builtin>
}

void M_Attribute_Ownership_Release_Response::serialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::serialize(msgBuffer);
    //Specific serialization code
    msgBuffer.write_uint32(object);
    uint32_t attributesSize = attributes.size();
    msgBuffer.write_uint32(attributesSize);
    for (uint32_t i = 0; i < attributesSize; ++i) {
        msgBuffer.write_uint32(attributes[i]);
    }
}

void M_Attribute_Ownership_Release_Response::deserialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::deserialize(msgBuffer);
    //Specific deserialization code
    object = static_cast<ObjectHandle>(msgBuffer.read_uint32());
    uint32_t attributesSize = msgBuffer.read_uint32();
    attributes.resize(attributesSize);
    for (uint32_t i = 0; i < attributesSize; ++i) {
        attributes[i] = static_cast<AttributeHandle>(msgBuffer.read_uint32());
    }
}

std::ostream& operator<<(std::ostream& os, const M_Attribute_Ownership_Release_Response& msg) {
    os << "[M_Attribute_Ownership_Release_Response - Begin]" << std::endl;
    
    os << static_cast<const M_Attribute_Ownership_Release_Response::Super&>(msg); // show parent class
    
    // === Specific show code {
    os << "  object = " << msg.object << std::endl;
    os << "  attributes [] =" << std::endl;
    for (const auto& element: msg.attributes) {
        os << element;
    }
    os << std::endl;
    // } Specific show code ===
    
    os << "[M_Attribute_Ownership_Release_Response - End]" << std::endl;
    return os;
}

M_Cancel_Attribute_Ownership_Acquisition::M_Cancel_Attribute_Ownership_Acquisition() {
    this->messageName = "M_Cancel_Attribute_Ownership_Acquisition";
    this->type = Message::CANCEL_ATTRIBUTE_OWNERSHIP_ACQUISITION;
    //object= <no default value in message spec using builtin>
    //attributes= <no default value in message spec using builtin>
}

void M_Cancel_Attribute_Ownership_Acquisition::serialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::serialize(msgBuffer);
    //Specific serialization code
    msgBuffer.write_uint32(object);
    uint32_t attributesSize = attributes.size();
    msgBuffer.write_uint32(attributesSize);
    for (uint32_t i = 0; i < attributesSize; ++i) {
        msgBuffer.write_uint32(attributes[i]);
    }
}

void M_Cancel_Attribute_Ownership_Acquisition::deserialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::deserialize(msgBuffer);
    //Specific deserialization code
    object = static_cast<ObjectHandle>(msgBuffer.read_uint32());
    uint32_t attributesSize = msgBuffer.read_uint32();
    attributes.resize(attributesSize);
    for (uint32_t i = 0; i < attributesSize; ++i) {
        attributes[i] = static_cast<AttributeHandle>(msgBuffer.read_uint32());
    }
}

std::ostream& operator<<(std::ostream& os, const M_Cancel_Attribute_Ownership_Acquisition& msg) {
    os << "[M_Cancel_Attribute_Ownership_Acquisition - Begin]" << std::endl;
    
    os << static_cast<const M_Cancel_Attribute_Ownership_Acquisition::Super&>(msg); // show parent class
    
    // === Specific show code {
    os << "  object = " << msg.object << std::endl;
    os << "  attributes [] =" << std::endl;
    for (const auto& element: msg.attributes) {
        os << element;
    }
    os << std::endl;
    // } Specific show code ===
    
    os << "[M_Cancel_Attribute_Ownership_Acquisition - End]" << std::endl;
    return os;
}

M_Confirm_Attribute_Ownership_Acquisition_Cancellation::M_Confirm_Attribute_Ownership_Acquisition_Cancellation() {
    this->messageName = "M_Confirm_Attribute_Ownership_Acquisition_Cancellation";
    this->type = Message::CONFIRM_ATTRIBUTE_OWNERSHIP_ACQUISITION_CANCELLATION;
    //object= <no default value in message spec using builtin>
    //attributes= <no default value in message spec using builtin>
}

void M_Confirm_Attribute_Ownership_Acquisition_Cancellation::serialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::serialize(msgBuffer);
    //Specific serialization code
    msgBuffer.write_uint32(object);
    uint32_t attributesSize = attributes.size();
    msgBuffer.write_uint32(attributesSize);
    for (uint32_t i = 0; i < attributesSize; ++i) {
        msgBuffer.write_uint32(attributes[i]);
    }
}

void M_Confirm_Attribute_Ownership_Acquisition_Cancellation::deserialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::deserialize(msgBuffer);
    //Specific deserialization code
    object = static_cast<ObjectHandle>(msgBuffer.read_uint32());
    uint32_t attributesSize = msgBuffer.read_uint32();
    attributes.resize(attributesSize);
    for (uint32_t i = 0; i < attributesSize; ++i) {
        attributes[i] = static_cast<AttributeHandle>(msgBuffer.read_uint32());
    }
}

std::ostream& operator<<(std::ostream& os, const M_Confirm_Attribute_Ownership_Acquisition_Cancellation& msg) {
    os << "[M_Confirm_Attribute_Ownership_Acquisition_Cancellation - Begin]" << std::endl;
    
    os << static_cast<const M_Confirm_Attribute_Ownership_Acquisition_Cancellation::Super&>(msg); // show parent class
    
    // === Specific show code {
    os << "  object = " << msg.object << std::endl;
    os << "  attributes [] =" << std::endl;
    for (const auto& element: msg.attributes) {
        os << element;
    }
    os << std::endl;
    // } Specific show code ===
    
    os << "[M_Confirm_Attribute_Ownership_Acquisition_Cancellation - End]" << std::endl;
    return os;
}

M_Change_Attribute_Order_Type::M_Change_Attribute_Order_Type() {
    this->messageName = "M_Change_Attribute_Order_Type";
    this->type = Message::CHANGE_ATTRIBUTE_ORDER_TYPE;
    //transport= <no default value in message spec using builtin>
    //order= <no default value in message spec using builtin>
    //object= <no default value in message spec using builtin>
    //attributes= <no default value in message spec using builtin>
}

void M_Change_Attribute_Order_Type::serialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::serialize(msgBuffer);
    //Specific serialization code
    msgBuffer.write_uint8(transport);
    msgBuffer.write_uint8(order);
    msgBuffer.write_uint32(object);
    uint32_t attributesSize = attributes.size();
    msgBuffer.write_uint32(attributesSize);
    for (uint32_t i = 0; i < attributesSize; ++i) {
        msgBuffer.write_uint32(attributes[i]);
    }
}

void M_Change_Attribute_Order_Type::deserialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::deserialize(msgBuffer);
    //Specific deserialization code
    transport = static_cast<TransportType>(msgBuffer.read_uint8());
    order = static_cast<OrderType>(msgBuffer.read_uint8());
    object = static_cast<ObjectHandle>(msgBuffer.read_uint32());
    uint32_t attributesSize = msgBuffer.read_uint32();
    attributes.resize(attributesSize);
    for (uint32_t i = 0; i < attributesSize; ++i) {
        attributes[i] = static_cast<AttributeHandle>(msgBuffer.read_uint32());
    }
}

std::ostream& operator<<(std::ostream& os, const M_Change_Attribute_Order_Type& msg) {
    os << "[M_Change_Attribute_Order_Type - Begin]" << std::endl;
    
    os << static_cast<const M_Change_Attribute_Order_Type::Super&>(msg); // show parent class
    
    // === Specific show code {
    os << "  transport = " << msg.transport << std::endl;
    os << "  order = " << msg.order << std::endl;
    os << "  object = " << msg.object << std::endl;
    os << "  attributes [] =" << std::endl;
    for (const auto& element: msg.attributes) {
        os << element;
    }
    os << std::endl;
    // } Specific show code ===
    
    os << "[M_Change_Attribute_Order_Type - End]" << std::endl;
    return os;
}

M_Change_Interaction_Order_Type::M_Change_Interaction_Order_Type() {
    this->messageName = "M_Change_Interaction_Order_Type";
    this->type = Message::CHANGE_INTERACTION_ORDER_TYPE;
    //interactionClass= <no default value in message spec using builtin>
    //transport= <no default value in message spec using builtin>
    //order= <no default value in message spec using builtin>
}

void M_Change_Interaction_Order_Type::serialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::serialize(msgBuffer);
    //Specific serialization code
    msgBuffer.write_uint32(interactionClass);
    msgBuffer.write_uint8(transport);
    msgBuffer.write_uint8(order);
}

void M_Change_Interaction_Order_Type::deserialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::deserialize(msgBuffer);
    //Specific deserialization code
    interactionClass = static_cast<InteractionClassHandle>(msgBuffer.read_uint32());
    transport = static_cast<TransportType>(msgBuffer.read_uint8());
    order = static_cast<OrderType>(msgBuffer.read_uint8());
}

std::ostream& operator<<(std::ostream& os, const M_Change_Interaction_Order_Type& msg) {
    os << "[M_Change_Interaction_Order_Type - Begin]" << std::endl;
    
    os << static_cast<const M_Change_Interaction_Order_Type::Super&>(msg); // show parent class
    
    // === Specific show code {
    os << "  interactionClass = " << msg.interactionClass << std::endl;
    os << "  transport = " << msg.transport << std::endl;
    os << "  order = " << msg.order << std::endl;
    // } Specific show code ===
    
    os << "[M_Change_Interaction_Order_Type - End]" << std::endl;
    return os;
}

M_Enable_Time_Regulation::M_Enable_Time_Regulation() {
    this->messageName = "M_Enable_Time_Regulation";
    this->type = Message::ENABLE_TIME_REGULATION;
    lookahead=0;
}

void M_Enable_Time_Regulation::serialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::serialize(msgBuffer);
    //Specific serialization code
    msgBuffer.write_double(lookahead);
}

void M_Enable_Time_Regulation::deserialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::deserialize(msgBuffer);
    //Specific deserialization code
    lookahead = msgBuffer.read_double();
}

std::ostream& operator<<(std::ostream& os, const M_Enable_Time_Regulation& msg) {
    os << "[M_Enable_Time_Regulation - Begin]" << std::endl;
    
    os << static_cast<const M_Enable_Time_Regulation::Super&>(msg); // show parent class
    
    // === Specific show code {
    os << "  lookahead = " << msg.lookahead << std::endl;
    // } Specific show code ===
    
    os << "[M_Enable_Time_Regulation - End]" << std::endl;
    return os;
}

M_Disable_Time_Regulation::M_Disable_Time_Regulation() {
    this->messageName = "M_Disable_Time_Regulation";
    this->type = Message::DISABLE_TIME_REGULATION;
    lookahead=0;
}

void M_Disable_Time_Regulation::serialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::serialize(msgBuffer);
    //Specific serialization code
    msgBuffer.write_double(lookahead);
}

void M_Disable_Time_Regulation::deserialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::deserialize(msgBuffer);
    //Specific deserialization code
    lookahead = msgBuffer.read_double();
}

std::ostream& operator<<(std::ostream& os, const M_Disable_Time_Regulation& msg) {
    os << "[M_Disable_Time_Regulation - Begin]" << std::endl;
    
    os << static_cast<const M_Disable_Time_Regulation::Super&>(msg); // show parent class
    
    // === Specific show code {
    os << "  lookahead = " << msg.lookahead << std::endl;
    // } Specific show code ===
    
    os << "[M_Disable_Time_Regulation - End]" << std::endl;
    return os;
}

M_Enable_Time_Constrained::M_Enable_Time_Constrained() {
    this->messageName = "M_Enable_Time_Constrained";
    this->type = Message::ENABLE_TIME_CONSTRAINED;
}

M_Disable_Time_Constrained::M_Disable_Time_Constrained() {
    this->messageName = "M_Disable_Time_Constrained";
    this->type = Message::DISABLE_TIME_CONSTRAINED;
}

M_Query_Lbts::M_Query_Lbts() {
    this->messageName = "M_Query_Lbts";
    this->type = Message::QUERY_LBTS;
}

M_Query_Federate_Time::M_Query_Federate_Time() {
    this->messageName = "M_Query_Federate_Time";
    this->type = Message::QUERY_FEDERATE_TIME;
}

M_Query_Min_Next_Event_Time::M_Query_Min_Next_Event_Time() {
    this->messageName = "M_Query_Min_Next_Event_Time";
    this->type = Message::QUERY_MIN_NEXT_EVENT_TIME;
}

M_Modify_Lookahead::M_Modify_Lookahead() {
    this->messageName = "M_Modify_Lookahead";
    this->type = Message::MODIFY_LOOKAHEAD;
    lookahead=0;
}

void M_Modify_Lookahead::serialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::serialize(msgBuffer);
    //Specific serialization code
    msgBuffer.write_double(lookahead);
}

void M_Modify_Lookahead::deserialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::deserialize(msgBuffer);
    //Specific deserialization code
    lookahead = msgBuffer.read_double();
}

std::ostream& operator<<(std::ostream& os, const M_Modify_Lookahead& msg) {
    os << "[M_Modify_Lookahead - Begin]" << std::endl;
    
    os << static_cast<const M_Modify_Lookahead::Super&>(msg); // show parent class
    
    // === Specific show code {
    os << "  lookahead = " << msg.lookahead << std::endl;
    // } Specific show code ===
    
    os << "[M_Modify_Lookahead - End]" << std::endl;
    return os;
}

M_Query_Lookahead::M_Query_Lookahead() {
    this->messageName = "M_Query_Lookahead";
    this->type = Message::QUERY_LOOKAHEAD;
    lookahead=0;
}

void M_Query_Lookahead::serialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::serialize(msgBuffer);
    //Specific serialization code
    msgBuffer.write_double(lookahead);
}

void M_Query_Lookahead::deserialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::deserialize(msgBuffer);
    //Specific deserialization code
    lookahead = msgBuffer.read_double();
}

std::ostream& operator<<(std::ostream& os, const M_Query_Lookahead& msg) {
    os << "[M_Query_Lookahead - Begin]" << std::endl;
    
    os << static_cast<const M_Query_Lookahead::Super&>(msg); // show parent class
    
    // === Specific show code {
    os << "  lookahead = " << msg.lookahead << std::endl;
    // } Specific show code ===
    
    os << "[M_Query_Lookahead - End]" << std::endl;
    return os;
}

M_Retract::M_Retract() {
    this->messageName = "M_Retract";
    this->type = Message::RETRACT;
    //eventRetraction= <no default value in message spec using builtin>
}

void M_Retract::serialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::serialize(msgBuffer);
    //Specific serialization code
    eventRetraction.serialize(msgBuffer);
}

void M_Retract::deserialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::deserialize(msgBuffer);
    //Specific deserialization code
    eventRetraction.deserialize(msgBuffer);
}

std::ostream& operator<<(std::ostream& os, const M_Retract& msg) {
    os << "[M_Retract - Begin]" << std::endl;
    
    os << static_cast<const M_Retract::Super&>(msg); // show parent class
    
    // === Specific show code {
    os << "  eventRetraction = " << msg.eventRetraction << std::endl;
    // } Specific show code ===
    
    os << "[M_Retract - End]" << std::endl;
    return os;
}

M_Request_Retraction::M_Request_Retraction() {
    this->messageName = "M_Request_Retraction";
    this->type = Message::REQUEST_RETRACTION;
}

M_Time_Advance_Request::M_Time_Advance_Request() {
    this->messageName = "M_Time_Advance_Request";
    this->type = Message::TIME_ADVANCE_REQUEST;
}

M_Time_Advance_Request_Available::M_Time_Advance_Request_Available() {
    this->messageName = "M_Time_Advance_Request_Available";
    this->type = Message::TIME_ADVANCE_REQUEST_AVAILABLE;
}

M_Next_Event_Request::M_Next_Event_Request() {
    this->messageName = "M_Next_Event_Request";
    this->type = Message::NEXT_EVENT_REQUEST;
}

M_Next_Event_Request_Available::M_Next_Event_Request_Available() {
    this->messageName = "M_Next_Event_Request_Available";
    this->type = Message::NEXT_EVENT_REQUEST_AVAILABLE;
}

M_Flush_Queue_Request::M_Flush_Queue_Request() {
    this->messageName = "M_Flush_Queue_Request";
    this->type = Message::FLUSH_QUEUE_REQUEST;
}

M_Time_Advance_Grant::M_Time_Advance_Grant() {
    this->messageName = "M_Time_Advance_Grant";
    this->type = Message::TIME_ADVANCE_GRANT;
}

M_Enable_Asynchronous_Delivery::M_Enable_Asynchronous_Delivery() {
    this->messageName = "M_Enable_Asynchronous_Delivery";
    this->type = Message::ENABLE_ASYNCHRONOUS_DELIVERY;
}

M_Disable_Asynchronous_Delivery::M_Disable_Asynchronous_Delivery() {
    this->messageName = "M_Disable_Asynchronous_Delivery";
    this->type = Message::DISABLE_ASYNCHRONOUS_DELIVERY;
}

M_Time_Regulation_Enabled::M_Time_Regulation_Enabled() {
    this->messageName = "M_Time_Regulation_Enabled";
    this->type = Message::TIME_REGULATION_ENABLED;
}

M_Time_Constrained_Enabled::M_Time_Constrained_Enabled() {
    this->messageName = "M_Time_Constrained_Enabled";
    this->type = Message::TIME_CONSTRAINED_ENABLED;
}

M_Ddm_Create_Region::M_Ddm_Create_Region() {
    this->messageName = "M_Ddm_Create_Region";
    this->type = Message::DDM_CREATE_REGION;
    //space= <no default value in message spec using builtin>
    //extentSet= <no default value in message spec using builtin>
    //region= <no default value in message spec using builtin>
}

void M_Ddm_Create_Region::serialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::serialize(msgBuffer);
    //Specific serialization code
    msgBuffer.write_uint32(space);
    uint32_t extentSetSize = extentSet.size();
    msgBuffer.write_uint32(extentSetSize);
    for (uint32_t i = 0; i < extentSetSize; ++i) {
        // FIXME FIXME FIXME
        //don't know how to serialize native field <extentSet> of type <Extent>
        //probably no 'representation' given
    }
    msgBuffer.write_uint32(region);
}

void M_Ddm_Create_Region::deserialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::deserialize(msgBuffer);
    //Specific deserialization code
    space = static_cast<SpaceHandle>(msgBuffer.read_uint32());
    uint32_t extentSetSize = msgBuffer.read_uint32();
    extentSet.resize(extentSetSize);
    for (uint32_t i = 0; i < extentSetSize; ++i) {
        // FIXME FIXME FIXME
        //don't know how to deserialize native field <extentSet> of type <Extent>
        //probably no 'representation' given
    }
    region = static_cast<RegionHandle>(msgBuffer.read_uint32());
}

std::ostream& operator<<(std::ostream& os, const M_Ddm_Create_Region& msg) {
    os << "[M_Ddm_Create_Region - Begin]" << std::endl;
    
    os << static_cast<const M_Ddm_Create_Region::Super&>(msg); // show parent class
    
    // === Specific show code {
    os << "  space = " << msg.space << std::endl;
    os << "  extentSet [] =" << std::endl;
    for (const auto& element: msg.extentSet) {
        os << "// TODO field <extentSet> of type <Extent>";
    }
    os << std::endl;
    os << "  region = " << msg.region << std::endl;
    // } Specific show code ===
    
    os << "[M_Ddm_Create_Region - End]" << std::endl;
    return os;
}

M_Ddm_Modify_Region::M_Ddm_Modify_Region() {
    this->messageName = "M_Ddm_Modify_Region";
    this->type = Message::DDM_MODIFY_REGION;
    //region= <no default value in message spec using builtin>
    //extentSet= <no default value in message spec using builtin>
}

void M_Ddm_Modify_Region::serialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::serialize(msgBuffer);
    //Specific serialization code
    msgBuffer.write_uint32(region);
    uint32_t extentSetSize = extentSet.size();
    msgBuffer.write_uint32(extentSetSize);
    for (uint32_t i = 0; i < extentSetSize; ++i) {
        // FIXME FIXME FIXME
        //don't know how to serialize native field <extentSet> of type <Extent>
        //probably no 'representation' given
    }
}

void M_Ddm_Modify_Region::deserialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::deserialize(msgBuffer);
    //Specific deserialization code
    region = static_cast<RegionHandle>(msgBuffer.read_uint32());
    uint32_t extentSetSize = msgBuffer.read_uint32();
    extentSet.resize(extentSetSize);
    for (uint32_t i = 0; i < extentSetSize; ++i) {
        // FIXME FIXME FIXME
        //don't know how to deserialize native field <extentSet> of type <Extent>
        //probably no 'representation' given
    }
}

std::ostream& operator<<(std::ostream& os, const M_Ddm_Modify_Region& msg) {
    os << "[M_Ddm_Modify_Region - Begin]" << std::endl;
    
    os << static_cast<const M_Ddm_Modify_Region::Super&>(msg); // show parent class
    
    // === Specific show code {
    os << "  region = " << msg.region << std::endl;
    os << "  extentSet [] =" << std::endl;
    for (const auto& element: msg.extentSet) {
        os << "// TODO field <extentSet> of type <Extent>";
    }
    os << std::endl;
    // } Specific show code ===
    
    os << "[M_Ddm_Modify_Region - End]" << std::endl;
    return os;
}

M_Ddm_Delete_Region::M_Ddm_Delete_Region() {
    this->messageName = "M_Ddm_Delete_Region";
    this->type = Message::DDM_DELETE_REGION;
    //region= <no default value in message spec using builtin>
}

void M_Ddm_Delete_Region::serialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::serialize(msgBuffer);
    //Specific serialization code
    msgBuffer.write_uint32(region);
}

void M_Ddm_Delete_Region::deserialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::deserialize(msgBuffer);
    //Specific deserialization code
    region = static_cast<RegionHandle>(msgBuffer.read_uint32());
}

std::ostream& operator<<(std::ostream& os, const M_Ddm_Delete_Region& msg) {
    os << "[M_Ddm_Delete_Region - Begin]" << std::endl;
    
    os << static_cast<const M_Ddm_Delete_Region::Super&>(msg); // show parent class
    
    // === Specific show code {
    os << "  region = " << msg.region << std::endl;
    // } Specific show code ===
    
    os << "[M_Ddm_Delete_Region - End]" << std::endl;
    return os;
}

M_Ddm_Register_Object::M_Ddm_Register_Object() {
    this->messageName = "M_Ddm_Register_Object";
    this->type = Message::DDM_REGISTER_OBJECT;
    //objectClass= <no default value in message spec using builtin>
    //object= <no default value in message spec using builtin>
    _hasObjectInstanceName=false;
    //objectInstanceName= <no default value in message spec using builtin>
    //attributes= <no default value in message spec using builtin>
}

void M_Ddm_Register_Object::serialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::serialize(msgBuffer);
    //Specific serialization code
    msgBuffer.write_uint32(objectClass);
    msgBuffer.write_uint32(object);
    msgBuffer.write_bool(_hasObjectInstanceName);
    if (_hasObjectInstanceName) {
        msgBuffer.write_string(objectInstanceName);
    }
    uint32_t attributesSize = attributes.size();
    msgBuffer.write_uint32(attributesSize);
    for (uint32_t i = 0; i < attributesSize; ++i) {
        msgBuffer.write_uint32(attributes[i]);
    }
}

void M_Ddm_Register_Object::deserialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::deserialize(msgBuffer);
    //Specific deserialization code
    objectClass = static_cast<ObjectClassHandle>(msgBuffer.read_uint32());
    object = static_cast<ObjectHandle>(msgBuffer.read_uint32());
    _hasObjectInstanceName = msgBuffer.read_bool();
    if (_hasObjectInstanceName) {
        msgBuffer.read_string(objectInstanceName);
    }
    uint32_t attributesSize = msgBuffer.read_uint32();
    attributes.resize(attributesSize);
    for (uint32_t i = 0; i < attributesSize; ++i) {
        attributes[i] = static_cast<AttributeHandle>(msgBuffer.read_uint32());
    }
}

std::ostream& operator<<(std::ostream& os, const M_Ddm_Register_Object& msg) {
    os << "[M_Ddm_Register_Object - Begin]" << std::endl;
    
    os << static_cast<const M_Ddm_Register_Object::Super&>(msg); // show parent class
    
    // === Specific show code {
    os << "  objectClass = " << msg.objectClass << std::endl;
    os << "  object = " << msg.object << std::endl;
    os << "  (opt) objectInstanceName =" << msg.objectInstanceName << std::endl;
    os << "  attributes [] =" << std::endl;
    for (const auto& element: msg.attributes) {
        os << element;
    }
    os << std::endl;
    // } Specific show code ===
    
    os << "[M_Ddm_Register_Object - End]" << std::endl;
    return os;
}

M_Ddm_Associate_Region::M_Ddm_Associate_Region() {
    this->messageName = "M_Ddm_Associate_Region";
    this->type = Message::DDM_ASSOCIATE_REGION;
    //object= <no default value in message spec using builtin>
    //region= <no default value in message spec using builtin>
    //attributes= <no default value in message spec using builtin>
}

void M_Ddm_Associate_Region::serialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::serialize(msgBuffer);
    //Specific serialization code
    msgBuffer.write_uint32(object);
    msgBuffer.write_uint32(region);
    uint32_t attributesSize = attributes.size();
    msgBuffer.write_uint32(attributesSize);
    for (uint32_t i = 0; i < attributesSize; ++i) {
        msgBuffer.write_uint32(attributes[i]);
    }
}

void M_Ddm_Associate_Region::deserialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::deserialize(msgBuffer);
    //Specific deserialization code
    object = static_cast<ObjectHandle>(msgBuffer.read_uint32());
    region = static_cast<RegionHandle>(msgBuffer.read_uint32());
    uint32_t attributesSize = msgBuffer.read_uint32();
    attributes.resize(attributesSize);
    for (uint32_t i = 0; i < attributesSize; ++i) {
        attributes[i] = static_cast<AttributeHandle>(msgBuffer.read_uint32());
    }
}

std::ostream& operator<<(std::ostream& os, const M_Ddm_Associate_Region& msg) {
    os << "[M_Ddm_Associate_Region - Begin]" << std::endl;
    
    os << static_cast<const M_Ddm_Associate_Region::Super&>(msg); // show parent class
    
    // === Specific show code {
    os << "  object = " << msg.object << std::endl;
    os << "  region = " << msg.region << std::endl;
    os << "  attributes [] =" << std::endl;
    for (const auto& element: msg.attributes) {
        os << element;
    }
    os << std::endl;
    // } Specific show code ===
    
    os << "[M_Ddm_Associate_Region - End]" << std::endl;
    return os;
}

M_Ddm_Unassociate_Region::M_Ddm_Unassociate_Region() {
    this->messageName = "M_Ddm_Unassociate_Region";
    this->type = Message::DDM_UNASSOCIATE_REGION;
    //object= <no default value in message spec using builtin>
    //region= <no default value in message spec using builtin>
}

void M_Ddm_Unassociate_Region::serialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::serialize(msgBuffer);
    //Specific serialization code
    msgBuffer.write_uint32(object);
    msgBuffer.write_uint32(region);
}

void M_Ddm_Unassociate_Region::deserialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::deserialize(msgBuffer);
    //Specific deserialization code
    object = static_cast<ObjectHandle>(msgBuffer.read_uint32());
    region = static_cast<RegionHandle>(msgBuffer.read_uint32());
}

std::ostream& operator<<(std::ostream& os, const M_Ddm_Unassociate_Region& msg) {
    os << "[M_Ddm_Unassociate_Region - Begin]" << std::endl;
    
    os << static_cast<const M_Ddm_Unassociate_Region::Super&>(msg); // show parent class
    
    // === Specific show code {
    os << "  object = " << msg.object << std::endl;
    os << "  region = " << msg.region << std::endl;
    // } Specific show code ===
    
    os << "[M_Ddm_Unassociate_Region - End]" << std::endl;
    return os;
}

M_Ddm_Subscribe_Attributes::M_Ddm_Subscribe_Attributes() {
    this->messageName = "M_Ddm_Subscribe_Attributes";
    this->type = Message::DDM_SUBSCRIBE_ATTRIBUTES;
    //objectClass= <no default value in message spec using builtin>
    //region= <no default value in message spec using builtin>
    //passive= <no default value in message spec using builtin>
    //attributes= <no default value in message spec using builtin>
}

void M_Ddm_Subscribe_Attributes::serialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::serialize(msgBuffer);
    //Specific serialization code
    msgBuffer.write_uint32(objectClass);
    msgBuffer.write_uint32(region);
    msgBuffer.write_bool(passive);
    uint32_t attributesSize = attributes.size();
    msgBuffer.write_uint32(attributesSize);
    for (uint32_t i = 0; i < attributesSize; ++i) {
        msgBuffer.write_uint32(attributes[i]);
    }
}

void M_Ddm_Subscribe_Attributes::deserialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::deserialize(msgBuffer);
    //Specific deserialization code
    objectClass = static_cast<ObjectClassHandle>(msgBuffer.read_uint32());
    region = static_cast<RegionHandle>(msgBuffer.read_uint32());
    passive = msgBuffer.read_bool();
    uint32_t attributesSize = msgBuffer.read_uint32();
    attributes.resize(attributesSize);
    for (uint32_t i = 0; i < attributesSize; ++i) {
        attributes[i] = static_cast<AttributeHandle>(msgBuffer.read_uint32());
    }
}

std::ostream& operator<<(std::ostream& os, const M_Ddm_Subscribe_Attributes& msg) {
    os << "[M_Ddm_Subscribe_Attributes - Begin]" << std::endl;
    
    os << static_cast<const M_Ddm_Subscribe_Attributes::Super&>(msg); // show parent class
    
    // === Specific show code {
    os << "  objectClass = " << msg.objectClass << std::endl;
    os << "  region = " << msg.region << std::endl;
    os << "  passive = " << msg.passive << std::endl;
    os << "  attributes [] =" << std::endl;
    for (const auto& element: msg.attributes) {
        os << element;
    }
    os << std::endl;
    // } Specific show code ===
    
    os << "[M_Ddm_Subscribe_Attributes - End]" << std::endl;
    return os;
}

M_Ddm_Unsubscribe_Attributes::M_Ddm_Unsubscribe_Attributes() {
    this->messageName = "M_Ddm_Unsubscribe_Attributes";
    this->type = Message::DDM_UNSUBSCRIBE_ATTRIBUTES;
    //objectClass= <no default value in message spec using builtin>
    //region= <no default value in message spec using builtin>
}

void M_Ddm_Unsubscribe_Attributes::serialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::serialize(msgBuffer);
    //Specific serialization code
    msgBuffer.write_uint32(objectClass);
    msgBuffer.write_uint32(region);
}

void M_Ddm_Unsubscribe_Attributes::deserialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::deserialize(msgBuffer);
    //Specific deserialization code
    objectClass = static_cast<ObjectClassHandle>(msgBuffer.read_uint32());
    region = static_cast<RegionHandle>(msgBuffer.read_uint32());
}

std::ostream& operator<<(std::ostream& os, const M_Ddm_Unsubscribe_Attributes& msg) {
    os << "[M_Ddm_Unsubscribe_Attributes - Begin]" << std::endl;
    
    os << static_cast<const M_Ddm_Unsubscribe_Attributes::Super&>(msg); // show parent class
    
    // === Specific show code {
    os << "  objectClass = " << msg.objectClass << std::endl;
    os << "  region = " << msg.region << std::endl;
    // } Specific show code ===
    
    os << "[M_Ddm_Unsubscribe_Attributes - End]" << std::endl;
    return os;
}

M_Ddm_Subscribe_Interaction::M_Ddm_Subscribe_Interaction() {
    this->messageName = "M_Ddm_Subscribe_Interaction";
    this->type = Message::DDM_SUBSCRIBE_INTERACTION;
    //interactionClass= <no default value in message spec using builtin>
    //region= <no default value in message spec using builtin>
    //passive= <no default value in message spec using builtin>
}

void M_Ddm_Subscribe_Interaction::serialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::serialize(msgBuffer);
    //Specific serialization code
    msgBuffer.write_uint32(interactionClass);
    msgBuffer.write_uint32(region);
    msgBuffer.write_bool(passive);
}

void M_Ddm_Subscribe_Interaction::deserialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::deserialize(msgBuffer);
    //Specific deserialization code
    interactionClass = static_cast<InteractionClassHandle>(msgBuffer.read_uint32());
    region = static_cast<RegionHandle>(msgBuffer.read_uint32());
    passive = msgBuffer.read_bool();
}

std::ostream& operator<<(std::ostream& os, const M_Ddm_Subscribe_Interaction& msg) {
    os << "[M_Ddm_Subscribe_Interaction - Begin]" << std::endl;
    
    os << static_cast<const M_Ddm_Subscribe_Interaction::Super&>(msg); // show parent class
    
    // === Specific show code {
    os << "  interactionClass = " << msg.interactionClass << std::endl;
    os << "  region = " << msg.region << std::endl;
    os << "  passive = " << msg.passive << std::endl;
    // } Specific show code ===
    
    os << "[M_Ddm_Subscribe_Interaction - End]" << std::endl;
    return os;
}

M_Ddm_Unsubscribe_Interaction::M_Ddm_Unsubscribe_Interaction() {
    this->messageName = "M_Ddm_Unsubscribe_Interaction";
    this->type = Message::DDM_UNSUBSCRIBE_INTERACTION;
    //interactionClass= <no default value in message spec using builtin>
    //region= <no default value in message spec using builtin>
    //passive= <no default value in message spec using builtin>
}

void M_Ddm_Unsubscribe_Interaction::serialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::serialize(msgBuffer);
    //Specific serialization code
    msgBuffer.write_uint32(interactionClass);
    msgBuffer.write_uint32(region);
    msgBuffer.write_bool(passive);
}

void M_Ddm_Unsubscribe_Interaction::deserialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::deserialize(msgBuffer);
    //Specific deserialization code
    interactionClass = static_cast<InteractionClassHandle>(msgBuffer.read_uint32());
    region = static_cast<RegionHandle>(msgBuffer.read_uint32());
    passive = msgBuffer.read_bool();
}

std::ostream& operator<<(std::ostream& os, const M_Ddm_Unsubscribe_Interaction& msg) {
    os << "[M_Ddm_Unsubscribe_Interaction - Begin]" << std::endl;
    
    os << static_cast<const M_Ddm_Unsubscribe_Interaction::Super&>(msg); // show parent class
    
    // === Specific show code {
    os << "  interactionClass = " << msg.interactionClass << std::endl;
    os << "  region = " << msg.region << std::endl;
    os << "  passive = " << msg.passive << std::endl;
    // } Specific show code ===
    
    os << "[M_Ddm_Unsubscribe_Interaction - End]" << std::endl;
    return os;
}

M_Ddm_Request_Update::M_Ddm_Request_Update() {
    this->messageName = "M_Ddm_Request_Update";
    this->type = Message::DDM_REQUEST_UPDATE;
    //objectClass= <no default value in message spec using builtin>
    //region= <no default value in message spec using builtin>
    //attributes= <no default value in message spec using builtin>
}

void M_Ddm_Request_Update::serialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::serialize(msgBuffer);
    //Specific serialization code
    msgBuffer.write_uint32(objectClass);
    msgBuffer.write_uint32(region);
    uint32_t attributesSize = attributes.size();
    msgBuffer.write_uint32(attributesSize);
    for (uint32_t i = 0; i < attributesSize; ++i) {
        msgBuffer.write_uint32(attributes[i]);
    }
}

void M_Ddm_Request_Update::deserialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::deserialize(msgBuffer);
    //Specific deserialization code
    objectClass = static_cast<ObjectClassHandle>(msgBuffer.read_uint32());
    region = static_cast<RegionHandle>(msgBuffer.read_uint32());
    uint32_t attributesSize = msgBuffer.read_uint32();
    attributes.resize(attributesSize);
    for (uint32_t i = 0; i < attributesSize; ++i) {
        attributes[i] = static_cast<AttributeHandle>(msgBuffer.read_uint32());
    }
}

std::ostream& operator<<(std::ostream& os, const M_Ddm_Request_Update& msg) {
    os << "[M_Ddm_Request_Update - Begin]" << std::endl;
    
    os << static_cast<const M_Ddm_Request_Update::Super&>(msg); // show parent class
    
    // === Specific show code {
    os << "  objectClass = " << msg.objectClass << std::endl;
    os << "  region = " << msg.region << std::endl;
    os << "  attributes [] =" << std::endl;
    for (const auto& element: msg.attributes) {
        os << element;
    }
    os << std::endl;
    // } Specific show code ===
    
    os << "[M_Ddm_Request_Update - End]" << std::endl;
    return os;
}

M_Get_Object_Class_Handle::M_Get_Object_Class_Handle() {
    this->messageName = "M_Get_Object_Class_Handle";
    this->type = Message::GET_OBJECT_CLASS_HANDLE;
    //objectClass= <no default value in message spec using builtin>
    //className= <no default value in message spec using builtin>
}

void M_Get_Object_Class_Handle::serialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::serialize(msgBuffer);
    //Specific serialization code
    msgBuffer.write_uint32(objectClass);
    msgBuffer.write_string(className);
}

void M_Get_Object_Class_Handle::deserialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::deserialize(msgBuffer);
    //Specific deserialization code
    objectClass = static_cast<ObjectClassHandle>(msgBuffer.read_uint32());
    msgBuffer.read_string(className);
}

std::ostream& operator<<(std::ostream& os, const M_Get_Object_Class_Handle& msg) {
    os << "[M_Get_Object_Class_Handle - Begin]" << std::endl;
    
    os << static_cast<const M_Get_Object_Class_Handle::Super&>(msg); // show parent class
    
    // === Specific show code {
    os << "  objectClass = " << msg.objectClass << std::endl;
    os << "  className = " << msg.className << std::endl;
    // } Specific show code ===
    
    os << "[M_Get_Object_Class_Handle - End]" << std::endl;
    return os;
}

M_Get_Object_Class_Name::M_Get_Object_Class_Name() {
    this->messageName = "M_Get_Object_Class_Name";
    this->type = Message::GET_OBJECT_CLASS_NAME;
    //objectClass= <no default value in message spec using builtin>
    //className= <no default value in message spec using builtin>
}

void M_Get_Object_Class_Name::serialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::serialize(msgBuffer);
    //Specific serialization code
    msgBuffer.write_uint32(objectClass);
    msgBuffer.write_string(className);
}

void M_Get_Object_Class_Name::deserialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::deserialize(msgBuffer);
    //Specific deserialization code
    objectClass = static_cast<ObjectClassHandle>(msgBuffer.read_uint32());
    msgBuffer.read_string(className);
}

std::ostream& operator<<(std::ostream& os, const M_Get_Object_Class_Name& msg) {
    os << "[M_Get_Object_Class_Name - Begin]" << std::endl;
    
    os << static_cast<const M_Get_Object_Class_Name::Super&>(msg); // show parent class
    
    // === Specific show code {
    os << "  objectClass = " << msg.objectClass << std::endl;
    os << "  className = " << msg.className << std::endl;
    // } Specific show code ===
    
    os << "[M_Get_Object_Class_Name - End]" << std::endl;
    return os;
}

M_Get_Attribute_Handle::M_Get_Attribute_Handle() {
    this->messageName = "M_Get_Attribute_Handle";
    this->type = Message::GET_ATTRIBUTE_HANDLE;
    //objectClass= <no default value in message spec using builtin>
    //attributeName= <no default value in message spec using builtin>
    attribute=0;
}

void M_Get_Attribute_Handle::serialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::serialize(msgBuffer);
    //Specific serialization code
    msgBuffer.write_uint32(objectClass);
    msgBuffer.write_string(attributeName);
    msgBuffer.write_uint32(attribute);
}

void M_Get_Attribute_Handle::deserialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::deserialize(msgBuffer);
    //Specific deserialization code
    objectClass = static_cast<ObjectClassHandle>(msgBuffer.read_uint32());
    msgBuffer.read_string(attributeName);
    attribute = static_cast<AttributeHandle>(msgBuffer.read_uint32());
}

std::ostream& operator<<(std::ostream& os, const M_Get_Attribute_Handle& msg) {
    os << "[M_Get_Attribute_Handle - Begin]" << std::endl;
    
    os << static_cast<const M_Get_Attribute_Handle::Super&>(msg); // show parent class
    
    // === Specific show code {
    os << "  objectClass = " << msg.objectClass << std::endl;
    os << "  attributeName = " << msg.attributeName << std::endl;
    os << "  attribute = " << msg.attribute << std::endl;
    // } Specific show code ===
    
    os << "[M_Get_Attribute_Handle - End]" << std::endl;
    return os;
}

M_Get_Attribute_Name::M_Get_Attribute_Name() {
    this->messageName = "M_Get_Attribute_Name";
    this->type = Message::GET_ATTRIBUTE_NAME;
    //objectClass= <no default value in message spec using builtin>
    //attributeName= <no default value in message spec using builtin>
    attribute=0;
}

void M_Get_Attribute_Name::serialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::serialize(msgBuffer);
    //Specific serialization code
    msgBuffer.write_uint32(objectClass);
    msgBuffer.write_string(attributeName);
    msgBuffer.write_uint32(attribute);
}

void M_Get_Attribute_Name::deserialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::deserialize(msgBuffer);
    //Specific deserialization code
    objectClass = static_cast<ObjectClassHandle>(msgBuffer.read_uint32());
    msgBuffer.read_string(attributeName);
    attribute = static_cast<AttributeHandle>(msgBuffer.read_uint32());
}

std::ostream& operator<<(std::ostream& os, const M_Get_Attribute_Name& msg) {
    os << "[M_Get_Attribute_Name - Begin]" << std::endl;
    
    os << static_cast<const M_Get_Attribute_Name::Super&>(msg); // show parent class
    
    // === Specific show code {
    os << "  objectClass = " << msg.objectClass << std::endl;
    os << "  attributeName = " << msg.attributeName << std::endl;
    os << "  attribute = " << msg.attribute << std::endl;
    // } Specific show code ===
    
    os << "[M_Get_Attribute_Name - End]" << std::endl;
    return os;
}

M_Get_Interaction_Class_Handle::M_Get_Interaction_Class_Handle() {
    this->messageName = "M_Get_Interaction_Class_Handle";
    this->type = Message::GET_INTERACTION_CLASS_HANDLE;
    interactionClass=0;
    //className= <no default value in message spec using builtin>
}

void M_Get_Interaction_Class_Handle::serialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::serialize(msgBuffer);
    //Specific serialization code
    msgBuffer.write_uint32(interactionClass);
    msgBuffer.write_string(className);
}

void M_Get_Interaction_Class_Handle::deserialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::deserialize(msgBuffer);
    //Specific deserialization code
    interactionClass = static_cast<InteractionClassHandle>(msgBuffer.read_uint32());
    msgBuffer.read_string(className);
}

std::ostream& operator<<(std::ostream& os, const M_Get_Interaction_Class_Handle& msg) {
    os << "[M_Get_Interaction_Class_Handle - Begin]" << std::endl;
    
    os << static_cast<const M_Get_Interaction_Class_Handle::Super&>(msg); // show parent class
    
    // === Specific show code {
    os << "  interactionClass = " << msg.interactionClass << std::endl;
    os << "  className = " << msg.className << std::endl;
    // } Specific show code ===
    
    os << "[M_Get_Interaction_Class_Handle - End]" << std::endl;
    return os;
}

M_Get_Interaction_Class_Name::M_Get_Interaction_Class_Name() {
    this->messageName = "M_Get_Interaction_Class_Name";
    this->type = Message::GET_INTERACTION_CLASS_NAME;
    //interactionClass= <no default value in message spec using builtin>
    //className= <no default value in message spec using builtin>
}

void M_Get_Interaction_Class_Name::serialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::serialize(msgBuffer);
    //Specific serialization code
    msgBuffer.write_uint32(interactionClass);
    msgBuffer.write_string(className);
}

void M_Get_Interaction_Class_Name::deserialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::deserialize(msgBuffer);
    //Specific deserialization code
    interactionClass = static_cast<InteractionClassHandle>(msgBuffer.read_uint32());
    msgBuffer.read_string(className);
}

std::ostream& operator<<(std::ostream& os, const M_Get_Interaction_Class_Name& msg) {
    os << "[M_Get_Interaction_Class_Name - Begin]" << std::endl;
    
    os << static_cast<const M_Get_Interaction_Class_Name::Super&>(msg); // show parent class
    
    // === Specific show code {
    os << "  interactionClass = " << msg.interactionClass << std::endl;
    os << "  className = " << msg.className << std::endl;
    // } Specific show code ===
    
    os << "[M_Get_Interaction_Class_Name - End]" << std::endl;
    return os;
}

M_Get_Parameter_Handle::M_Get_Parameter_Handle() {
    this->messageName = "M_Get_Parameter_Handle";
    this->type = Message::GET_PARAMETER_HANDLE;
    //interactionClass= <no default value in message spec using builtin>
    //parameterName= <no default value in message spec using builtin>
    parameter=0;
}

void M_Get_Parameter_Handle::serialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::serialize(msgBuffer);
    //Specific serialization code
    msgBuffer.write_uint32(interactionClass);
    msgBuffer.write_string(parameterName);
    msgBuffer.write_uint32(parameter);
}

void M_Get_Parameter_Handle::deserialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::deserialize(msgBuffer);
    //Specific deserialization code
    interactionClass = static_cast<InteractionClassHandle>(msgBuffer.read_uint32());
    msgBuffer.read_string(parameterName);
    parameter = static_cast<ParameterHandle>(msgBuffer.read_uint32());
}

std::ostream& operator<<(std::ostream& os, const M_Get_Parameter_Handle& msg) {
    os << "[M_Get_Parameter_Handle - Begin]" << std::endl;
    
    os << static_cast<const M_Get_Parameter_Handle::Super&>(msg); // show parent class
    
    // === Specific show code {
    os << "  interactionClass = " << msg.interactionClass << std::endl;
    os << "  parameterName = " << msg.parameterName << std::endl;
    os << "  parameter = " << msg.parameter << std::endl;
    // } Specific show code ===
    
    os << "[M_Get_Parameter_Handle - End]" << std::endl;
    return os;
}

M_Get_Parameter_Name::M_Get_Parameter_Name() {
    this->messageName = "M_Get_Parameter_Name";
    this->type = Message::GET_PARAMETER_NAME;
    //interactionClass= <no default value in message spec using builtin>
    //parameterName= <no default value in message spec using builtin>
    parameter=0;
}

void M_Get_Parameter_Name::serialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::serialize(msgBuffer);
    //Specific serialization code
    msgBuffer.write_uint32(interactionClass);
    msgBuffer.write_string(parameterName);
    msgBuffer.write_uint32(parameter);
}

void M_Get_Parameter_Name::deserialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::deserialize(msgBuffer);
    //Specific deserialization code
    interactionClass = static_cast<InteractionClassHandle>(msgBuffer.read_uint32());
    msgBuffer.read_string(parameterName);
    parameter = static_cast<ParameterHandle>(msgBuffer.read_uint32());
}

std::ostream& operator<<(std::ostream& os, const M_Get_Parameter_Name& msg) {
    os << "[M_Get_Parameter_Name - Begin]" << std::endl;
    
    os << static_cast<const M_Get_Parameter_Name::Super&>(msg); // show parent class
    
    // === Specific show code {
    os << "  interactionClass = " << msg.interactionClass << std::endl;
    os << "  parameterName = " << msg.parameterName << std::endl;
    os << "  parameter = " << msg.parameter << std::endl;
    // } Specific show code ===
    
    os << "[M_Get_Parameter_Name - End]" << std::endl;
    return os;
}

M_Get_Object_Instance_Handle::M_Get_Object_Instance_Handle() {
    this->messageName = "M_Get_Object_Instance_Handle";
    this->type = Message::GET_OBJECT_INSTANCE_HANDLE;
    object=0;
    //objectInstanceName= <no default value in message spec using builtin>
}

void M_Get_Object_Instance_Handle::serialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::serialize(msgBuffer);
    //Specific serialization code
    msgBuffer.write_uint32(object);
    msgBuffer.write_string(objectInstanceName);
}

void M_Get_Object_Instance_Handle::deserialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::deserialize(msgBuffer);
    //Specific deserialization code
    object = static_cast<ObjectHandle>(msgBuffer.read_uint32());
    msgBuffer.read_string(objectInstanceName);
}

std::ostream& operator<<(std::ostream& os, const M_Get_Object_Instance_Handle& msg) {
    os << "[M_Get_Object_Instance_Handle - Begin]" << std::endl;
    
    os << static_cast<const M_Get_Object_Instance_Handle::Super&>(msg); // show parent class
    
    // === Specific show code {
    os << "  object = " << msg.object << std::endl;
    os << "  objectInstanceName = " << msg.objectInstanceName << std::endl;
    // } Specific show code ===
    
    os << "[M_Get_Object_Instance_Handle - End]" << std::endl;
    return os;
}

M_Get_Object_Instance_Name::M_Get_Object_Instance_Name() {
    this->messageName = "M_Get_Object_Instance_Name";
    this->type = Message::GET_OBJECT_INSTANCE_NAME;
    //object= <no default value in message spec using builtin>
    //objectInstanceName= <no default value in message spec using builtin>
}

void M_Get_Object_Instance_Name::serialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::serialize(msgBuffer);
    //Specific serialization code
    msgBuffer.write_uint32(object);
    msgBuffer.write_string(objectInstanceName);
}

void M_Get_Object_Instance_Name::deserialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::deserialize(msgBuffer);
    //Specific deserialization code
    object = static_cast<ObjectHandle>(msgBuffer.read_uint32());
    msgBuffer.read_string(objectInstanceName);
}

std::ostream& operator<<(std::ostream& os, const M_Get_Object_Instance_Name& msg) {
    os << "[M_Get_Object_Instance_Name - Begin]" << std::endl;
    
    os << static_cast<const M_Get_Object_Instance_Name::Super&>(msg); // show parent class
    
    // === Specific show code {
    os << "  object = " << msg.object << std::endl;
    os << "  objectInstanceName = " << msg.objectInstanceName << std::endl;
    // } Specific show code ===
    
    os << "[M_Get_Object_Instance_Name - End]" << std::endl;
    return os;
}

M_Get_Space_Handle::M_Get_Space_Handle() {
    this->messageName = "M_Get_Space_Handle";
    this->type = Message::GET_SPACE_HANDLE;
    //spaceName= <no default value in message spec using builtin>
    space=0;
}

void M_Get_Space_Handle::serialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::serialize(msgBuffer);
    //Specific serialization code
    msgBuffer.write_string(spaceName);
    msgBuffer.write_uint32(space);
}

void M_Get_Space_Handle::deserialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::deserialize(msgBuffer);
    //Specific deserialization code
    msgBuffer.read_string(spaceName);
    space = static_cast<SpaceHandle>(msgBuffer.read_uint32());
}

std::ostream& operator<<(std::ostream& os, const M_Get_Space_Handle& msg) {
    os << "[M_Get_Space_Handle - Begin]" << std::endl;
    
    os << static_cast<const M_Get_Space_Handle::Super&>(msg); // show parent class
    
    // === Specific show code {
    os << "  spaceName = " << msg.spaceName << std::endl;
    os << "  space = " << msg.space << std::endl;
    // } Specific show code ===
    
    os << "[M_Get_Space_Handle - End]" << std::endl;
    return os;
}

M_Get_Space_Name::M_Get_Space_Name() {
    this->messageName = "M_Get_Space_Name";
    this->type = Message::GET_SPACE_NAME;
    //spaceName= <no default value in message spec using builtin>
    //space= <no default value in message spec using builtin>
}

void M_Get_Space_Name::serialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::serialize(msgBuffer);
    //Specific serialization code
    msgBuffer.write_string(spaceName);
    msgBuffer.write_uint32(space);
}

void M_Get_Space_Name::deserialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::deserialize(msgBuffer);
    //Specific deserialization code
    msgBuffer.read_string(spaceName);
    space = static_cast<SpaceHandle>(msgBuffer.read_uint32());
}

std::ostream& operator<<(std::ostream& os, const M_Get_Space_Name& msg) {
    os << "[M_Get_Space_Name - Begin]" << std::endl;
    
    os << static_cast<const M_Get_Space_Name::Super&>(msg); // show parent class
    
    // === Specific show code {
    os << "  spaceName = " << msg.spaceName << std::endl;
    os << "  space = " << msg.space << std::endl;
    // } Specific show code ===
    
    os << "[M_Get_Space_Name - End]" << std::endl;
    return os;
}

M_Get_Dimension_Handle::M_Get_Dimension_Handle() {
    this->messageName = "M_Get_Dimension_Handle";
    this->type = Message::GET_DIMENSION_HANDLE;
    //dimensionName= <no default value in message spec using builtin>
    //space= <no default value in message spec using builtin>
    dimension=0;
}

void M_Get_Dimension_Handle::serialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::serialize(msgBuffer);
    //Specific serialization code
    msgBuffer.write_string(dimensionName);
    msgBuffer.write_uint32(space);
    msgBuffer.write_uint32(dimension);
}

void M_Get_Dimension_Handle::deserialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::deserialize(msgBuffer);
    //Specific deserialization code
    msgBuffer.read_string(dimensionName);
    space = static_cast<SpaceHandle>(msgBuffer.read_uint32());
    dimension = static_cast<DimensionHandle>(msgBuffer.read_uint32());
}

std::ostream& operator<<(std::ostream& os, const M_Get_Dimension_Handle& msg) {
    os << "[M_Get_Dimension_Handle - Begin]" << std::endl;
    
    os << static_cast<const M_Get_Dimension_Handle::Super&>(msg); // show parent class
    
    // === Specific show code {
    os << "  dimensionName = " << msg.dimensionName << std::endl;
    os << "  space = " << msg.space << std::endl;
    os << "  dimension = " << msg.dimension << std::endl;
    // } Specific show code ===
    
    os << "[M_Get_Dimension_Handle - End]" << std::endl;
    return os;
}

M_Get_Dimension_Name::M_Get_Dimension_Name() {
    this->messageName = "M_Get_Dimension_Name";
    this->type = Message::GET_DIMENSION_NAME;
    //dimensionName= <no default value in message spec using builtin>
    //space= <no default value in message spec using builtin>
    //dimension= <no default value in message spec using builtin>
}

void M_Get_Dimension_Name::serialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::serialize(msgBuffer);
    //Specific serialization code
    msgBuffer.write_string(dimensionName);
    msgBuffer.write_uint32(space);
    msgBuffer.write_uint32(dimension);
}

void M_Get_Dimension_Name::deserialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::deserialize(msgBuffer);
    //Specific deserialization code
    msgBuffer.read_string(dimensionName);
    space = static_cast<SpaceHandle>(msgBuffer.read_uint32());
    dimension = static_cast<DimensionHandle>(msgBuffer.read_uint32());
}

std::ostream& operator<<(std::ostream& os, const M_Get_Dimension_Name& msg) {
    os << "[M_Get_Dimension_Name - Begin]" << std::endl;
    
    os << static_cast<const M_Get_Dimension_Name::Super&>(msg); // show parent class
    
    // === Specific show code {
    os << "  dimensionName = " << msg.dimensionName << std::endl;
    os << "  space = " << msg.space << std::endl;
    os << "  dimension = " << msg.dimension << std::endl;
    // } Specific show code ===
    
    os << "[M_Get_Dimension_Name - End]" << std::endl;
    return os;
}

M_Get_Attribute_Space_Handle::M_Get_Attribute_Space_Handle() {
    this->messageName = "M_Get_Attribute_Space_Handle";
    this->type = Message::GET_ATTRIBUTE_SPACE_HANDLE;
    //objectClass= <no default value in message spec using builtin>
    //attribute= <no default value in message spec using builtin>
    space=0;
}

void M_Get_Attribute_Space_Handle::serialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::serialize(msgBuffer);
    //Specific serialization code
    msgBuffer.write_uint32(objectClass);
    msgBuffer.write_uint32(attribute);
    msgBuffer.write_uint32(space);
}

void M_Get_Attribute_Space_Handle::deserialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::deserialize(msgBuffer);
    //Specific deserialization code
    objectClass = static_cast<ObjectClassHandle>(msgBuffer.read_uint32());
    attribute = static_cast<AttributeHandle>(msgBuffer.read_uint32());
    space = static_cast<SpaceHandle>(msgBuffer.read_uint32());
}

std::ostream& operator<<(std::ostream& os, const M_Get_Attribute_Space_Handle& msg) {
    os << "[M_Get_Attribute_Space_Handle - Begin]" << std::endl;
    
    os << static_cast<const M_Get_Attribute_Space_Handle::Super&>(msg); // show parent class
    
    // === Specific show code {
    os << "  objectClass = " << msg.objectClass << std::endl;
    os << "  attribute = " << msg.attribute << std::endl;
    os << "  space = " << msg.space << std::endl;
    // } Specific show code ===
    
    os << "[M_Get_Attribute_Space_Handle - End]" << std::endl;
    return os;
}

M_Get_Object_Class::M_Get_Object_Class() {
    this->messageName = "M_Get_Object_Class";
    this->type = Message::GET_OBJECT_CLASS;
    //objectClass= <no default value in message spec using builtin>
    //object= <no default value in message spec using builtin>
}

void M_Get_Object_Class::serialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::serialize(msgBuffer);
    //Specific serialization code
    msgBuffer.write_uint32(objectClass);
    msgBuffer.write_uint32(object);
}

void M_Get_Object_Class::deserialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::deserialize(msgBuffer);
    //Specific deserialization code
    objectClass = static_cast<ObjectClassHandle>(msgBuffer.read_uint32());
    object = static_cast<ObjectHandle>(msgBuffer.read_uint32());
}

std::ostream& operator<<(std::ostream& os, const M_Get_Object_Class& msg) {
    os << "[M_Get_Object_Class - Begin]" << std::endl;
    
    os << static_cast<const M_Get_Object_Class::Super&>(msg); // show parent class
    
    // === Specific show code {
    os << "  objectClass = " << msg.objectClass << std::endl;
    os << "  object = " << msg.object << std::endl;
    // } Specific show code ===
    
    os << "[M_Get_Object_Class - End]" << std::endl;
    return os;
}

M_Get_Interaction_Space_Handle::M_Get_Interaction_Space_Handle() {
    this->messageName = "M_Get_Interaction_Space_Handle";
    this->type = Message::GET_INTERACTION_SPACE_HANDLE;
    //interactionClass= <no default value in message spec using builtin>
    space=0;
}

void M_Get_Interaction_Space_Handle::serialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::serialize(msgBuffer);
    //Specific serialization code
    msgBuffer.write_uint32(interactionClass);
    msgBuffer.write_uint32(space);
}

void M_Get_Interaction_Space_Handle::deserialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::deserialize(msgBuffer);
    //Specific deserialization code
    interactionClass = static_cast<InteractionClassHandle>(msgBuffer.read_uint32());
    space = static_cast<SpaceHandle>(msgBuffer.read_uint32());
}

std::ostream& operator<<(std::ostream& os, const M_Get_Interaction_Space_Handle& msg) {
    os << "[M_Get_Interaction_Space_Handle - Begin]" << std::endl;
    
    os << static_cast<const M_Get_Interaction_Space_Handle::Super&>(msg); // show parent class
    
    // === Specific show code {
    os << "  interactionClass = " << msg.interactionClass << std::endl;
    os << "  space = " << msg.space << std::endl;
    // } Specific show code ===
    
    os << "[M_Get_Interaction_Space_Handle - End]" << std::endl;
    return os;
}

M_Get_Transportation_Handle::M_Get_Transportation_Handle() {
    this->messageName = "M_Get_Transportation_Handle";
    this->type = Message::GET_TRANSPORTATION_HANDLE;
    //transportationName= <no default value in message spec using builtin>
    transportation=0;
}

void M_Get_Transportation_Handle::serialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::serialize(msgBuffer);
    //Specific serialization code
    msgBuffer.write_string(transportationName);
    msgBuffer.write_uint8(transportation);
}

void M_Get_Transportation_Handle::deserialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::deserialize(msgBuffer);
    //Specific deserialization code
    msgBuffer.read_string(transportationName);
    transportation = static_cast<TransportType>(msgBuffer.read_uint8());
}

std::ostream& operator<<(std::ostream& os, const M_Get_Transportation_Handle& msg) {
    os << "[M_Get_Transportation_Handle - Begin]" << std::endl;
    
    os << static_cast<const M_Get_Transportation_Handle::Super&>(msg); // show parent class
    
    // === Specific show code {
    os << "  transportationName = " << msg.transportationName << std::endl;
    os << "  transportation = " << msg.transportation << std::endl;
    // } Specific show code ===
    
    os << "[M_Get_Transportation_Handle - End]" << std::endl;
    return os;
}

M_Get_Transportation_Name::M_Get_Transportation_Name() {
    this->messageName = "M_Get_Transportation_Name";
    this->type = Message::GET_TRANSPORTATION_NAME;
    //transportationName= <no default value in message spec using builtin>
    //transportation= <no default value in message spec using builtin>
}

void M_Get_Transportation_Name::serialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::serialize(msgBuffer);
    //Specific serialization code
    msgBuffer.write_string(transportationName);
    msgBuffer.write_uint8(transportation);
}

void M_Get_Transportation_Name::deserialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::deserialize(msgBuffer);
    //Specific deserialization code
    msgBuffer.read_string(transportationName);
    transportation = static_cast<TransportType>(msgBuffer.read_uint8());
}

std::ostream& operator<<(std::ostream& os, const M_Get_Transportation_Name& msg) {
    os << "[M_Get_Transportation_Name - Begin]" << std::endl;
    
    os << static_cast<const M_Get_Transportation_Name::Super&>(msg); // show parent class
    
    // === Specific show code {
    os << "  transportationName = " << msg.transportationName << std::endl;
    os << "  transportation = " << msg.transportation << std::endl;
    // } Specific show code ===
    
    os << "[M_Get_Transportation_Name - End]" << std::endl;
    return os;
}

M_Get_Ordering_Handle::M_Get_Ordering_Handle() {
    this->messageName = "M_Get_Ordering_Handle";
    this->type = Message::GET_ORDERING_HANDLE;
    //orderingName= <no default value in message spec using builtin>
    ordering=0;
}

void M_Get_Ordering_Handle::serialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::serialize(msgBuffer);
    //Specific serialization code
    msgBuffer.write_string(orderingName);
    msgBuffer.write_uint8(ordering);
}

void M_Get_Ordering_Handle::deserialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::deserialize(msgBuffer);
    //Specific deserialization code
    msgBuffer.read_string(orderingName);
    ordering = static_cast<OrderType>(msgBuffer.read_uint8());
}

std::ostream& operator<<(std::ostream& os, const M_Get_Ordering_Handle& msg) {
    os << "[M_Get_Ordering_Handle - Begin]" << std::endl;
    
    os << static_cast<const M_Get_Ordering_Handle::Super&>(msg); // show parent class
    
    // === Specific show code {
    os << "  orderingName = " << msg.orderingName << std::endl;
    os << "  ordering = " << msg.ordering << std::endl;
    // } Specific show code ===
    
    os << "[M_Get_Ordering_Handle - End]" << std::endl;
    return os;
}

M_Get_Ordering_Name::M_Get_Ordering_Name() {
    this->messageName = "M_Get_Ordering_Name";
    this->type = Message::GET_ORDERING_NAME;
    //orderingName= <no default value in message spec using builtin>
    //ordering= <no default value in message spec using builtin>
}

void M_Get_Ordering_Name::serialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::serialize(msgBuffer);
    //Specific serialization code
    msgBuffer.write_string(orderingName);
    msgBuffer.write_uint8(ordering);
}

void M_Get_Ordering_Name::deserialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::deserialize(msgBuffer);
    //Specific deserialization code
    msgBuffer.read_string(orderingName);
    ordering = static_cast<OrderType>(msgBuffer.read_uint8());
}

std::ostream& operator<<(std::ostream& os, const M_Get_Ordering_Name& msg) {
    os << "[M_Get_Ordering_Name - Begin]" << std::endl;
    
    os << static_cast<const M_Get_Ordering_Name::Super&>(msg); // show parent class
    
    // === Specific show code {
    os << "  orderingName = " << msg.orderingName << std::endl;
    os << "  ordering = " << msg.ordering << std::endl;
    // } Specific show code ===
    
    os << "[M_Get_Ordering_Name - End]" << std::endl;
    return os;
}

M_Enable_Class_Relevance_Advisory_Switch::M_Enable_Class_Relevance_Advisory_Switch() {
    this->messageName = "M_Enable_Class_Relevance_Advisory_Switch";
    this->type = Message::ENABLE_CLASS_RELEVANCE_ADVISORY_SWITCH;
}

M_Disable_Class_Relevance_Advisory_Switch::M_Disable_Class_Relevance_Advisory_Switch() {
    this->messageName = "M_Disable_Class_Relevance_Advisory_Switch";
    this->type = Message::DISABLE_CLASS_RELEVANCE_ADVISORY_SWITCH;
}

M_Enable_Attribute_Relevance_Advisory_Switch::M_Enable_Attribute_Relevance_Advisory_Switch() {
    this->messageName = "M_Enable_Attribute_Relevance_Advisory_Switch";
    this->type = Message::ENABLE_ATTRIBUTE_RELEVANCE_ADVISORY_SWITCH;
}

M_Disable_Attribute_Relevance_Advisory_Switch::M_Disable_Attribute_Relevance_Advisory_Switch() {
    this->messageName = "M_Disable_Attribute_Relevance_Advisory_Switch";
    this->type = Message::DISABLE_ATTRIBUTE_RELEVANCE_ADVISORY_SWITCH;
}

M_Enable_Attribute_Scope_Advisory_Switch::M_Enable_Attribute_Scope_Advisory_Switch() {
    this->messageName = "M_Enable_Attribute_Scope_Advisory_Switch";
    this->type = Message::ENABLE_ATTRIBUTE_SCOPE_ADVISORY_SWITCH;
}

M_Disable_Attribute_Scope_Advisory_Switch::M_Disable_Attribute_Scope_Advisory_Switch() {
    this->messageName = "M_Disable_Attribute_Scope_Advisory_Switch";
    this->type = Message::DISABLE_ATTRIBUTE_SCOPE_ADVISORY_SWITCH;
}

M_Enable_Interaction_Relevance_Advisory_Switch::M_Enable_Interaction_Relevance_Advisory_Switch() {
    this->messageName = "M_Enable_Interaction_Relevance_Advisory_Switch";
    this->type = Message::ENABLE_INTERACTION_RELEVANCE_ADVISORY_SWITCH;
}

M_Disable_Interaction_Relevance_Advisory_Switch::M_Disable_Interaction_Relevance_Advisory_Switch() {
    this->messageName = "M_Disable_Interaction_Relevance_Advisory_Switch";
    this->type = Message::DISABLE_INTERACTION_RELEVANCE_ADVISORY_SWITCH;
}

M_Tick_Request::M_Tick_Request() {
    this->messageName = "M_Tick_Request";
    this->type = Message::TICK_REQUEST;
    //multiple= <no default value in message spec using builtin>
    //minTickTime= <no default value in message spec using builtin>
    //maxTickTime= <no default value in message spec using builtin>
}

void M_Tick_Request::serialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::serialize(msgBuffer);
    //Specific serialization code
    msgBuffer.write_bool(multiple);
    msgBuffer.write_double(minTickTime);
    msgBuffer.write_double(maxTickTime);
}

void M_Tick_Request::deserialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::deserialize(msgBuffer);
    //Specific deserialization code
    multiple = msgBuffer.read_bool();
    minTickTime = msgBuffer.read_double();
    maxTickTime = msgBuffer.read_double();
}

std::ostream& operator<<(std::ostream& os, const M_Tick_Request& msg) {
    os << "[M_Tick_Request - Begin]" << std::endl;
    
    os << static_cast<const M_Tick_Request::Super&>(msg); // show parent class
    
    // === Specific show code {
    os << "  multiple = " << msg.multiple << std::endl;
    os << "  minTickTime = " << msg.minTickTime << std::endl;
    os << "  maxTickTime = " << msg.maxTickTime << std::endl;
    // } Specific show code ===
    
    os << "[M_Tick_Request - End]" << std::endl;
    return os;
}

M_Tick_Request_Next::M_Tick_Request_Next() {
    this->messageName = "M_Tick_Request_Next";
    this->type = Message::TICK_REQUEST_NEXT;
}

M_Tick_Request_Stop::M_Tick_Request_Stop() {
    this->messageName = "M_Tick_Request_Stop";
    this->type = Message::TICK_REQUEST_STOP;
}

M_Reserve_Object_Instance_Name::M_Reserve_Object_Instance_Name() {
    this->messageName = "M_Reserve_Object_Instance_Name";
    this->type = Message::RESERVE_OBJECT_INSTANCE_NAME;
    //objectName= <no default value in message spec using builtin>
}

void M_Reserve_Object_Instance_Name::serialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::serialize(msgBuffer);
    //Specific serialization code
    msgBuffer.write_string(objectName);
}

void M_Reserve_Object_Instance_Name::deserialize(libhla::MessageBuffer& msgBuffer) {
    //Call parent class
    Super::deserialize(msgBuffer);
    //Specific deserialization code
    msgBuffer.read_string(objectName);
}

std::ostream& operator<<(std::ostream& os, const M_Reserve_Object_Instance_Name& msg) {
    os << "[M_Reserve_Object_Instance_Name - Begin]" << std::endl;
    
    os << static_cast<const M_Reserve_Object_Instance_Name::Super&>(msg); // show parent class
    
    // === Specific show code {
    os << "  objectName = " << msg.objectName << std::endl;
    // } Specific show code ===
    
    os << "[M_Reserve_Object_Instance_Name - End]" << std::endl;
    return os;
}

M_Reserve_Object_Instance_Name_Succeeded::M_Reserve_Object_Instance_Name_Succeeded() {
    this->messageName = "M_Reserve_Object_Instance_Name_Succeeded";
    this->type = Message::RESERVE_OBJECT_INSTANCE_NAME_SUCCEEDED;
}

M_Reserve_Object_Instance_Name_Failed::M_Reserve_Object_Instance_Name_Failed() {
    this->messageName = "M_Reserve_Object_Instance_Name_Failed";
    this->type = Message::RESERVE_OBJECT_INSTANCE_NAME_FAILED;
}

Message* M_Factory::create(M_Type type) throw (NetworkError ,NetworkSignal) { 
    Message* msg = NULL;

    switch (type) {
        case Message::NOT_USED:
            throw NetworkError("NOT_USED message type should not be used!!");
            break;
        case Message::OPEN_CONNEXION:
            msg = new M_Open_Connexion();
            break;
        case Message::CLOSE_CONNEXION:
            msg = new M_Close_Connexion();
            break;
        case Message::CREATE_FEDERATION_EXECUTION:
            msg = new M_Create_Federation_Execution();
            break;
        case Message::DESTROY_FEDERATION_EXECUTION:
            msg = new M_Destroy_Federation_Execution();
            break;
        case Message::JOIN_FEDERATION_EXECUTION:
            msg = new M_Join_Federation_Execution();
            break;
        case Message::RESIGN_FEDERATION_EXECUTION:
            msg = new M_Resign_Federation_Execution();
            break;
        case Message::REGISTER_FEDERATION_SYNCHRONIZATION_POINT:
            msg = new M_Register_Federation_Synchronization_Point();
            break;
        case Message::SYNCHRONIZATION_POINT_REGISTRATION_FAILED:
            msg = new M_Synchronization_Point_Registration_Failed();
            break;
        case Message::SYNCHRONIZATION_POINT_REGISTRATION_SUCCEEDED:
            msg = new M_Synchronization_Point_Registration_Succeeded();
            break;
        case Message::ANNOUNCE_SYNCHRONIZATION_POINT:
            msg = new M_Announce_Synchronization_Point();
            break;
        case Message::SYNCHRONIZATION_POINT_ACHIEVED:
            msg = new M_Synchronization_Point_Achieved();
            break;
        case Message::FEDERATION_SYNCHRONIZED:
            msg = new M_Federation_Synchronized();
            break;
        case Message::REQUEST_FEDERATION_SAVE:
            msg = new M_Request_Federation_Save();
            break;
        case Message::INITIATE_FEDERATE_SAVE:
            msg = new M_Initiate_Federate_Save();
            break;
        case Message::FEDERATE_SAVE_BEGUN:
            msg = new M_Federate_Save_Begun();
            break;
        case Message::FEDERATE_SAVE_COMPLETE:
            msg = new M_Federate_Save_Complete();
            break;
        case Message::FEDERATE_SAVE_NOT_COMPLETE:
            msg = new M_Federate_Save_Not_Complete();
            break;
        case Message::FEDERATION_SAVED:
            msg = new M_Federation_Saved();
            break;
        case Message::FEDERATION_NOT_SAVED:
            msg = new M_Federation_Not_Saved();
            break;
        case Message::REQUEST_FEDERATION_RESTORE:
            msg = new M_Request_Federation_Restore();
            break;
        case Message::REQUEST_FEDERATION_RESTORE_FAILED:
            msg = new M_Request_Federation_Restore_Failed();
            break;
        case Message::REQUEST_FEDERATION_RESTORE_SUCCEEDED:
            msg = new M_Request_Federation_Restore_Succeeded();
            break;
        case Message::INITIATE_FEDERATE_RESTORE:
            msg = new M_Initiate_Federate_Restore();
            break;
        case Message::FEDERATE_RESTORE_COMPLETE:
            msg = new M_Federate_Restore_Complete();
            break;
        case Message::FEDERATE_RESTORE_NOT_COMPLETE:
            msg = new M_Federate_Restore_Not_Complete();
            break;
        case Message::FEDERATION_RESTORED:
            msg = new M_Federation_Restored();
            break;
        case Message::FEDERATION_NOT_RESTORED:
            msg = new M_Federation_Not_Restored();
            break;
        case Message::FEDERATION_RESTORE_BEGUN:
            msg = new M_Federation_Restore_Begun();
            break;
        case Message::PUBLISH_OBJECT_CLASS:
            msg = new M_Publish_Object_Class();
            break;
        case Message::UNPUBLISH_OBJECT_CLASS:
            msg = new M_Unpublish_Object_Class();
            break;
        case Message::PUBLISH_INTERACTION_CLASS:
            msg = new M_Publish_Interaction_Class();
            break;
        case Message::UNPUBLISH_INTERACTION_CLASS:
            msg = new M_Unpublish_Interaction_Class();
            break;
        case Message::SUBSCRIBE_OBJECT_CLASS_ATTRIBUTES:
            msg = new M_Subscribe_Object_Class_Attributes();
            break;
        case Message::UNSUBSCRIBE_OBJECT_CLASS:
            msg = new M_Unsubscribe_Object_Class();
            break;
        case Message::SUBSCRIBE_INTERACTION_CLASS:
            msg = new M_Subscribe_Interaction_Class();
            break;
        case Message::UNSUBSCRIBE_INTERACTION_CLASS:
            msg = new M_Unsubscribe_Interaction_Class();
            break;
        case Message::START_REGISTRATION_FOR_OBJECT_CLASS:
            msg = new M_Start_Registration_For_Object_Class();
            break;
        case Message::STOP_REGISTRATION_FOR_OBJECT_CLASS:
            msg = new M_Stop_Registration_For_Object_Class();
            break;
        case Message::TURN_INTERACTIONS_ON:
            msg = new M_Turn_Interactions_On();
            break;
        case Message::TURN_INTERACTIONS_OFF:
            msg = new M_Turn_Interactions_Off();
            break;
        case Message::REGISTER_OBJECT_INSTANCE:
            msg = new M_Register_Object_Instance();
            break;
        case Message::UPDATE_ATTRIBUTE_VALUES:
            msg = new M_Update_Attribute_Values();
            break;
        case Message::DISCOVER_OBJECT_INSTANCE:
            msg = new M_Discover_Object_Instance();
            break;
        case Message::REFLECT_ATTRIBUTE_VALUES:
            msg = new M_Reflect_Attribute_Values();
            break;
        case Message::SEND_INTERACTION:
            msg = new M_Send_Interaction();
            break;
        case Message::RECEIVE_INTERACTION:
            msg = new M_Receive_Interaction();
            break;
        case Message::DELETE_OBJECT_INSTANCE:
            msg = new M_Delete_Object_Instance();
            break;
        case Message::LOCAL_DELETE_OBJECT_INSTANCE:
            msg = new M_Local_Delete_Object_Instance();
            break;
        case Message::REMOVE_OBJECT_INSTANCE:
            msg = new M_Remove_Object_Instance();
            break;
        case Message::CHANGE_ATTRIBUTE_TRANSPORTATION_TYPE:
            msg = new M_Change_Attribute_Transportation_Type();
            break;
        case Message::CHANGE_INTERACTION_TRANSPORTATION_TYPE:
            msg = new M_Change_Interaction_Transportation_Type();
            break;
        case Message::REQUEST_OBJECT_ATTRIBUTE_VALUE_UPDATE:
            msg = new M_Request_Object_Attribute_Value_Update();
            break;
        case Message::REQUEST_CLASS_ATTRIBUTE_VALUE_UPDATE:
            msg = new M_Request_Class_Attribute_Value_Update();
            break;
        case Message::PROVIDE_ATTRIBUTE_VALUE_UPDATE:
            msg = new M_Provide_Attribute_Value_Update();
            break;
        case Message::ATTRIBUTES_IN_SCOPE:
            msg = new M_Attributes_In_Scope();
            break;
        case Message::ATTRIBUTES_OUT_OF_SCOPE:
            msg = new M_Attributes_Out_Of_Scope();
            break;
        case Message::TURN_UPDATES_ON_FOR_OBJECT_INSTANCE:
            msg = new M_Turn_Updates_On_For_Object_Instance();
            break;
        case Message::TURN_UPDATES_OFF_FOR_OBJECT_INSTANCE:
            msg = new M_Turn_Updates_Off_For_Object_Instance();
            break;
        case Message::REQUEST_ATTRIBUTE_OWNERSHIP_DIVESTITURE:
            msg = new M_Request_Attribute_Ownership_Divestiture();
            break;
        case Message::REQUEST_ATTRIBUTE_OWNERSHIP_ASSUMPTION:
            msg = new M_Request_Attribute_Ownership_Assumption();
            break;
        case Message::NEGOTIATED_ATTRIBUTE_OWNERSHIP_DIVESTITURE:
            msg = new M_Negotiated_Attribute_Ownership_Divestiture();
            break;
        case Message::ATTRIBUTE_OWNERSHIP_DIVESTITURE_NOTIFICATION:
            msg = new M_Attribute_Ownership_Divestiture_Notification();
            break;
        case Message::ATTRIBUTE_OWNERSHIP_ACQUISITION_NOTIFICATION:
            msg = new M_Attribute_Ownership_Acquisition_Notification();
            break;
        case Message::REQUEST_ATTRIBUTE_OWNERSHIP_ACQUISITION:
            msg = new M_Request_Attribute_Ownership_Acquisition();
            break;
        case Message::REQUEST_ATTRIBUTE_OWNERSHIP_RELEASE:
            msg = new M_Request_Attribute_Ownership_Release();
            break;
        case Message::QUERY_ATTRIBUTE_OWNERSHIP:
            msg = new M_Query_Attribute_Ownership();
            break;
        case Message::INFORM_ATTRIBUTE_OWNERSHIP:
            msg = new M_Inform_Attribute_Ownership();
            break;
        case Message::IS_ATTRIBUTE_OWNED_BY_FEDERATE:
            msg = new M_Is_Attribute_Owned_By_Federate();
            break;
        case Message::ATTRIBUTE_IS_NOT_OWNED:
            msg = new M_Attribute_Is_Not_Owned();
            break;
        case Message::ATTRIBUTE_OWNED_BY_RTI:
            msg = new M_Attribute_Owned_By_Rti();
            break;
        case Message::ATTRIBUTE_OWNERSHIP_ACQUISITION_IF_AVAILABLE:
            msg = new M_Attribute_Ownership_Acquisition_If_Available();
            break;
        case Message::ATTRIBUTE_OWNERSHIP_UNAVAILABLE:
            msg = new M_Attribute_Ownership_Unavailable();
            break;
        case Message::UNCONDITIONAL_ATTRIBUTE_OWNERSHIP_DIVESTITURE:
            msg = new M_Unconditional_Attribute_Ownership_Divestiture();
            break;
        case Message::ATTRIBUTE_OWNERSHIP_ACQUISITION:
            msg = new M_Attribute_Ownership_Acquisition();
            break;
        case Message::CANCEL_NEGOTIATED_ATTRIBUTE_OWNERSHIP_DIVESTITURE:
            msg = new M_Cancel_Negotiated_Attribute_Ownership_Divestiture();
            break;
        case Message::ATTRIBUTE_OWNERSHIP_RELEASE_RESPONSE:
            msg = new M_Attribute_Ownership_Release_Response();
            break;
        case Message::CANCEL_ATTRIBUTE_OWNERSHIP_ACQUISITION:
            msg = new M_Cancel_Attribute_Ownership_Acquisition();
            break;
        case Message::CONFIRM_ATTRIBUTE_OWNERSHIP_ACQUISITION_CANCELLATION:
            msg = new M_Confirm_Attribute_Ownership_Acquisition_Cancellation();
            break;
        case Message::CHANGE_ATTRIBUTE_ORDER_TYPE:
            msg = new M_Change_Attribute_Order_Type();
            break;
        case Message::CHANGE_INTERACTION_ORDER_TYPE:
            msg = new M_Change_Interaction_Order_Type();
            break;
        case Message::ENABLE_TIME_REGULATION:
            msg = new M_Enable_Time_Regulation();
            break;
        case Message::DISABLE_TIME_REGULATION:
            msg = new M_Disable_Time_Regulation();
            break;
        case Message::ENABLE_TIME_CONSTRAINED:
            msg = new M_Enable_Time_Constrained();
            break;
        case Message::DISABLE_TIME_CONSTRAINED:
            msg = new M_Disable_Time_Constrained();
            break;
        case Message::QUERY_LBTS:
            msg = new M_Query_Lbts();
            break;
        case Message::QUERY_FEDERATE_TIME:
            msg = new M_Query_Federate_Time();
            break;
        case Message::QUERY_MIN_NEXT_EVENT_TIME:
            msg = new M_Query_Min_Next_Event_Time();
            break;
        case Message::MODIFY_LOOKAHEAD:
            msg = new M_Modify_Lookahead();
            break;
        case Message::QUERY_LOOKAHEAD:
            msg = new M_Query_Lookahead();
            break;
        case Message::RETRACT:
            msg = new M_Retract();
            break;
        case Message::REQUEST_RETRACTION:
            msg = new M_Request_Retraction();
            break;
        case Message::TIME_ADVANCE_REQUEST:
            msg = new M_Time_Advance_Request();
            break;
        case Message::TIME_ADVANCE_REQUEST_AVAILABLE:
            msg = new M_Time_Advance_Request_Available();
            break;
        case Message::NEXT_EVENT_REQUEST:
            msg = new M_Next_Event_Request();
            break;
        case Message::NEXT_EVENT_REQUEST_AVAILABLE:
            msg = new M_Next_Event_Request_Available();
            break;
        case Message::FLUSH_QUEUE_REQUEST:
            msg = new M_Flush_Queue_Request();
            break;
        case Message::TIME_ADVANCE_GRANT:
            msg = new M_Time_Advance_Grant();
            break;
        case Message::ENABLE_ASYNCHRONOUS_DELIVERY:
            msg = new M_Enable_Asynchronous_Delivery();
            break;
        case Message::DISABLE_ASYNCHRONOUS_DELIVERY:
            msg = new M_Disable_Asynchronous_Delivery();
            break;
        case Message::TIME_REGULATION_ENABLED:
            msg = new M_Time_Regulation_Enabled();
            break;
        case Message::TIME_CONSTRAINED_ENABLED:
            msg = new M_Time_Constrained_Enabled();
            break;
        case Message::DDM_CREATE_REGION:
            msg = new M_Ddm_Create_Region();
            break;
        case Message::DDM_MODIFY_REGION:
            msg = new M_Ddm_Modify_Region();
            break;
        case Message::DDM_DELETE_REGION:
            msg = new M_Ddm_Delete_Region();
            break;
        case Message::DDM_REGISTER_OBJECT:
            msg = new M_Ddm_Register_Object();
            break;
        case Message::DDM_ASSOCIATE_REGION:
            msg = new M_Ddm_Associate_Region();
            break;
        case Message::DDM_UNASSOCIATE_REGION:
            msg = new M_Ddm_Unassociate_Region();
            break;
        case Message::DDM_SUBSCRIBE_ATTRIBUTES:
            msg = new M_Ddm_Subscribe_Attributes();
            break;
        case Message::DDM_UNSUBSCRIBE_ATTRIBUTES:
            msg = new M_Ddm_Unsubscribe_Attributes();
            break;
        case Message::DDM_SUBSCRIBE_INTERACTION:
            msg = new M_Ddm_Subscribe_Interaction();
            break;
        case Message::DDM_UNSUBSCRIBE_INTERACTION:
            msg = new M_Ddm_Unsubscribe_Interaction();
            break;
        case Message::DDM_REQUEST_UPDATE:
            msg = new M_Ddm_Request_Update();
            break;
        case Message::GET_OBJECT_CLASS_HANDLE:
            msg = new M_Get_Object_Class_Handle();
            break;
        case Message::GET_OBJECT_CLASS_NAME:
            msg = new M_Get_Object_Class_Name();
            break;
        case Message::GET_ATTRIBUTE_HANDLE:
            msg = new M_Get_Attribute_Handle();
            break;
        case Message::GET_ATTRIBUTE_NAME:
            msg = new M_Get_Attribute_Name();
            break;
        case Message::GET_INTERACTION_CLASS_HANDLE:
            msg = new M_Get_Interaction_Class_Handle();
            break;
        case Message::GET_INTERACTION_CLASS_NAME:
            msg = new M_Get_Interaction_Class_Name();
            break;
        case Message::GET_PARAMETER_HANDLE:
            msg = new M_Get_Parameter_Handle();
            break;
        case Message::GET_PARAMETER_NAME:
            msg = new M_Get_Parameter_Name();
            break;
        case Message::GET_OBJECT_INSTANCE_HANDLE:
            msg = new M_Get_Object_Instance_Handle();
            break;
        case Message::GET_OBJECT_INSTANCE_NAME:
            msg = new M_Get_Object_Instance_Name();
            break;
        case Message::GET_SPACE_HANDLE:
            msg = new M_Get_Space_Handle();
            break;
        case Message::GET_SPACE_NAME:
            msg = new M_Get_Space_Name();
            break;
        case Message::GET_DIMENSION_HANDLE:
            msg = new M_Get_Dimension_Handle();
            break;
        case Message::GET_DIMENSION_NAME:
            msg = new M_Get_Dimension_Name();
            break;
        case Message::GET_ATTRIBUTE_SPACE_HANDLE:
            msg = new M_Get_Attribute_Space_Handle();
            break;
        case Message::GET_OBJECT_CLASS:
            msg = new M_Get_Object_Class();
            break;
        case Message::GET_INTERACTION_SPACE_HANDLE:
            msg = new M_Get_Interaction_Space_Handle();
            break;
        case Message::GET_TRANSPORTATION_HANDLE:
            msg = new M_Get_Transportation_Handle();
            break;
        case Message::GET_TRANSPORTATION_NAME:
            msg = new M_Get_Transportation_Name();
            break;
        case Message::GET_ORDERING_HANDLE:
            msg = new M_Get_Ordering_Handle();
            break;
        case Message::GET_ORDERING_NAME:
            msg = new M_Get_Ordering_Name();
            break;
        case Message::ENABLE_CLASS_RELEVANCE_ADVISORY_SWITCH:
            msg = new M_Enable_Class_Relevance_Advisory_Switch();
            break;
        case Message::DISABLE_CLASS_RELEVANCE_ADVISORY_SWITCH:
            msg = new M_Disable_Class_Relevance_Advisory_Switch();
            break;
        case Message::ENABLE_ATTRIBUTE_RELEVANCE_ADVISORY_SWITCH:
            msg = new M_Enable_Attribute_Relevance_Advisory_Switch();
            break;
        case Message::DISABLE_ATTRIBUTE_RELEVANCE_ADVISORY_SWITCH:
            msg = new M_Disable_Attribute_Relevance_Advisory_Switch();
            break;
        case Message::ENABLE_ATTRIBUTE_SCOPE_ADVISORY_SWITCH:
            msg = new M_Enable_Attribute_Scope_Advisory_Switch();
            break;
        case Message::DISABLE_ATTRIBUTE_SCOPE_ADVISORY_SWITCH:
            msg = new M_Disable_Attribute_Scope_Advisory_Switch();
            break;
        case Message::ENABLE_INTERACTION_RELEVANCE_ADVISORY_SWITCH:
            msg = new M_Enable_Interaction_Relevance_Advisory_Switch();
            break;
        case Message::DISABLE_INTERACTION_RELEVANCE_ADVISORY_SWITCH:
            msg = new M_Disable_Interaction_Relevance_Advisory_Switch();
            break;
        case Message::TICK_REQUEST:
            msg = new M_Tick_Request();
            break;
        case Message::TICK_REQUEST_NEXT:
            msg = new M_Tick_Request_Next();
            break;
        case Message::TICK_REQUEST_STOP:
            msg = new M_Tick_Request_Stop();
            break;
        case Message::RESERVE_OBJECT_INSTANCE_NAME:
            msg = new M_Reserve_Object_Instance_Name();
            break;
        case Message::RESERVE_OBJECT_INSTANCE_NAME_SUCCEEDED:
            msg = new M_Reserve_Object_Instance_Name_Succeeded();
            break;
        case Message::RESERVE_OBJECT_INSTANCE_NAME_FAILED:
            msg = new M_Reserve_Object_Instance_Name_Failed();
            break;
        case Message::LAST:
            throw NetworkError("LAST message type should not be used!!");
            break;
    } // end if switch (type)
    return msg;
} /* end of M_Factory::create */

Message* M_Factory::receive(MStreamType stream) throw (NetworkError ,NetworkSignal) { 
    // FIXME This is not thread safe
    static libhla::MessageBuffer msgBuffer;
    Message  msgGen;
    Message* msg;

    // receive generic message 
    msgGen.receive(stream,msgBuffer);
    // create specific message from type 
    msg = M_Factory::create(msgGen.getMessageType());
    msgBuffer.assumeSizeFromReservedBytes();
    msg->deserialize(msgBuffer);
    return msg;
} /* end of M_Factory::receive */ 

} // end of namespace certi 
