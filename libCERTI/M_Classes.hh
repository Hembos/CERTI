// Generated on 2017 August Tue, 01 at 16:48:15 by the CERTI message generator
#ifndef M_CLASSES_HH
#define M_CLASSES_HH
// ****-**** Global System includes ****-****
#include <string>
#include <vector>
// ****-**** Includes coming from native types ****-****
// Message is the base class for
// message exchanged between RTIA and Federate (libRTI) AKA CERTI Message. 
// Every message which is a merge from Message will first include the content 
// of a Message
#include "Message.hh"

#include "certi.hh"

#include "Extent.hh"

#include "SocketUN.hh"
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

// Native types has been defined:
//     - by included headers (see above)
//     - with typedef (see below [if any])

typedef SocketUN* MStreamType;

typedef Message::Type M_Type;
namespace CERTI_Message {
    static const uint32_t versionMajor = 1;
    static const uint32_t versionMinor = 0;

}
// The EventRetraction is not inheriting from base "Message"
// this is a plain message which may be used as field
// in messages merging from "Message". As such
// it won't appear in the generated factory method.
// It's a convenient way to describe a structured native
// message using "combine". 
class CERTI_EXPORT EventRetraction {
public:
    EventRetraction();
    ~EventRetraction() = default;

    void serialize(libhla::MessageBuffer& msgBuffer);
    void deserialize(libhla::MessageBuffer& msgBuffer);

    // Attributes accessors and mutators
    const FederateHandle& getSendingFederate() const
    {
        return sendingFederate;
    }

    void setSendingFederate(const FederateHandle& newSendingFederate)
    {
        sendingFederate = newSendingFederate;
    }

    const uint64_t& getSN() const
    {
        return SN;
    }

    void setSN(const uint64_t& newSN)
    {
        SN = newSN;
    }

    
    friend std::ostream& operator<<(std::ostream& os, const EventRetraction& msg);
protected:
    FederateHandle sendingFederate;
    uint64_t SN;
};

std::ostream& operator<<(std::ostream& os, const EventRetraction& msg);
// Connexion initialization message
class CERTI_EXPORT M_Open_Connexion : public Message {
public:
    M_Open_Connexion();
    virtual ~M_Open_Connexion() = default;

    virtual void serialize(libhla::MessageBuffer& msgBuffer);
    virtual void deserialize(libhla::MessageBuffer& msgBuffer);

    // Attributes accessors and mutators
    const uint32_t& getVersionMajor() const
    {
        return versionMajor;
    }

    void setVersionMajor(const uint32_t& newVersionMajor)
    {
        versionMajor = newVersionMajor;
    }

    const uint32_t& getVersionMinor() const
    {
        return versionMinor;
    }

    void setVersionMinor(const uint32_t& newVersionMinor)
    {
        versionMinor = newVersionMinor;
    }

    using Super = Message;
    
    friend std::ostream& operator<<(std::ostream& os, const M_Open_Connexion& msg);
protected:
    uint32_t versionMajor;
    uint32_t versionMinor;
};

std::ostream& operator<<(std::ostream& os, const M_Open_Connexion& msg);
// Closing connexion message
class CERTI_EXPORT M_Close_Connexion : public Message {
public:
    M_Close_Connexion();
    virtual ~M_Close_Connexion() = default;

protected:
};

std::ostream& operator<<(std::ostream& os, const M_Close_Connexion& msg);

class CERTI_EXPORT M_Create_Federation_Execution : public Message {
public:
    M_Create_Federation_Execution();
    virtual ~M_Create_Federation_Execution() = default;

    virtual void serialize(libhla::MessageBuffer& msgBuffer);
    virtual void deserialize(libhla::MessageBuffer& msgBuffer);

    // Attributes accessors and mutators
    const std::string& getFederationName() const
    {
        return federationName;
    }

    void setFederationName(const std::string& newFederationName)
    {
        federationName = newFederationName;
    }

    const std::string& getFEDid() const
    {
        return FEDid;
    }

    void setFEDid(const std::string& newFEDid)
    {
        FEDid = newFEDid;
    }

    using Super = Message;
    
    friend std::ostream& operator<<(std::ostream& os, const M_Create_Federation_Execution& msg);
protected:
    std::string federationName;// the federation name
    std::string FEDid;// the Federation ID which is in fact a filename
};

std::ostream& operator<<(std::ostream& os, const M_Create_Federation_Execution& msg);

class CERTI_EXPORT M_Destroy_Federation_Execution : public Message {
public:
    M_Destroy_Federation_Execution();
    virtual ~M_Destroy_Federation_Execution() = default;

    virtual void serialize(libhla::MessageBuffer& msgBuffer);
    virtual void deserialize(libhla::MessageBuffer& msgBuffer);

    // Attributes accessors and mutators
    const std::string& getFederationName() const
    {
        return federationName;
    }

    void setFederationName(const std::string& newFederationName)
    {
        federationName = newFederationName;
    }

    using Super = Message;
    
    friend std::ostream& operator<<(std::ostream& os, const M_Destroy_Federation_Execution& msg);
protected:
    std::string federationName;
};

std::ostream& operator<<(std::ostream& os, const M_Destroy_Federation_Execution& msg);

class CERTI_EXPORT M_Join_Federation_Execution : public Message {
public:
    M_Join_Federation_Execution();
    virtual ~M_Join_Federation_Execution() = default;

    virtual void serialize(libhla::MessageBuffer& msgBuffer);
    virtual void deserialize(libhla::MessageBuffer& msgBuffer);

    // Attributes accessors and mutators
    const FederateHandle& getFederate() const
    {
        return federate;
    }

    void setFederate(const FederateHandle& newFederate)
    {
        federate = newFederate;
    }

    const std::string& getFederationName() const
    {
        return federationName;
    }

    void setFederationName(const std::string& newFederationName)
    {
        federationName = newFederationName;
    }

    const std::string& getFederateName() const
    {
        return federateName;
    }

    void setFederateName(const std::string& newFederateName)
    {
        federateName = newFederateName;
    }

    using Super = Message;
    
    friend std::ostream& operator<<(std::ostream& os, const M_Join_Federation_Execution& msg);
protected:
    FederateHandle federate;
    std::string federationName;
    std::string federateName;
};

std::ostream& operator<<(std::ostream& os, const M_Join_Federation_Execution& msg);

class CERTI_EXPORT M_Resign_Federation_Execution : public Message {
public:
    M_Resign_Federation_Execution();
    virtual ~M_Resign_Federation_Execution() = default;

    virtual void serialize(libhla::MessageBuffer& msgBuffer);
    virtual void deserialize(libhla::MessageBuffer& msgBuffer);

    // Attributes accessors and mutators
    const ResignAction& getResignAction() const
    {
        return resignAction;
    }

    void setResignAction(const ResignAction& newResignAction)
    {
        resignAction = newResignAction;
    }

    using Super = Message;
    
    friend std::ostream& operator<<(std::ostream& os, const M_Resign_Federation_Execution& msg);
protected:
    ResignAction resignAction;
};

std::ostream& operator<<(std::ostream& os, const M_Resign_Federation_Execution& msg);

class CERTI_EXPORT M_Register_Federation_Synchronization_Point : public Message {
public:
    M_Register_Federation_Synchronization_Point();
    virtual ~M_Register_Federation_Synchronization_Point() = default;

    virtual void serialize(libhla::MessageBuffer& msgBuffer);
    virtual void deserialize(libhla::MessageBuffer& msgBuffer);

    // Attributes accessors and mutators
    uint32_t getFederateSetSize() const
    {
        return federateSet.size();
    }

    void setFederateSetSize(uint32_t num)
    {
        federateSet.resize(num);
    }

    const std::vector<FederateHandle>& getFederateSet() const
    {
        return federateSet;
    }

    const FederateHandle& getFederateSet(uint32_t rank) const
    {
        return federateSet[rank];
    }

    FederateHandle& getFederateSet(uint32_t rank)
    {
        return federateSet[rank];
    }

    void setFederateSet(const FederateHandle& newFederateSet, uint32_t rank)
    {
        federateSet[rank] = newFederateSet;
    }

    void removeFederateSet(uint32_t rank)
    {
        federateSet.erase(federateSet.begin() + rank);
    }

    using Super = Message;
    
    friend std::ostream& operator<<(std::ostream& os, const M_Register_Federation_Synchronization_Point& msg);
protected:
    std::vector<FederateHandle> federateSet;// the set of Federate which will participate to this sync point.
};

std::ostream& operator<<(std::ostream& os, const M_Register_Federation_Synchronization_Point& msg);

class CERTI_EXPORT M_Synchronization_Point_Registration_Failed : public Message {
public:
    M_Synchronization_Point_Registration_Failed();
    virtual ~M_Synchronization_Point_Registration_Failed() = default;

protected:
};

std::ostream& operator<<(std::ostream& os, const M_Synchronization_Point_Registration_Failed& msg);

class CERTI_EXPORT M_Synchronization_Point_Registration_Succeeded : public Message {
public:
    M_Synchronization_Point_Registration_Succeeded();
    virtual ~M_Synchronization_Point_Registration_Succeeded() = default;

protected:
};

std::ostream& operator<<(std::ostream& os, const M_Synchronization_Point_Registration_Succeeded& msg);

class CERTI_EXPORT M_Announce_Synchronization_Point : public Message {
public:
    M_Announce_Synchronization_Point();
    virtual ~M_Announce_Synchronization_Point() = default;

protected:
};

std::ostream& operator<<(std::ostream& os, const M_Announce_Synchronization_Point& msg);

class CERTI_EXPORT M_Synchronization_Point_Achieved : public Message {
public:
    M_Synchronization_Point_Achieved();
    virtual ~M_Synchronization_Point_Achieved() = default;

protected:
};

std::ostream& operator<<(std::ostream& os, const M_Synchronization_Point_Achieved& msg);

class CERTI_EXPORT M_Federation_Synchronized : public Message {
public:
    M_Federation_Synchronized();
    virtual ~M_Federation_Synchronized() = default;

protected:
};

std::ostream& operator<<(std::ostream& os, const M_Federation_Synchronized& msg);

class CERTI_EXPORT M_Request_Federation_Save : public Message {
public:
    M_Request_Federation_Save();
    virtual ~M_Request_Federation_Save() = default;

protected:
};

std::ostream& operator<<(std::ostream& os, const M_Request_Federation_Save& msg);

class CERTI_EXPORT M_Initiate_Federate_Save : public Message {
public:
    M_Initiate_Federate_Save();
    virtual ~M_Initiate_Federate_Save() = default;

protected:
};

std::ostream& operator<<(std::ostream& os, const M_Initiate_Federate_Save& msg);

class CERTI_EXPORT M_Federate_Save_Begun : public Message {
public:
    M_Federate_Save_Begun();
    virtual ~M_Federate_Save_Begun() = default;

protected:
};

std::ostream& operator<<(std::ostream& os, const M_Federate_Save_Begun& msg);

class CERTI_EXPORT M_Federate_Save_Complete : public Message {
public:
    M_Federate_Save_Complete();
    virtual ~M_Federate_Save_Complete() = default;

protected:
};

std::ostream& operator<<(std::ostream& os, const M_Federate_Save_Complete& msg);

class CERTI_EXPORT M_Federate_Save_Not_Complete : public Message {
public:
    M_Federate_Save_Not_Complete();
    virtual ~M_Federate_Save_Not_Complete() = default;

protected:
};

std::ostream& operator<<(std::ostream& os, const M_Federate_Save_Not_Complete& msg);

class CERTI_EXPORT M_Federation_Saved : public Message {
public:
    M_Federation_Saved();
    virtual ~M_Federation_Saved() = default;

protected:
};

std::ostream& operator<<(std::ostream& os, const M_Federation_Saved& msg);

class CERTI_EXPORT M_Federation_Not_Saved : public Message {
public:
    M_Federation_Not_Saved();
    virtual ~M_Federation_Not_Saved() = default;

protected:
};

std::ostream& operator<<(std::ostream& os, const M_Federation_Not_Saved& msg);

class CERTI_EXPORT M_Request_Federation_Restore : public Message {
public:
    M_Request_Federation_Restore();
    virtual ~M_Request_Federation_Restore() = default;

protected:
};

std::ostream& operator<<(std::ostream& os, const M_Request_Federation_Restore& msg);

class CERTI_EXPORT M_Request_Federation_Restore_Failed : public Message {
public:
    M_Request_Federation_Restore_Failed();
    virtual ~M_Request_Federation_Restore_Failed() = default;

    virtual void serialize(libhla::MessageBuffer& msgBuffer);
    virtual void deserialize(libhla::MessageBuffer& msgBuffer);

    // Attributes accessors and mutators
    const std::string& getReason() const
    {
        return reason;
    }

    void setReason(const std::string& newReason)
    {
        reason = newReason;
    }

    using Super = Message;
    
    friend std::ostream& operator<<(std::ostream& os, const M_Request_Federation_Restore_Failed& msg);
protected:
    std::string reason;
};

std::ostream& operator<<(std::ostream& os, const M_Request_Federation_Restore_Failed& msg);

class CERTI_EXPORT M_Request_Federation_Restore_Succeeded : public Message {
public:
    M_Request_Federation_Restore_Succeeded();
    virtual ~M_Request_Federation_Restore_Succeeded() = default;

protected:
};

std::ostream& operator<<(std::ostream& os, const M_Request_Federation_Restore_Succeeded& msg);

class CERTI_EXPORT M_Initiate_Federate_Restore : public Message {
public:
    M_Initiate_Federate_Restore();
    virtual ~M_Initiate_Federate_Restore() = default;

    virtual void serialize(libhla::MessageBuffer& msgBuffer);
    virtual void deserialize(libhla::MessageBuffer& msgBuffer);

    // Attributes accessors and mutators
    const FederateHandle& getFederate() const
    {
        return federate;
    }

    void setFederate(const FederateHandle& newFederate)
    {
        federate = newFederate;
    }

    using Super = Message;
    
    friend std::ostream& operator<<(std::ostream& os, const M_Initiate_Federate_Restore& msg);
protected:
    FederateHandle federate;
};

std::ostream& operator<<(std::ostream& os, const M_Initiate_Federate_Restore& msg);

class CERTI_EXPORT M_Federate_Restore_Complete : public Message {
public:
    M_Federate_Restore_Complete();
    virtual ~M_Federate_Restore_Complete() = default;

protected:
};

std::ostream& operator<<(std::ostream& os, const M_Federate_Restore_Complete& msg);

class CERTI_EXPORT M_Federate_Restore_Not_Complete : public Message {
public:
    M_Federate_Restore_Not_Complete();
    virtual ~M_Federate_Restore_Not_Complete() = default;

protected:
};

std::ostream& operator<<(std::ostream& os, const M_Federate_Restore_Not_Complete& msg);

class CERTI_EXPORT M_Federation_Restored : public Message {
public:
    M_Federation_Restored();
    virtual ~M_Federation_Restored() = default;

protected:
};

std::ostream& operator<<(std::ostream& os, const M_Federation_Restored& msg);

class CERTI_EXPORT M_Federation_Not_Restored : public Message {
public:
    M_Federation_Not_Restored();
    virtual ~M_Federation_Not_Restored() = default;

protected:
};

std::ostream& operator<<(std::ostream& os, const M_Federation_Not_Restored& msg);

class CERTI_EXPORT M_Federation_Restore_Begun : public Message {
public:
    M_Federation_Restore_Begun();
    virtual ~M_Federation_Restore_Begun() = default;

protected:
};

std::ostream& operator<<(std::ostream& os, const M_Federation_Restore_Begun& msg);
// Declaration
class CERTI_EXPORT M_Publish_Object_Class : public Message {
public:
    M_Publish_Object_Class();
    virtual ~M_Publish_Object_Class() = default;

    virtual void serialize(libhla::MessageBuffer& msgBuffer);
    virtual void deserialize(libhla::MessageBuffer& msgBuffer);

    // Attributes accessors and mutators
    const ObjectClassHandle& getObjectClass() const
    {
        return objectClass;
    }

    void setObjectClass(const ObjectClassHandle& newObjectClass)
    {
        objectClass = newObjectClass;
    }

    uint32_t getAttributesSize() const
    {
        return attributes.size();
    }

    void setAttributesSize(uint32_t num)
    {
        attributes.resize(num);
    }

    const std::vector<AttributeHandle>& getAttributes() const
    {
        return attributes;
    }

    const AttributeHandle& getAttributes(uint32_t rank) const
    {
        return attributes[rank];
    }

    AttributeHandle& getAttributes(uint32_t rank)
    {
        return attributes[rank];
    }

    void setAttributes(const AttributeHandle& newAttributes, uint32_t rank)
    {
        attributes[rank] = newAttributes;
    }

    void removeAttributes(uint32_t rank)
    {
        attributes.erase(attributes.begin() + rank);
    }

    using Super = Message;
    
    friend std::ostream& operator<<(std::ostream& os, const M_Publish_Object_Class& msg);
protected:
    ObjectClassHandle objectClass;
    std::vector<AttributeHandle> attributes;
};

std::ostream& operator<<(std::ostream& os, const M_Publish_Object_Class& msg);

class CERTI_EXPORT M_Unpublish_Object_Class : public Message {
public:
    M_Unpublish_Object_Class();
    virtual ~M_Unpublish_Object_Class() = default;

    virtual void serialize(libhla::MessageBuffer& msgBuffer);
    virtual void deserialize(libhla::MessageBuffer& msgBuffer);

    // Attributes accessors and mutators
    const ObjectClassHandle& getObjectClass() const
    {
        return objectClass;
    }

    void setObjectClass(const ObjectClassHandle& newObjectClass)
    {
        objectClass = newObjectClass;
    }

    using Super = Message;
    
    friend std::ostream& operator<<(std::ostream& os, const M_Unpublish_Object_Class& msg);
protected:
    ObjectClassHandle objectClass;
};

std::ostream& operator<<(std::ostream& os, const M_Unpublish_Object_Class& msg);

class CERTI_EXPORT M_Publish_Interaction_Class : public Message {
public:
    M_Publish_Interaction_Class();
    virtual ~M_Publish_Interaction_Class() = default;

    virtual void serialize(libhla::MessageBuffer& msgBuffer);
    virtual void deserialize(libhla::MessageBuffer& msgBuffer);

    // Attributes accessors and mutators
    const InteractionClassHandle& getInteractionClass() const
    {
        return interactionClass;
    }

    void setInteractionClass(const InteractionClassHandle& newInteractionClass)
    {
        interactionClass = newInteractionClass;
    }

    using Super = Message;
    
    friend std::ostream& operator<<(std::ostream& os, const M_Publish_Interaction_Class& msg);
protected:
    InteractionClassHandle interactionClass;
};

std::ostream& operator<<(std::ostream& os, const M_Publish_Interaction_Class& msg);

class CERTI_EXPORT M_Unpublish_Interaction_Class : public Message {
public:
    M_Unpublish_Interaction_Class();
    virtual ~M_Unpublish_Interaction_Class() = default;

    virtual void serialize(libhla::MessageBuffer& msgBuffer);
    virtual void deserialize(libhla::MessageBuffer& msgBuffer);

    // Attributes accessors and mutators
    const InteractionClassHandle& getInteractionClass() const
    {
        return interactionClass;
    }

    void setInteractionClass(const InteractionClassHandle& newInteractionClass)
    {
        interactionClass = newInteractionClass;
    }

    using Super = Message;
    
    friend std::ostream& operator<<(std::ostream& os, const M_Unpublish_Interaction_Class& msg);
protected:
    InteractionClassHandle interactionClass;
};

std::ostream& operator<<(std::ostream& os, const M_Unpublish_Interaction_Class& msg);

class CERTI_EXPORT M_Subscribe_Object_Class_Attributes : public Message {
public:
    M_Subscribe_Object_Class_Attributes();
    virtual ~M_Subscribe_Object_Class_Attributes() = default;

    virtual void serialize(libhla::MessageBuffer& msgBuffer);
    virtual void deserialize(libhla::MessageBuffer& msgBuffer);

    // Attributes accessors and mutators
    const ObjectClassHandle& getObjectClass() const
    {
        return objectClass;
    }

    void setObjectClass(const ObjectClassHandle& newObjectClass)
    {
        objectClass = newObjectClass;
    }

    uint32_t getAttributesSize() const
    {
        return attributes.size();
    }

    void setAttributesSize(uint32_t num)
    {
        attributes.resize(num);
    }

    const std::vector<AttributeHandle>& getAttributes() const
    {
        return attributes;
    }

    const AttributeHandle& getAttributes(uint32_t rank) const
    {
        return attributes[rank];
    }

    AttributeHandle& getAttributes(uint32_t rank)
    {
        return attributes[rank];
    }

    void setAttributes(const AttributeHandle& newAttributes, uint32_t rank)
    {
        attributes[rank] = newAttributes;
    }

    void removeAttributes(uint32_t rank)
    {
        attributes.erase(attributes.begin() + rank);
    }

    const bool& getActive() const
    {
        return active;
    }

    void setActive(const bool& newActive)
    {
        active = newActive;
    }

    using Super = Message;
    
    friend std::ostream& operator<<(std::ostream& os, const M_Subscribe_Object_Class_Attributes& msg);
protected:
    ObjectClassHandle objectClass;
    std::vector<AttributeHandle> attributes;
    bool active;
};

std::ostream& operator<<(std::ostream& os, const M_Subscribe_Object_Class_Attributes& msg);

class CERTI_EXPORT M_Unsubscribe_Object_Class : public Message {
public:
    M_Unsubscribe_Object_Class();
    virtual ~M_Unsubscribe_Object_Class() = default;

    virtual void serialize(libhla::MessageBuffer& msgBuffer);
    virtual void deserialize(libhla::MessageBuffer& msgBuffer);

    // Attributes accessors and mutators
    const ObjectClassHandle& getObjectClass() const
    {
        return objectClass;
    }

    void setObjectClass(const ObjectClassHandle& newObjectClass)
    {
        objectClass = newObjectClass;
    }

    using Super = Message;
    
    friend std::ostream& operator<<(std::ostream& os, const M_Unsubscribe_Object_Class& msg);
protected:
    ObjectClassHandle objectClass;
};

std::ostream& operator<<(std::ostream& os, const M_Unsubscribe_Object_Class& msg);

class CERTI_EXPORT M_Subscribe_Interaction_Class : public Message {
public:
    M_Subscribe_Interaction_Class();
    virtual ~M_Subscribe_Interaction_Class() = default;

    virtual void serialize(libhla::MessageBuffer& msgBuffer);
    virtual void deserialize(libhla::MessageBuffer& msgBuffer);

    // Attributes accessors and mutators
    const InteractionClassHandle& getInteractionClass() const
    {
        return interactionClass;
    }

    void setInteractionClass(const InteractionClassHandle& newInteractionClass)
    {
        interactionClass = newInteractionClass;
    }

    using Super = Message;
    
    friend std::ostream& operator<<(std::ostream& os, const M_Subscribe_Interaction_Class& msg);
protected:
    InteractionClassHandle interactionClass;
};

std::ostream& operator<<(std::ostream& os, const M_Subscribe_Interaction_Class& msg);

class CERTI_EXPORT M_Unsubscribe_Interaction_Class : public Message {
public:
    M_Unsubscribe_Interaction_Class();
    virtual ~M_Unsubscribe_Interaction_Class() = default;

    virtual void serialize(libhla::MessageBuffer& msgBuffer);
    virtual void deserialize(libhla::MessageBuffer& msgBuffer);

    // Attributes accessors and mutators
    const InteractionClassHandle& getInteractionClass() const
    {
        return interactionClass;
    }

    void setInteractionClass(const InteractionClassHandle& newInteractionClass)
    {
        interactionClass = newInteractionClass;
    }

    using Super = Message;
    
    friend std::ostream& operator<<(std::ostream& os, const M_Unsubscribe_Interaction_Class& msg);
protected:
    InteractionClassHandle interactionClass;
};

std::ostream& operator<<(std::ostream& os, const M_Unsubscribe_Interaction_Class& msg);

class CERTI_EXPORT M_Start_Registration_For_Object_Class : public Message {
public:
    M_Start_Registration_For_Object_Class();
    virtual ~M_Start_Registration_For_Object_Class() = default;

    virtual void serialize(libhla::MessageBuffer& msgBuffer);
    virtual void deserialize(libhla::MessageBuffer& msgBuffer);

    // Attributes accessors and mutators
    const ObjectClassHandle& getObjectClass() const
    {
        return objectClass;
    }

    void setObjectClass(const ObjectClassHandle& newObjectClass)
    {
        objectClass = newObjectClass;
    }

    using Super = Message;
    
    friend std::ostream& operator<<(std::ostream& os, const M_Start_Registration_For_Object_Class& msg);
protected:
    ObjectClassHandle objectClass;
};

std::ostream& operator<<(std::ostream& os, const M_Start_Registration_For_Object_Class& msg);

class CERTI_EXPORT M_Stop_Registration_For_Object_Class : public Message {
public:
    M_Stop_Registration_For_Object_Class();
    virtual ~M_Stop_Registration_For_Object_Class() = default;

    virtual void serialize(libhla::MessageBuffer& msgBuffer);
    virtual void deserialize(libhla::MessageBuffer& msgBuffer);

    // Attributes accessors and mutators
    const ObjectClassHandle& getObjectClass() const
    {
        return objectClass;
    }

    void setObjectClass(const ObjectClassHandle& newObjectClass)
    {
        objectClass = newObjectClass;
    }

    using Super = Message;
    
    friend std::ostream& operator<<(std::ostream& os, const M_Stop_Registration_For_Object_Class& msg);
protected:
    ObjectClassHandle objectClass;
};

std::ostream& operator<<(std::ostream& os, const M_Stop_Registration_For_Object_Class& msg);

class CERTI_EXPORT M_Turn_Interactions_On : public Message {
public:
    M_Turn_Interactions_On();
    virtual ~M_Turn_Interactions_On() = default;

    virtual void serialize(libhla::MessageBuffer& msgBuffer);
    virtual void deserialize(libhla::MessageBuffer& msgBuffer);

    // Attributes accessors and mutators
    const InteractionClassHandle& getInteractionClass() const
    {
        return interactionClass;
    }

    void setInteractionClass(const InteractionClassHandle& newInteractionClass)
    {
        interactionClass = newInteractionClass;
    }

    using Super = Message;
    
    friend std::ostream& operator<<(std::ostream& os, const M_Turn_Interactions_On& msg);
protected:
    InteractionClassHandle interactionClass;
};

std::ostream& operator<<(std::ostream& os, const M_Turn_Interactions_On& msg);

class CERTI_EXPORT M_Turn_Interactions_Off : public Message {
public:
    M_Turn_Interactions_Off();
    virtual ~M_Turn_Interactions_Off() = default;

    virtual void serialize(libhla::MessageBuffer& msgBuffer);
    virtual void deserialize(libhla::MessageBuffer& msgBuffer);

    // Attributes accessors and mutators
    const InteractionClassHandle& getInteractionClass() const
    {
        return interactionClass;
    }

    void setInteractionClass(const InteractionClassHandle& newInteractionClass)
    {
        interactionClass = newInteractionClass;
    }

    using Super = Message;
    
    friend std::ostream& operator<<(std::ostream& os, const M_Turn_Interactions_Off& msg);
protected:
    InteractionClassHandle interactionClass;
};

std::ostream& operator<<(std::ostream& os, const M_Turn_Interactions_Off& msg);
// Object
class CERTI_EXPORT M_Register_Object_Instance : public Message {
public:
    M_Register_Object_Instance();
    virtual ~M_Register_Object_Instance() = default;

    virtual void serialize(libhla::MessageBuffer& msgBuffer);
    virtual void deserialize(libhla::MessageBuffer& msgBuffer);

    // Attributes accessors and mutators
    const ObjectClassHandle& getObjectClass() const
    {
        return objectClass;
    }

    void setObjectClass(const ObjectClassHandle& newObjectClass)
    {
        objectClass = newObjectClass;
    }

    const ObjectHandle& getObject() const
    {
        return object;
    }

    void setObject(const ObjectHandle& newObject)
    {
        object = newObject;
    }

    const std::string& getObjectName() const
    {
        return objectName;
    }

    void setObjectName(const std::string& newObjectName)
    {
        _hasObjectName = true;
        objectName = newObjectName;
    }

    bool hasObjectName() const
    {
        return _hasObjectName;
    }

    using Super = Message;
    
    friend std::ostream& operator<<(std::ostream& os, const M_Register_Object_Instance& msg);
protected:
    ObjectClassHandle objectClass;
    ObjectHandle object;
    std::string objectName;
    bool _hasObjectName;
};

std::ostream& operator<<(std::ostream& os, const M_Register_Object_Instance& msg);

class CERTI_EXPORT M_Update_Attribute_Values : public Message {
public:
    M_Update_Attribute_Values();
    virtual ~M_Update_Attribute_Values() = default;

    virtual void serialize(libhla::MessageBuffer& msgBuffer);
    virtual void deserialize(libhla::MessageBuffer& msgBuffer);

    // Attributes accessors and mutators
    const ObjectClassHandle& getObjectClass() const
    {
        return objectClass;
    }

    void setObjectClass(const ObjectClassHandle& newObjectClass)
    {
        objectClass = newObjectClass;
    }

    const ObjectHandle& getObject() const
    {
        return object;
    }

    void setObject(const ObjectHandle& newObject)
    {
        object = newObject;
    }

    uint32_t getAttributesSize() const
    {
        return attributes.size();
    }

    void setAttributesSize(uint32_t num)
    {
        attributes.resize(num);
    }

    const std::vector<AttributeHandle>& getAttributes() const
    {
        return attributes;
    }

    const AttributeHandle& getAttributes(uint32_t rank) const
    {
        return attributes[rank];
    }

    AttributeHandle& getAttributes(uint32_t rank)
    {
        return attributes[rank];
    }

    void setAttributes(const AttributeHandle& newAttributes, uint32_t rank)
    {
        attributes[rank] = newAttributes;
    }

    void removeAttributes(uint32_t rank)
    {
        attributes.erase(attributes.begin() + rank);
    }

    uint32_t getValuesSize() const
    {
        return values.size();
    }

    void setValuesSize(uint32_t num)
    {
        values.resize(num);
    }

    const std::vector<AttributeValue_t>& getValues() const
    {
        return values;
    }

    const AttributeValue_t& getValues(uint32_t rank) const
    {
        return values[rank];
    }

    AttributeValue_t& getValues(uint32_t rank)
    {
        return values[rank];
    }

    void setValues(const AttributeValue_t& newValues, uint32_t rank)
    {
        values[rank] = newValues;
    }

    void removeValues(uint32_t rank)
    {
        values.erase(values.begin() + rank);
    }

    const EventRetraction& getEventRetraction() const
    {
        return eventRetraction;
    }

    void setEventRetraction(const EventRetraction& newEventRetraction)
    {
        _hasEventRetraction = true;
        eventRetraction = newEventRetraction;
    }

    bool hasEventRetraction() const
    {
        return _hasEventRetraction;
    }

    using Super = Message;
    
    friend std::ostream& operator<<(std::ostream& os, const M_Update_Attribute_Values& msg);
protected:
    ObjectClassHandle objectClass;
    ObjectHandle object;
    std::vector<AttributeHandle> attributes;
    std::vector<AttributeValue_t> values;
    EventRetraction eventRetraction;
    bool _hasEventRetraction;
};

std::ostream& operator<<(std::ostream& os, const M_Update_Attribute_Values& msg);

class CERTI_EXPORT M_Discover_Object_Instance : public Message {
public:
    M_Discover_Object_Instance();
    virtual ~M_Discover_Object_Instance() = default;

    virtual void serialize(libhla::MessageBuffer& msgBuffer);
    virtual void deserialize(libhla::MessageBuffer& msgBuffer);

    // Attributes accessors and mutators
    const ObjectClassHandle& getObjectClass() const
    {
        return objectClass;
    }

    void setObjectClass(const ObjectClassHandle& newObjectClass)
    {
        objectClass = newObjectClass;
    }

    const ObjectHandle& getObject() const
    {
        return object;
    }

    void setObject(const ObjectHandle& newObject)
    {
        object = newObject;
    }

    const std::string& getObjectName() const
    {
        return objectName;
    }

    void setObjectName(const std::string& newObjectName)
    {
        objectName = newObjectName;
    }

    const EventRetraction& getEventRetraction() const
    {
        return eventRetraction;
    }

    void setEventRetraction(const EventRetraction& newEventRetraction)
    {
        _hasEventRetraction = true;
        eventRetraction = newEventRetraction;
    }

    bool hasEventRetraction() const
    {
        return _hasEventRetraction;
    }

    using Super = Message;
    
    friend std::ostream& operator<<(std::ostream& os, const M_Discover_Object_Instance& msg);
protected:
    ObjectClassHandle objectClass;
    ObjectHandle object;
    std::string objectName;
    EventRetraction eventRetraction;
    bool _hasEventRetraction;
};

std::ostream& operator<<(std::ostream& os, const M_Discover_Object_Instance& msg);

class CERTI_EXPORT M_Reflect_Attribute_Values : public Message {
public:
    M_Reflect_Attribute_Values();
    virtual ~M_Reflect_Attribute_Values() = default;

    virtual void serialize(libhla::MessageBuffer& msgBuffer);
    virtual void deserialize(libhla::MessageBuffer& msgBuffer);

    // Attributes accessors and mutators
    const ObjectClassHandle& getObjectClass() const
    {
        return objectClass;
    }

    void setObjectClass(const ObjectClassHandle& newObjectClass)
    {
        objectClass = newObjectClass;
    }

    const ObjectHandle& getObject() const
    {
        return object;
    }

    void setObject(const ObjectHandle& newObject)
    {
        object = newObject;
    }

    uint32_t getAttributesSize() const
    {
        return attributes.size();
    }

    void setAttributesSize(uint32_t num)
    {
        attributes.resize(num);
    }

    const std::vector<AttributeHandle>& getAttributes() const
    {
        return attributes;
    }

    const AttributeHandle& getAttributes(uint32_t rank) const
    {
        return attributes[rank];
    }

    AttributeHandle& getAttributes(uint32_t rank)
    {
        return attributes[rank];
    }

    void setAttributes(const AttributeHandle& newAttributes, uint32_t rank)
    {
        attributes[rank] = newAttributes;
    }

    void removeAttributes(uint32_t rank)
    {
        attributes.erase(attributes.begin() + rank);
    }

    uint32_t getValuesSize() const
    {
        return values.size();
    }

    void setValuesSize(uint32_t num)
    {
        values.resize(num);
    }

    const std::vector<AttributeValue_t>& getValues() const
    {
        return values;
    }

    const AttributeValue_t& getValues(uint32_t rank) const
    {
        return values[rank];
    }

    AttributeValue_t& getValues(uint32_t rank)
    {
        return values[rank];
    }

    void setValues(const AttributeValue_t& newValues, uint32_t rank)
    {
        values[rank] = newValues;
    }

    void removeValues(uint32_t rank)
    {
        values.erase(values.begin() + rank);
    }

    const EventRetraction& getEventRetraction() const
    {
        return eventRetraction;
    }

    void setEventRetraction(const EventRetraction& newEventRetraction)
    {
        _hasEventRetraction = true;
        eventRetraction = newEventRetraction;
    }

    bool hasEventRetraction() const
    {
        return _hasEventRetraction;
    }

    using Super = Message;
    
    friend std::ostream& operator<<(std::ostream& os, const M_Reflect_Attribute_Values& msg);
protected:
    ObjectClassHandle objectClass;
    ObjectHandle object;
    std::vector<AttributeHandle> attributes;
    std::vector<AttributeValue_t> values;
    EventRetraction eventRetraction;
    bool _hasEventRetraction;
};

std::ostream& operator<<(std::ostream& os, const M_Reflect_Attribute_Values& msg);

class CERTI_EXPORT M_Send_Interaction : public Message {
public:
    M_Send_Interaction();
    virtual ~M_Send_Interaction() = default;

    virtual void serialize(libhla::MessageBuffer& msgBuffer);
    virtual void deserialize(libhla::MessageBuffer& msgBuffer);

    // Attributes accessors and mutators
    const InteractionClassHandle& getInteractionClass() const
    {
        return interactionClass;
    }

    void setInteractionClass(const InteractionClassHandle& newInteractionClass)
    {
        interactionClass = newInteractionClass;
    }

    uint32_t getParametersSize() const
    {
        return parameters.size();
    }

    void setParametersSize(uint32_t num)
    {
        parameters.resize(num);
    }

    const std::vector<ParameterHandle>& getParameters() const
    {
        return parameters;
    }

    const ParameterHandle& getParameters(uint32_t rank) const
    {
        return parameters[rank];
    }

    ParameterHandle& getParameters(uint32_t rank)
    {
        return parameters[rank];
    }

    void setParameters(const ParameterHandle& newParameters, uint32_t rank)
    {
        parameters[rank] = newParameters;
    }

    void removeParameters(uint32_t rank)
    {
        parameters.erase(parameters.begin() + rank);
    }

    uint32_t getValuesSize() const
    {
        return values.size();
    }

    void setValuesSize(uint32_t num)
    {
        values.resize(num);
    }

    const std::vector<ParameterValue_t>& getValues() const
    {
        return values;
    }

    const ParameterValue_t& getValues(uint32_t rank) const
    {
        return values[rank];
    }

    ParameterValue_t& getValues(uint32_t rank)
    {
        return values[rank];
    }

    void setValues(const ParameterValue_t& newValues, uint32_t rank)
    {
        values[rank] = newValues;
    }

    void removeValues(uint32_t rank)
    {
        values.erase(values.begin() + rank);
    }

    const RegionHandle& getRegion() const
    {
        return region;
    }

    void setRegion(const RegionHandle& newRegion)
    {
        region = newRegion;
    }

    const EventRetraction& getEventRetraction() const
    {
        return eventRetraction;
    }

    void setEventRetraction(const EventRetraction& newEventRetraction)
    {
        _hasEventRetraction = true;
        eventRetraction = newEventRetraction;
    }

    bool hasEventRetraction() const
    {
        return _hasEventRetraction;
    }

    using Super = Message;
    
    friend std::ostream& operator<<(std::ostream& os, const M_Send_Interaction& msg);
protected:
    InteractionClassHandle interactionClass;
    std::vector<ParameterHandle> parameters;
    std::vector<ParameterValue_t> values;
    RegionHandle region;
    EventRetraction eventRetraction;
    bool _hasEventRetraction;
};

std::ostream& operator<<(std::ostream& os, const M_Send_Interaction& msg);

class CERTI_EXPORT M_Receive_Interaction : public Message {
public:
    M_Receive_Interaction();
    virtual ~M_Receive_Interaction() = default;

    virtual void serialize(libhla::MessageBuffer& msgBuffer);
    virtual void deserialize(libhla::MessageBuffer& msgBuffer);

    // Attributes accessors and mutators
    const InteractionClassHandle& getInteractionClass() const
    {
        return interactionClass;
    }

    void setInteractionClass(const InteractionClassHandle& newInteractionClass)
    {
        interactionClass = newInteractionClass;
    }

    uint32_t getParametersSize() const
    {
        return parameters.size();
    }

    void setParametersSize(uint32_t num)
    {
        parameters.resize(num);
    }

    const std::vector<ParameterHandle>& getParameters() const
    {
        return parameters;
    }

    const ParameterHandle& getParameters(uint32_t rank) const
    {
        return parameters[rank];
    }

    ParameterHandle& getParameters(uint32_t rank)
    {
        return parameters[rank];
    }

    void setParameters(const ParameterHandle& newParameters, uint32_t rank)
    {
        parameters[rank] = newParameters;
    }

    void removeParameters(uint32_t rank)
    {
        parameters.erase(parameters.begin() + rank);
    }

    uint32_t getValuesSize() const
    {
        return values.size();
    }

    void setValuesSize(uint32_t num)
    {
        values.resize(num);
    }

    const std::vector<ParameterValue_t>& getValues() const
    {
        return values;
    }

    const ParameterValue_t& getValues(uint32_t rank) const
    {
        return values[rank];
    }

    ParameterValue_t& getValues(uint32_t rank)
    {
        return values[rank];
    }

    void setValues(const ParameterValue_t& newValues, uint32_t rank)
    {
        values[rank] = newValues;
    }

    void removeValues(uint32_t rank)
    {
        values.erase(values.begin() + rank);
    }

    const RegionHandle& getRegion() const
    {
        return region;
    }

    void setRegion(const RegionHandle& newRegion)
    {
        region = newRegion;
    }

    const EventRetraction& getEventRetraction() const
    {
        return eventRetraction;
    }

    void setEventRetraction(const EventRetraction& newEventRetraction)
    {
        _hasEventRetraction = true;
        eventRetraction = newEventRetraction;
    }

    bool hasEventRetraction() const
    {
        return _hasEventRetraction;
    }

    using Super = Message;
    
    friend std::ostream& operator<<(std::ostream& os, const M_Receive_Interaction& msg);
protected:
    InteractionClassHandle interactionClass;
    std::vector<ParameterHandle> parameters;
    std::vector<ParameterValue_t> values;
    RegionHandle region;
    EventRetraction eventRetraction;
    bool _hasEventRetraction;
};

std::ostream& operator<<(std::ostream& os, const M_Receive_Interaction& msg);

class CERTI_EXPORT M_Delete_Object_Instance : public Message {
public:
    M_Delete_Object_Instance();
    virtual ~M_Delete_Object_Instance() = default;

    virtual void serialize(libhla::MessageBuffer& msgBuffer);
    virtual void deserialize(libhla::MessageBuffer& msgBuffer);

    // Attributes accessors and mutators
    const ObjectClassHandle& getObjectClass() const
    {
        return objectClass;
    }

    void setObjectClass(const ObjectClassHandle& newObjectClass)
    {
        objectClass = newObjectClass;
    }

    const ObjectHandle& getObject() const
    {
        return object;
    }

    void setObject(const ObjectHandle& newObject)
    {
        object = newObject;
    }

    const std::string& getObjectName() const
    {
        return objectName;
    }

    void setObjectName(const std::string& newObjectName)
    {
        objectName = newObjectName;
    }

    const EventRetraction& getEventRetraction() const
    {
        return eventRetraction;
    }

    void setEventRetraction(const EventRetraction& newEventRetraction)
    {
        _hasEventRetraction = true;
        eventRetraction = newEventRetraction;
    }

    bool hasEventRetraction() const
    {
        return _hasEventRetraction;
    }

    using Super = Message;
    
    friend std::ostream& operator<<(std::ostream& os, const M_Delete_Object_Instance& msg);
protected:
    ObjectClassHandle objectClass;
    ObjectHandle object;
    std::string objectName;
    EventRetraction eventRetraction;
    bool _hasEventRetraction;
};

std::ostream& operator<<(std::ostream& os, const M_Delete_Object_Instance& msg);

class CERTI_EXPORT M_Local_Delete_Object_Instance : public Message {
public:
    M_Local_Delete_Object_Instance();
    virtual ~M_Local_Delete_Object_Instance() = default;

    virtual void serialize(libhla::MessageBuffer& msgBuffer);
    virtual void deserialize(libhla::MessageBuffer& msgBuffer);

    // Attributes accessors and mutators
    const ObjectHandle& getObject() const
    {
        return object;
    }

    void setObject(const ObjectHandle& newObject)
    {
        object = newObject;
    }

    using Super = Message;
    
    friend std::ostream& operator<<(std::ostream& os, const M_Local_Delete_Object_Instance& msg);
protected:
    ObjectHandle object;
};

std::ostream& operator<<(std::ostream& os, const M_Local_Delete_Object_Instance& msg);

class CERTI_EXPORT M_Remove_Object_Instance : public Message {
public:
    M_Remove_Object_Instance();
    virtual ~M_Remove_Object_Instance() = default;

    virtual void serialize(libhla::MessageBuffer& msgBuffer);
    virtual void deserialize(libhla::MessageBuffer& msgBuffer);

    // Attributes accessors and mutators
    const ObjectClassHandle& getObjectClass() const
    {
        return objectClass;
    }

    void setObjectClass(const ObjectClassHandle& newObjectClass)
    {
        objectClass = newObjectClass;
    }

    const ObjectHandle& getObject() const
    {
        return object;
    }

    void setObject(const ObjectHandle& newObject)
    {
        object = newObject;
    }

    const std::string& getObjectName() const
    {
        return objectName;
    }

    void setObjectName(const std::string& newObjectName)
    {
        objectName = newObjectName;
    }

    const EventRetraction& getEventRetraction() const
    {
        return eventRetraction;
    }

    void setEventRetraction(const EventRetraction& newEventRetraction)
    {
        _hasEventRetraction = true;
        eventRetraction = newEventRetraction;
    }

    bool hasEventRetraction() const
    {
        return _hasEventRetraction;
    }

    using Super = Message;
    
    friend std::ostream& operator<<(std::ostream& os, const M_Remove_Object_Instance& msg);
protected:
    ObjectClassHandle objectClass;
    ObjectHandle object;
    std::string objectName;
    EventRetraction eventRetraction;
    bool _hasEventRetraction;
};

std::ostream& operator<<(std::ostream& os, const M_Remove_Object_Instance& msg);

class CERTI_EXPORT M_Change_Attribute_Transportation_Type : public Message {
public:
    M_Change_Attribute_Transportation_Type();
    virtual ~M_Change_Attribute_Transportation_Type() = default;

    virtual void serialize(libhla::MessageBuffer& msgBuffer);
    virtual void deserialize(libhla::MessageBuffer& msgBuffer);

    // Attributes accessors and mutators
    const TransportType& getTransportationType() const
    {
        return transportationType;
    }

    void setTransportationType(const TransportType& newTransportationType)
    {
        transportationType = newTransportationType;
    }

    const OrderType& getOrderType() const
    {
        return orderType;
    }

    void setOrderType(const OrderType& newOrderType)
    {
        orderType = newOrderType;
    }

    const ObjectHandle& getObject() const
    {
        return object;
    }

    void setObject(const ObjectHandle& newObject)
    {
        object = newObject;
    }

    uint32_t getAttributesSize() const
    {
        return attributes.size();
    }

    void setAttributesSize(uint32_t num)
    {
        attributes.resize(num);
    }

    const std::vector<AttributeHandle>& getAttributes() const
    {
        return attributes;
    }

    const AttributeHandle& getAttributes(uint32_t rank) const
    {
        return attributes[rank];
    }

    AttributeHandle& getAttributes(uint32_t rank)
    {
        return attributes[rank];
    }

    void setAttributes(const AttributeHandle& newAttributes, uint32_t rank)
    {
        attributes[rank] = newAttributes;
    }

    void removeAttributes(uint32_t rank)
    {
        attributes.erase(attributes.begin() + rank);
    }

    using Super = Message;
    
    friend std::ostream& operator<<(std::ostream& os, const M_Change_Attribute_Transportation_Type& msg);
protected:
    TransportType transportationType;
    OrderType orderType;
    ObjectHandle object;
    std::vector<AttributeHandle> attributes;
};

std::ostream& operator<<(std::ostream& os, const M_Change_Attribute_Transportation_Type& msg);

class CERTI_EXPORT M_Change_Interaction_Transportation_Type : public Message {
public:
    M_Change_Interaction_Transportation_Type();
    virtual ~M_Change_Interaction_Transportation_Type() = default;

    virtual void serialize(libhla::MessageBuffer& msgBuffer);
    virtual void deserialize(libhla::MessageBuffer& msgBuffer);

    // Attributes accessors and mutators
    const InteractionClassHandle& getInteractionClass() const
    {
        return interactionClass;
    }

    void setInteractionClass(const InteractionClassHandle& newInteractionClass)
    {
        interactionClass = newInteractionClass;
    }

    const TransportType& getTransportationType() const
    {
        return transportationType;
    }

    void setTransportationType(const TransportType& newTransportationType)
    {
        transportationType = newTransportationType;
    }

    const OrderType& getOrderType() const
    {
        return orderType;
    }

    void setOrderType(const OrderType& newOrderType)
    {
        orderType = newOrderType;
    }

    using Super = Message;
    
    friend std::ostream& operator<<(std::ostream& os, const M_Change_Interaction_Transportation_Type& msg);
protected:
    InteractionClassHandle interactionClass;
    TransportType transportationType;
    OrderType orderType;
};

std::ostream& operator<<(std::ostream& os, const M_Change_Interaction_Transportation_Type& msg);

class CERTI_EXPORT M_Request_Object_Attribute_Value_Update : public Message {
public:
    M_Request_Object_Attribute_Value_Update();
    virtual ~M_Request_Object_Attribute_Value_Update() = default;

    virtual void serialize(libhla::MessageBuffer& msgBuffer);
    virtual void deserialize(libhla::MessageBuffer& msgBuffer);

    // Attributes accessors and mutators
    const ObjectHandle& getObject() const
    {
        return object;
    }

    void setObject(const ObjectHandle& newObject)
    {
        object = newObject;
    }

    uint32_t getAttributesSize() const
    {
        return attributes.size();
    }

    void setAttributesSize(uint32_t num)
    {
        attributes.resize(num);
    }

    const std::vector<AttributeHandle>& getAttributes() const
    {
        return attributes;
    }

    const AttributeHandle& getAttributes(uint32_t rank) const
    {
        return attributes[rank];
    }

    AttributeHandle& getAttributes(uint32_t rank)
    {
        return attributes[rank];
    }

    void setAttributes(const AttributeHandle& newAttributes, uint32_t rank)
    {
        attributes[rank] = newAttributes;
    }

    void removeAttributes(uint32_t rank)
    {
        attributes.erase(attributes.begin() + rank);
    }

    using Super = Message;
    
    friend std::ostream& operator<<(std::ostream& os, const M_Request_Object_Attribute_Value_Update& msg);
protected:
    ObjectHandle object;
    std::vector<AttributeHandle> attributes;
};

std::ostream& operator<<(std::ostream& os, const M_Request_Object_Attribute_Value_Update& msg);

class CERTI_EXPORT M_Request_Class_Attribute_Value_Update : public Message {
public:
    M_Request_Class_Attribute_Value_Update();
    virtual ~M_Request_Class_Attribute_Value_Update() = default;

    virtual void serialize(libhla::MessageBuffer& msgBuffer);
    virtual void deserialize(libhla::MessageBuffer& msgBuffer);

    // Attributes accessors and mutators
    const ObjectClassHandle& getObjectClass() const
    {
        return objectClass;
    }

    void setObjectClass(const ObjectClassHandle& newObjectClass)
    {
        objectClass = newObjectClass;
    }

    uint32_t getAttributesSize() const
    {
        return attributes.size();
    }

    void setAttributesSize(uint32_t num)
    {
        attributes.resize(num);
    }

    const std::vector<AttributeHandle>& getAttributes() const
    {
        return attributes;
    }

    const AttributeHandle& getAttributes(uint32_t rank) const
    {
        return attributes[rank];
    }

    AttributeHandle& getAttributes(uint32_t rank)
    {
        return attributes[rank];
    }

    void setAttributes(const AttributeHandle& newAttributes, uint32_t rank)
    {
        attributes[rank] = newAttributes;
    }

    void removeAttributes(uint32_t rank)
    {
        attributes.erase(attributes.begin() + rank);
    }

    using Super = Message;
    
    friend std::ostream& operator<<(std::ostream& os, const M_Request_Class_Attribute_Value_Update& msg);
protected:
    ObjectClassHandle objectClass;
    std::vector<AttributeHandle> attributes;
};

std::ostream& operator<<(std::ostream& os, const M_Request_Class_Attribute_Value_Update& msg);

class CERTI_EXPORT M_Provide_Attribute_Value_Update : public Message {
public:
    M_Provide_Attribute_Value_Update();
    virtual ~M_Provide_Attribute_Value_Update() = default;

    virtual void serialize(libhla::MessageBuffer& msgBuffer);
    virtual void deserialize(libhla::MessageBuffer& msgBuffer);

    // Attributes accessors and mutators
    const ObjectHandle& getObject() const
    {
        return object;
    }

    void setObject(const ObjectHandle& newObject)
    {
        object = newObject;
    }

    uint32_t getAttributesSize() const
    {
        return attributes.size();
    }

    void setAttributesSize(uint32_t num)
    {
        attributes.resize(num);
    }

    const std::vector<AttributeHandle>& getAttributes() const
    {
        return attributes;
    }

    const AttributeHandle& getAttributes(uint32_t rank) const
    {
        return attributes[rank];
    }

    AttributeHandle& getAttributes(uint32_t rank)
    {
        return attributes[rank];
    }

    void setAttributes(const AttributeHandle& newAttributes, uint32_t rank)
    {
        attributes[rank] = newAttributes;
    }

    void removeAttributes(uint32_t rank)
    {
        attributes.erase(attributes.begin() + rank);
    }

    using Super = Message;
    
    friend std::ostream& operator<<(std::ostream& os, const M_Provide_Attribute_Value_Update& msg);
protected:
    ObjectHandle object;
    std::vector<AttributeHandle> attributes;
};

std::ostream& operator<<(std::ostream& os, const M_Provide_Attribute_Value_Update& msg);

class CERTI_EXPORT M_Attributes_In_Scope : public Message {
public:
    M_Attributes_In_Scope();
    virtual ~M_Attributes_In_Scope() = default;

    virtual void serialize(libhla::MessageBuffer& msgBuffer);
    virtual void deserialize(libhla::MessageBuffer& msgBuffer);

    // Attributes accessors and mutators
    const ObjectHandle& getObject() const
    {
        return object;
    }

    void setObject(const ObjectHandle& newObject)
    {
        object = newObject;
    }

    uint32_t getAttributesSize() const
    {
        return attributes.size();
    }

    void setAttributesSize(uint32_t num)
    {
        attributes.resize(num);
    }

    const std::vector<AttributeHandle>& getAttributes() const
    {
        return attributes;
    }

    const AttributeHandle& getAttributes(uint32_t rank) const
    {
        return attributes[rank];
    }

    AttributeHandle& getAttributes(uint32_t rank)
    {
        return attributes[rank];
    }

    void setAttributes(const AttributeHandle& newAttributes, uint32_t rank)
    {
        attributes[rank] = newAttributes;
    }

    void removeAttributes(uint32_t rank)
    {
        attributes.erase(attributes.begin() + rank);
    }

    using Super = Message;
    
    friend std::ostream& operator<<(std::ostream& os, const M_Attributes_In_Scope& msg);
protected:
    ObjectHandle object;
    std::vector<AttributeHandle> attributes;
};

std::ostream& operator<<(std::ostream& os, const M_Attributes_In_Scope& msg);

class CERTI_EXPORT M_Attributes_Out_Of_Scope : public Message {
public:
    M_Attributes_Out_Of_Scope();
    virtual ~M_Attributes_Out_Of_Scope() = default;

    virtual void serialize(libhla::MessageBuffer& msgBuffer);
    virtual void deserialize(libhla::MessageBuffer& msgBuffer);

    // Attributes accessors and mutators
    const ObjectHandle& getObject() const
    {
        return object;
    }

    void setObject(const ObjectHandle& newObject)
    {
        object = newObject;
    }

    uint32_t getAttributesSize() const
    {
        return attributes.size();
    }

    void setAttributesSize(uint32_t num)
    {
        attributes.resize(num);
    }

    const std::vector<AttributeHandle>& getAttributes() const
    {
        return attributes;
    }

    const AttributeHandle& getAttributes(uint32_t rank) const
    {
        return attributes[rank];
    }

    AttributeHandle& getAttributes(uint32_t rank)
    {
        return attributes[rank];
    }

    void setAttributes(const AttributeHandle& newAttributes, uint32_t rank)
    {
        attributes[rank] = newAttributes;
    }

    void removeAttributes(uint32_t rank)
    {
        attributes.erase(attributes.begin() + rank);
    }

    using Super = Message;
    
    friend std::ostream& operator<<(std::ostream& os, const M_Attributes_Out_Of_Scope& msg);
protected:
    ObjectHandle object;
    std::vector<AttributeHandle> attributes;
};

std::ostream& operator<<(std::ostream& os, const M_Attributes_Out_Of_Scope& msg);

class CERTI_EXPORT M_Turn_Updates_On_For_Object_Instance : public Message {
public:
    M_Turn_Updates_On_For_Object_Instance();
    virtual ~M_Turn_Updates_On_For_Object_Instance() = default;

    virtual void serialize(libhla::MessageBuffer& msgBuffer);
    virtual void deserialize(libhla::MessageBuffer& msgBuffer);

    // Attributes accessors and mutators
    const ObjectHandle& getObject() const
    {
        return object;
    }

    void setObject(const ObjectHandle& newObject)
    {
        object = newObject;
    }

    uint32_t getAttributesSize() const
    {
        return attributes.size();
    }

    void setAttributesSize(uint32_t num)
    {
        attributes.resize(num);
    }

    const std::vector<AttributeHandle>& getAttributes() const
    {
        return attributes;
    }

    const AttributeHandle& getAttributes(uint32_t rank) const
    {
        return attributes[rank];
    }

    AttributeHandle& getAttributes(uint32_t rank)
    {
        return attributes[rank];
    }

    void setAttributes(const AttributeHandle& newAttributes, uint32_t rank)
    {
        attributes[rank] = newAttributes;
    }

    void removeAttributes(uint32_t rank)
    {
        attributes.erase(attributes.begin() + rank);
    }

    using Super = Message;
    
    friend std::ostream& operator<<(std::ostream& os, const M_Turn_Updates_On_For_Object_Instance& msg);
protected:
    ObjectHandle object;
    std::vector<AttributeHandle> attributes;
};

std::ostream& operator<<(std::ostream& os, const M_Turn_Updates_On_For_Object_Instance& msg);

class CERTI_EXPORT M_Turn_Updates_Off_For_Object_Instance : public Message {
public:
    M_Turn_Updates_Off_For_Object_Instance();
    virtual ~M_Turn_Updates_Off_For_Object_Instance() = default;

    virtual void serialize(libhla::MessageBuffer& msgBuffer);
    virtual void deserialize(libhla::MessageBuffer& msgBuffer);

    // Attributes accessors and mutators
    const ObjectHandle& getObject() const
    {
        return object;
    }

    void setObject(const ObjectHandle& newObject)
    {
        object = newObject;
    }

    uint32_t getAttributesSize() const
    {
        return attributes.size();
    }

    void setAttributesSize(uint32_t num)
    {
        attributes.resize(num);
    }

    const std::vector<AttributeHandle>& getAttributes() const
    {
        return attributes;
    }

    const AttributeHandle& getAttributes(uint32_t rank) const
    {
        return attributes[rank];
    }

    AttributeHandle& getAttributes(uint32_t rank)
    {
        return attributes[rank];
    }

    void setAttributes(const AttributeHandle& newAttributes, uint32_t rank)
    {
        attributes[rank] = newAttributes;
    }

    void removeAttributes(uint32_t rank)
    {
        attributes.erase(attributes.begin() + rank);
    }

    using Super = Message;
    
    friend std::ostream& operator<<(std::ostream& os, const M_Turn_Updates_Off_For_Object_Instance& msg);
protected:
    ObjectHandle object;
    std::vector<AttributeHandle> attributes;
};

std::ostream& operator<<(std::ostream& os, const M_Turn_Updates_Off_For_Object_Instance& msg);
// Ownership management
class CERTI_EXPORT M_Request_Attribute_Ownership_Divestiture : public Message {
public:
    M_Request_Attribute_Ownership_Divestiture();
    virtual ~M_Request_Attribute_Ownership_Divestiture() = default;

protected:
};

std::ostream& operator<<(std::ostream& os, const M_Request_Attribute_Ownership_Divestiture& msg);

class CERTI_EXPORT M_Request_Attribute_Ownership_Assumption : public Message {
public:
    M_Request_Attribute_Ownership_Assumption();
    virtual ~M_Request_Attribute_Ownership_Assumption() = default;

    virtual void serialize(libhla::MessageBuffer& msgBuffer);
    virtual void deserialize(libhla::MessageBuffer& msgBuffer);

    // Attributes accessors and mutators
    const ObjectHandle& getObject() const
    {
        return object;
    }

    void setObject(const ObjectHandle& newObject)
    {
        object = newObject;
    }

    uint32_t getAttributesSize() const
    {
        return attributes.size();
    }

    void setAttributesSize(uint32_t num)
    {
        attributes.resize(num);
    }

    const std::vector<AttributeHandle>& getAttributes() const
    {
        return attributes;
    }

    const AttributeHandle& getAttributes(uint32_t rank) const
    {
        return attributes[rank];
    }

    AttributeHandle& getAttributes(uint32_t rank)
    {
        return attributes[rank];
    }

    void setAttributes(const AttributeHandle& newAttributes, uint32_t rank)
    {
        attributes[rank] = newAttributes;
    }

    void removeAttributes(uint32_t rank)
    {
        attributes.erase(attributes.begin() + rank);
    }

    using Super = Message;
    
    friend std::ostream& operator<<(std::ostream& os, const M_Request_Attribute_Ownership_Assumption& msg);
protected:
    ObjectHandle object;
    std::vector<AttributeHandle> attributes;
};

std::ostream& operator<<(std::ostream& os, const M_Request_Attribute_Ownership_Assumption& msg);

class CERTI_EXPORT M_Negotiated_Attribute_Ownership_Divestiture : public Message {
public:
    M_Negotiated_Attribute_Ownership_Divestiture();
    virtual ~M_Negotiated_Attribute_Ownership_Divestiture() = default;

    virtual void serialize(libhla::MessageBuffer& msgBuffer);
    virtual void deserialize(libhla::MessageBuffer& msgBuffer);

    // Attributes accessors and mutators
    const ObjectHandle& getObject() const
    {
        return object;
    }

    void setObject(const ObjectHandle& newObject)
    {
        object = newObject;
    }

    uint32_t getAttributesSize() const
    {
        return attributes.size();
    }

    void setAttributesSize(uint32_t num)
    {
        attributes.resize(num);
    }

    const std::vector<AttributeHandle>& getAttributes() const
    {
        return attributes;
    }

    const AttributeHandle& getAttributes(uint32_t rank) const
    {
        return attributes[rank];
    }

    AttributeHandle& getAttributes(uint32_t rank)
    {
        return attributes[rank];
    }

    void setAttributes(const AttributeHandle& newAttributes, uint32_t rank)
    {
        attributes[rank] = newAttributes;
    }

    void removeAttributes(uint32_t rank)
    {
        attributes.erase(attributes.begin() + rank);
    }

    using Super = Message;
    
    friend std::ostream& operator<<(std::ostream& os, const M_Negotiated_Attribute_Ownership_Divestiture& msg);
protected:
    ObjectHandle object;
    std::vector<AttributeHandle> attributes;
};

std::ostream& operator<<(std::ostream& os, const M_Negotiated_Attribute_Ownership_Divestiture& msg);

class CERTI_EXPORT M_Attribute_Ownership_Divestiture_Notification : public Message {
public:
    M_Attribute_Ownership_Divestiture_Notification();
    virtual ~M_Attribute_Ownership_Divestiture_Notification() = default;

    virtual void serialize(libhla::MessageBuffer& msgBuffer);
    virtual void deserialize(libhla::MessageBuffer& msgBuffer);

    // Attributes accessors and mutators
    const ObjectHandle& getObject() const
    {
        return object;
    }

    void setObject(const ObjectHandle& newObject)
    {
        object = newObject;
    }

    uint32_t getAttributesSize() const
    {
        return attributes.size();
    }

    void setAttributesSize(uint32_t num)
    {
        attributes.resize(num);
    }

    const std::vector<AttributeHandle>& getAttributes() const
    {
        return attributes;
    }

    const AttributeHandle& getAttributes(uint32_t rank) const
    {
        return attributes[rank];
    }

    AttributeHandle& getAttributes(uint32_t rank)
    {
        return attributes[rank];
    }

    void setAttributes(const AttributeHandle& newAttributes, uint32_t rank)
    {
        attributes[rank] = newAttributes;
    }

    void removeAttributes(uint32_t rank)
    {
        attributes.erase(attributes.begin() + rank);
    }

    using Super = Message;
    
    friend std::ostream& operator<<(std::ostream& os, const M_Attribute_Ownership_Divestiture_Notification& msg);
protected:
    ObjectHandle object;
    std::vector<AttributeHandle> attributes;
};

std::ostream& operator<<(std::ostream& os, const M_Attribute_Ownership_Divestiture_Notification& msg);

class CERTI_EXPORT M_Attribute_Ownership_Acquisition_Notification : public Message {
public:
    M_Attribute_Ownership_Acquisition_Notification();
    virtual ~M_Attribute_Ownership_Acquisition_Notification() = default;

    virtual void serialize(libhla::MessageBuffer& msgBuffer);
    virtual void deserialize(libhla::MessageBuffer& msgBuffer);

    // Attributes accessors and mutators
    const ObjectHandle& getObject() const
    {
        return object;
    }

    void setObject(const ObjectHandle& newObject)
    {
        object = newObject;
    }

    uint32_t getAttributesSize() const
    {
        return attributes.size();
    }

    void setAttributesSize(uint32_t num)
    {
        attributes.resize(num);
    }

    const std::vector<AttributeHandle>& getAttributes() const
    {
        return attributes;
    }

    const AttributeHandle& getAttributes(uint32_t rank) const
    {
        return attributes[rank];
    }

    AttributeHandle& getAttributes(uint32_t rank)
    {
        return attributes[rank];
    }

    void setAttributes(const AttributeHandle& newAttributes, uint32_t rank)
    {
        attributes[rank] = newAttributes;
    }

    void removeAttributes(uint32_t rank)
    {
        attributes.erase(attributes.begin() + rank);
    }

    using Super = Message;
    
    friend std::ostream& operator<<(std::ostream& os, const M_Attribute_Ownership_Acquisition_Notification& msg);
protected:
    ObjectHandle object;
    std::vector<AttributeHandle> attributes;
};

std::ostream& operator<<(std::ostream& os, const M_Attribute_Ownership_Acquisition_Notification& msg);

class CERTI_EXPORT M_Request_Attribute_Ownership_Acquisition : public Message {
public:
    M_Request_Attribute_Ownership_Acquisition();
    virtual ~M_Request_Attribute_Ownership_Acquisition() = default;

    virtual void serialize(libhla::MessageBuffer& msgBuffer);
    virtual void deserialize(libhla::MessageBuffer& msgBuffer);

    // Attributes accessors and mutators
    const ObjectHandle& getObject() const
    {
        return object;
    }

    void setObject(const ObjectHandle& newObject)
    {
        object = newObject;
    }

    uint32_t getAttributesSize() const
    {
        return attributes.size();
    }

    void setAttributesSize(uint32_t num)
    {
        attributes.resize(num);
    }

    const std::vector<AttributeHandle>& getAttributes() const
    {
        return attributes;
    }

    const AttributeHandle& getAttributes(uint32_t rank) const
    {
        return attributes[rank];
    }

    AttributeHandle& getAttributes(uint32_t rank)
    {
        return attributes[rank];
    }

    void setAttributes(const AttributeHandle& newAttributes, uint32_t rank)
    {
        attributes[rank] = newAttributes;
    }

    void removeAttributes(uint32_t rank)
    {
        attributes.erase(attributes.begin() + rank);
    }

    using Super = Message;
    
    friend std::ostream& operator<<(std::ostream& os, const M_Request_Attribute_Ownership_Acquisition& msg);
protected:
    ObjectHandle object;
    std::vector<AttributeHandle> attributes;
};

std::ostream& operator<<(std::ostream& os, const M_Request_Attribute_Ownership_Acquisition& msg);

class CERTI_EXPORT M_Request_Attribute_Ownership_Release : public Message {
public:
    M_Request_Attribute_Ownership_Release();
    virtual ~M_Request_Attribute_Ownership_Release() = default;

    virtual void serialize(libhla::MessageBuffer& msgBuffer);
    virtual void deserialize(libhla::MessageBuffer& msgBuffer);

    // Attributes accessors and mutators
    const ObjectHandle& getObject() const
    {
        return object;
    }

    void setObject(const ObjectHandle& newObject)
    {
        object = newObject;
    }

    uint32_t getAttributesSize() const
    {
        return attributes.size();
    }

    void setAttributesSize(uint32_t num)
    {
        attributes.resize(num);
    }

    const std::vector<AttributeHandle>& getAttributes() const
    {
        return attributes;
    }

    const AttributeHandle& getAttributes(uint32_t rank) const
    {
        return attributes[rank];
    }

    AttributeHandle& getAttributes(uint32_t rank)
    {
        return attributes[rank];
    }

    void setAttributes(const AttributeHandle& newAttributes, uint32_t rank)
    {
        attributes[rank] = newAttributes;
    }

    void removeAttributes(uint32_t rank)
    {
        attributes.erase(attributes.begin() + rank);
    }

    using Super = Message;
    
    friend std::ostream& operator<<(std::ostream& os, const M_Request_Attribute_Ownership_Release& msg);
protected:
    ObjectHandle object;
    std::vector<AttributeHandle> attributes;
};

std::ostream& operator<<(std::ostream& os, const M_Request_Attribute_Ownership_Release& msg);

class CERTI_EXPORT M_Query_Attribute_Ownership : public Message {
public:
    M_Query_Attribute_Ownership();
    virtual ~M_Query_Attribute_Ownership() = default;

    virtual void serialize(libhla::MessageBuffer& msgBuffer);
    virtual void deserialize(libhla::MessageBuffer& msgBuffer);

    // Attributes accessors and mutators
    const ObjectHandle& getObject() const
    {
        return object;
    }

    void setObject(const ObjectHandle& newObject)
    {
        object = newObject;
    }

    const AttributeHandle& getAttribute() const
    {
        return attribute;
    }

    void setAttribute(const AttributeHandle& newAttribute)
    {
        attribute = newAttribute;
    }

    using Super = Message;
    
    friend std::ostream& operator<<(std::ostream& os, const M_Query_Attribute_Ownership& msg);
protected:
    ObjectHandle object;
    AttributeHandle attribute;
};

std::ostream& operator<<(std::ostream& os, const M_Query_Attribute_Ownership& msg);

class CERTI_EXPORT M_Inform_Attribute_Ownership : public Message {
public:
    M_Inform_Attribute_Ownership();
    virtual ~M_Inform_Attribute_Ownership() = default;

    virtual void serialize(libhla::MessageBuffer& msgBuffer);
    virtual void deserialize(libhla::MessageBuffer& msgBuffer);

    // Attributes accessors and mutators
    const ObjectHandle& getObject() const
    {
        return object;
    }

    void setObject(const ObjectHandle& newObject)
    {
        object = newObject;
    }

    const AttributeHandle& getAttribute() const
    {
        return attribute;
    }

    void setAttribute(const AttributeHandle& newAttribute)
    {
        attribute = newAttribute;
    }

    const FederateHandle& getFederate() const
    {
        return federate;
    }

    void setFederate(const FederateHandle& newFederate)
    {
        federate = newFederate;
    }

    using Super = Message;
    
    friend std::ostream& operator<<(std::ostream& os, const M_Inform_Attribute_Ownership& msg);
protected:
    ObjectHandle object;
    AttributeHandle attribute;
    FederateHandle federate;
};

std::ostream& operator<<(std::ostream& os, const M_Inform_Attribute_Ownership& msg);

class CERTI_EXPORT M_Is_Attribute_Owned_By_Federate : public Message {
public:
    M_Is_Attribute_Owned_By_Federate();
    virtual ~M_Is_Attribute_Owned_By_Federate() = default;

    virtual void serialize(libhla::MessageBuffer& msgBuffer);
    virtual void deserialize(libhla::MessageBuffer& msgBuffer);

    // Attributes accessors and mutators
    const ObjectHandle& getObject() const
    {
        return object;
    }

    void setObject(const ObjectHandle& newObject)
    {
        object = newObject;
    }

    const AttributeHandle& getAttribute() const
    {
        return attribute;
    }

    void setAttribute(const AttributeHandle& newAttribute)
    {
        attribute = newAttribute;
    }

    using Super = Message;
    
    friend std::ostream& operator<<(std::ostream& os, const M_Is_Attribute_Owned_By_Federate& msg);
protected:
    ObjectHandle object;
    AttributeHandle attribute;
};

std::ostream& operator<<(std::ostream& os, const M_Is_Attribute_Owned_By_Federate& msg);

class CERTI_EXPORT M_Attribute_Is_Not_Owned : public Message {
public:
    M_Attribute_Is_Not_Owned();
    virtual ~M_Attribute_Is_Not_Owned() = default;

    virtual void serialize(libhla::MessageBuffer& msgBuffer);
    virtual void deserialize(libhla::MessageBuffer& msgBuffer);

    // Attributes accessors and mutators
    const ObjectHandle& getObject() const
    {
        return object;
    }

    void setObject(const ObjectHandle& newObject)
    {
        object = newObject;
    }

    const AttributeHandle& getAttribute() const
    {
        return attribute;
    }

    void setAttribute(const AttributeHandle& newAttribute)
    {
        attribute = newAttribute;
    }

    const FederateHandle& getFederate() const
    {
        return federate;
    }

    void setFederate(const FederateHandle& newFederate)
    {
        federate = newFederate;
    }

    using Super = Message;
    
    friend std::ostream& operator<<(std::ostream& os, const M_Attribute_Is_Not_Owned& msg);
protected:
    ObjectHandle object;
    AttributeHandle attribute;
    FederateHandle federate;
};

std::ostream& operator<<(std::ostream& os, const M_Attribute_Is_Not_Owned& msg);

class CERTI_EXPORT M_Attribute_Owned_By_Rti : public Message {
public:
    M_Attribute_Owned_By_Rti();
    virtual ~M_Attribute_Owned_By_Rti() = default;

protected:
};

std::ostream& operator<<(std::ostream& os, const M_Attribute_Owned_By_Rti& msg);

class CERTI_EXPORT M_Attribute_Ownership_Acquisition_If_Available : public Message {
public:
    M_Attribute_Ownership_Acquisition_If_Available();
    virtual ~M_Attribute_Ownership_Acquisition_If_Available() = default;

    virtual void serialize(libhla::MessageBuffer& msgBuffer);
    virtual void deserialize(libhla::MessageBuffer& msgBuffer);

    // Attributes accessors and mutators
    const ObjectHandle& getObject() const
    {
        return object;
    }

    void setObject(const ObjectHandle& newObject)
    {
        object = newObject;
    }

    uint32_t getAttributesSize() const
    {
        return attributes.size();
    }

    void setAttributesSize(uint32_t num)
    {
        attributes.resize(num);
    }

    const std::vector<AttributeHandle>& getAttributes() const
    {
        return attributes;
    }

    const AttributeHandle& getAttributes(uint32_t rank) const
    {
        return attributes[rank];
    }

    AttributeHandle& getAttributes(uint32_t rank)
    {
        return attributes[rank];
    }

    void setAttributes(const AttributeHandle& newAttributes, uint32_t rank)
    {
        attributes[rank] = newAttributes;
    }

    void removeAttributes(uint32_t rank)
    {
        attributes.erase(attributes.begin() + rank);
    }

    using Super = Message;
    
    friend std::ostream& operator<<(std::ostream& os, const M_Attribute_Ownership_Acquisition_If_Available& msg);
protected:
    ObjectHandle object;
    std::vector<AttributeHandle> attributes;
};

std::ostream& operator<<(std::ostream& os, const M_Attribute_Ownership_Acquisition_If_Available& msg);

class CERTI_EXPORT M_Attribute_Ownership_Unavailable : public Message {
public:
    M_Attribute_Ownership_Unavailable();
    virtual ~M_Attribute_Ownership_Unavailable() = default;

    virtual void serialize(libhla::MessageBuffer& msgBuffer);
    virtual void deserialize(libhla::MessageBuffer& msgBuffer);

    // Attributes accessors and mutators
    const ObjectHandle& getObject() const
    {
        return object;
    }

    void setObject(const ObjectHandle& newObject)
    {
        object = newObject;
    }

    uint32_t getAttributesSize() const
    {
        return attributes.size();
    }

    void setAttributesSize(uint32_t num)
    {
        attributes.resize(num);
    }

    const std::vector<AttributeHandle>& getAttributes() const
    {
        return attributes;
    }

    const AttributeHandle& getAttributes(uint32_t rank) const
    {
        return attributes[rank];
    }

    AttributeHandle& getAttributes(uint32_t rank)
    {
        return attributes[rank];
    }

    void setAttributes(const AttributeHandle& newAttributes, uint32_t rank)
    {
        attributes[rank] = newAttributes;
    }

    void removeAttributes(uint32_t rank)
    {
        attributes.erase(attributes.begin() + rank);
    }

    using Super = Message;
    
    friend std::ostream& operator<<(std::ostream& os, const M_Attribute_Ownership_Unavailable& msg);
protected:
    ObjectHandle object;
    std::vector<AttributeHandle> attributes;
};

std::ostream& operator<<(std::ostream& os, const M_Attribute_Ownership_Unavailable& msg);

class CERTI_EXPORT M_Unconditional_Attribute_Ownership_Divestiture : public Message {
public:
    M_Unconditional_Attribute_Ownership_Divestiture();
    virtual ~M_Unconditional_Attribute_Ownership_Divestiture() = default;

    virtual void serialize(libhla::MessageBuffer& msgBuffer);
    virtual void deserialize(libhla::MessageBuffer& msgBuffer);

    // Attributes accessors and mutators
    const ObjectHandle& getObject() const
    {
        return object;
    }

    void setObject(const ObjectHandle& newObject)
    {
        object = newObject;
    }

    uint32_t getAttributesSize() const
    {
        return attributes.size();
    }

    void setAttributesSize(uint32_t num)
    {
        attributes.resize(num);
    }

    const std::vector<AttributeHandle>& getAttributes() const
    {
        return attributes;
    }

    const AttributeHandle& getAttributes(uint32_t rank) const
    {
        return attributes[rank];
    }

    AttributeHandle& getAttributes(uint32_t rank)
    {
        return attributes[rank];
    }

    void setAttributes(const AttributeHandle& newAttributes, uint32_t rank)
    {
        attributes[rank] = newAttributes;
    }

    void removeAttributes(uint32_t rank)
    {
        attributes.erase(attributes.begin() + rank);
    }

    using Super = Message;
    
    friend std::ostream& operator<<(std::ostream& os, const M_Unconditional_Attribute_Ownership_Divestiture& msg);
protected:
    ObjectHandle object;
    std::vector<AttributeHandle> attributes;
};

std::ostream& operator<<(std::ostream& os, const M_Unconditional_Attribute_Ownership_Divestiture& msg);

class CERTI_EXPORT M_Attribute_Ownership_Acquisition : public Message {
public:
    M_Attribute_Ownership_Acquisition();
    virtual ~M_Attribute_Ownership_Acquisition() = default;

    virtual void serialize(libhla::MessageBuffer& msgBuffer);
    virtual void deserialize(libhla::MessageBuffer& msgBuffer);

    // Attributes accessors and mutators
    const ObjectHandle& getObject() const
    {
        return object;
    }

    void setObject(const ObjectHandle& newObject)
    {
        object = newObject;
    }

    uint32_t getAttributesSize() const
    {
        return attributes.size();
    }

    void setAttributesSize(uint32_t num)
    {
        attributes.resize(num);
    }

    const std::vector<AttributeHandle>& getAttributes() const
    {
        return attributes;
    }

    const AttributeHandle& getAttributes(uint32_t rank) const
    {
        return attributes[rank];
    }

    AttributeHandle& getAttributes(uint32_t rank)
    {
        return attributes[rank];
    }

    void setAttributes(const AttributeHandle& newAttributes, uint32_t rank)
    {
        attributes[rank] = newAttributes;
    }

    void removeAttributes(uint32_t rank)
    {
        attributes.erase(attributes.begin() + rank);
    }

    using Super = Message;
    
    friend std::ostream& operator<<(std::ostream& os, const M_Attribute_Ownership_Acquisition& msg);
protected:
    ObjectHandle object;
    std::vector<AttributeHandle> attributes;
};

std::ostream& operator<<(std::ostream& os, const M_Attribute_Ownership_Acquisition& msg);

class CERTI_EXPORT M_Cancel_Negotiated_Attribute_Ownership_Divestiture : public Message {
public:
    M_Cancel_Negotiated_Attribute_Ownership_Divestiture();
    virtual ~M_Cancel_Negotiated_Attribute_Ownership_Divestiture() = default;

    virtual void serialize(libhla::MessageBuffer& msgBuffer);
    virtual void deserialize(libhla::MessageBuffer& msgBuffer);

    // Attributes accessors and mutators
    const ObjectHandle& getObject() const
    {
        return object;
    }

    void setObject(const ObjectHandle& newObject)
    {
        object = newObject;
    }

    uint32_t getAttributesSize() const
    {
        return attributes.size();
    }

    void setAttributesSize(uint32_t num)
    {
        attributes.resize(num);
    }

    const std::vector<AttributeHandle>& getAttributes() const
    {
        return attributes;
    }

    const AttributeHandle& getAttributes(uint32_t rank) const
    {
        return attributes[rank];
    }

    AttributeHandle& getAttributes(uint32_t rank)
    {
        return attributes[rank];
    }

    void setAttributes(const AttributeHandle& newAttributes, uint32_t rank)
    {
        attributes[rank] = newAttributes;
    }

    void removeAttributes(uint32_t rank)
    {
        attributes.erase(attributes.begin() + rank);
    }

    using Super = Message;
    
    friend std::ostream& operator<<(std::ostream& os, const M_Cancel_Negotiated_Attribute_Ownership_Divestiture& msg);
protected:
    ObjectHandle object;
    std::vector<AttributeHandle> attributes;
};

std::ostream& operator<<(std::ostream& os, const M_Cancel_Negotiated_Attribute_Ownership_Divestiture& msg);

class CERTI_EXPORT M_Attribute_Ownership_Release_Response : public Message {
public:
    M_Attribute_Ownership_Release_Response();
    virtual ~M_Attribute_Ownership_Release_Response() = default;

    virtual void serialize(libhla::MessageBuffer& msgBuffer);
    virtual void deserialize(libhla::MessageBuffer& msgBuffer);

    // Attributes accessors and mutators
    const ObjectHandle& getObject() const
    {
        return object;
    }

    void setObject(const ObjectHandle& newObject)
    {
        object = newObject;
    }

    uint32_t getAttributesSize() const
    {
        return attributes.size();
    }

    void setAttributesSize(uint32_t num)
    {
        attributes.resize(num);
    }

    const std::vector<AttributeHandle>& getAttributes() const
    {
        return attributes;
    }

    const AttributeHandle& getAttributes(uint32_t rank) const
    {
        return attributes[rank];
    }

    AttributeHandle& getAttributes(uint32_t rank)
    {
        return attributes[rank];
    }

    void setAttributes(const AttributeHandle& newAttributes, uint32_t rank)
    {
        attributes[rank] = newAttributes;
    }

    void removeAttributes(uint32_t rank)
    {
        attributes.erase(attributes.begin() + rank);
    }

    using Super = Message;
    
    friend std::ostream& operator<<(std::ostream& os, const M_Attribute_Ownership_Release_Response& msg);
protected:
    ObjectHandle object;
    std::vector<AttributeHandle> attributes;
};

std::ostream& operator<<(std::ostream& os, const M_Attribute_Ownership_Release_Response& msg);

class CERTI_EXPORT M_Cancel_Attribute_Ownership_Acquisition : public Message {
public:
    M_Cancel_Attribute_Ownership_Acquisition();
    virtual ~M_Cancel_Attribute_Ownership_Acquisition() = default;

    virtual void serialize(libhla::MessageBuffer& msgBuffer);
    virtual void deserialize(libhla::MessageBuffer& msgBuffer);

    // Attributes accessors and mutators
    const ObjectHandle& getObject() const
    {
        return object;
    }

    void setObject(const ObjectHandle& newObject)
    {
        object = newObject;
    }

    uint32_t getAttributesSize() const
    {
        return attributes.size();
    }

    void setAttributesSize(uint32_t num)
    {
        attributes.resize(num);
    }

    const std::vector<AttributeHandle>& getAttributes() const
    {
        return attributes;
    }

    const AttributeHandle& getAttributes(uint32_t rank) const
    {
        return attributes[rank];
    }

    AttributeHandle& getAttributes(uint32_t rank)
    {
        return attributes[rank];
    }

    void setAttributes(const AttributeHandle& newAttributes, uint32_t rank)
    {
        attributes[rank] = newAttributes;
    }

    void removeAttributes(uint32_t rank)
    {
        attributes.erase(attributes.begin() + rank);
    }

    using Super = Message;
    
    friend std::ostream& operator<<(std::ostream& os, const M_Cancel_Attribute_Ownership_Acquisition& msg);
protected:
    ObjectHandle object;
    std::vector<AttributeHandle> attributes;
};

std::ostream& operator<<(std::ostream& os, const M_Cancel_Attribute_Ownership_Acquisition& msg);

class CERTI_EXPORT M_Confirm_Attribute_Ownership_Acquisition_Cancellation : public Message {
public:
    M_Confirm_Attribute_Ownership_Acquisition_Cancellation();
    virtual ~M_Confirm_Attribute_Ownership_Acquisition_Cancellation() = default;

    virtual void serialize(libhla::MessageBuffer& msgBuffer);
    virtual void deserialize(libhla::MessageBuffer& msgBuffer);

    // Attributes accessors and mutators
    const ObjectHandle& getObject() const
    {
        return object;
    }

    void setObject(const ObjectHandle& newObject)
    {
        object = newObject;
    }

    uint32_t getAttributesSize() const
    {
        return attributes.size();
    }

    void setAttributesSize(uint32_t num)
    {
        attributes.resize(num);
    }

    const std::vector<AttributeHandle>& getAttributes() const
    {
        return attributes;
    }

    const AttributeHandle& getAttributes(uint32_t rank) const
    {
        return attributes[rank];
    }

    AttributeHandle& getAttributes(uint32_t rank)
    {
        return attributes[rank];
    }

    void setAttributes(const AttributeHandle& newAttributes, uint32_t rank)
    {
        attributes[rank] = newAttributes;
    }

    void removeAttributes(uint32_t rank)
    {
        attributes.erase(attributes.begin() + rank);
    }

    using Super = Message;
    
    friend std::ostream& operator<<(std::ostream& os, const M_Confirm_Attribute_Ownership_Acquisition_Cancellation& msg);
protected:
    ObjectHandle object;
    std::vector<AttributeHandle> attributes;
};

std::ostream& operator<<(std::ostream& os, const M_Confirm_Attribute_Ownership_Acquisition_Cancellation& msg);
// Time
class CERTI_EXPORT M_Change_Attribute_Order_Type : public Message {
public:
    M_Change_Attribute_Order_Type();
    virtual ~M_Change_Attribute_Order_Type() = default;

    virtual void serialize(libhla::MessageBuffer& msgBuffer);
    virtual void deserialize(libhla::MessageBuffer& msgBuffer);

    // Attributes accessors and mutators
    const TransportType& getTransport() const
    {
        return transport;
    }

    void setTransport(const TransportType& newTransport)
    {
        transport = newTransport;
    }

    const OrderType& getOrder() const
    {
        return order;
    }

    void setOrder(const OrderType& newOrder)
    {
        order = newOrder;
    }

    const ObjectHandle& getObject() const
    {
        return object;
    }

    void setObject(const ObjectHandle& newObject)
    {
        object = newObject;
    }

    uint32_t getAttributesSize() const
    {
        return attributes.size();
    }

    void setAttributesSize(uint32_t num)
    {
        attributes.resize(num);
    }

    const std::vector<AttributeHandle>& getAttributes() const
    {
        return attributes;
    }

    const AttributeHandle& getAttributes(uint32_t rank) const
    {
        return attributes[rank];
    }

    AttributeHandle& getAttributes(uint32_t rank)
    {
        return attributes[rank];
    }

    void setAttributes(const AttributeHandle& newAttributes, uint32_t rank)
    {
        attributes[rank] = newAttributes;
    }

    void removeAttributes(uint32_t rank)
    {
        attributes.erase(attributes.begin() + rank);
    }

    using Super = Message;
    
    friend std::ostream& operator<<(std::ostream& os, const M_Change_Attribute_Order_Type& msg);
protected:
    TransportType transport;
    OrderType order;
    ObjectHandle object;
    std::vector<AttributeHandle> attributes;
};

std::ostream& operator<<(std::ostream& os, const M_Change_Attribute_Order_Type& msg);

class CERTI_EXPORT M_Change_Interaction_Order_Type : public Message {
public:
    M_Change_Interaction_Order_Type();
    virtual ~M_Change_Interaction_Order_Type() = default;

    virtual void serialize(libhla::MessageBuffer& msgBuffer);
    virtual void deserialize(libhla::MessageBuffer& msgBuffer);

    // Attributes accessors and mutators
    const InteractionClassHandle& getInteractionClass() const
    {
        return interactionClass;
    }

    void setInteractionClass(const InteractionClassHandle& newInteractionClass)
    {
        interactionClass = newInteractionClass;
    }

    const TransportType& getTransport() const
    {
        return transport;
    }

    void setTransport(const TransportType& newTransport)
    {
        transport = newTransport;
    }

    const OrderType& getOrder() const
    {
        return order;
    }

    void setOrder(const OrderType& newOrder)
    {
        order = newOrder;
    }

    using Super = Message;
    
    friend std::ostream& operator<<(std::ostream& os, const M_Change_Interaction_Order_Type& msg);
protected:
    InteractionClassHandle interactionClass;
    TransportType transport;
    OrderType order;
};

std::ostream& operator<<(std::ostream& os, const M_Change_Interaction_Order_Type& msg);
// HLA 1.3 - §8.2
class CERTI_EXPORT M_Enable_Time_Regulation : public Message {
public:
    M_Enable_Time_Regulation();
    virtual ~M_Enable_Time_Regulation() = default;

    virtual void serialize(libhla::MessageBuffer& msgBuffer);
    virtual void deserialize(libhla::MessageBuffer& msgBuffer);

    // Attributes accessors and mutators
    const double& getLookahead() const
    {
        return lookahead;
    }

    void setLookahead(const double& newLookahead)
    {
        lookahead = newLookahead;
    }

    using Super = Message;
    
    friend std::ostream& operator<<(std::ostream& os, const M_Enable_Time_Regulation& msg);
protected:
    double lookahead;
};

std::ostream& operator<<(std::ostream& os, const M_Enable_Time_Regulation& msg);
// HLA 1.3 - §8.4
class CERTI_EXPORT M_Disable_Time_Regulation : public Message {
public:
    M_Disable_Time_Regulation();
    virtual ~M_Disable_Time_Regulation() = default;

    virtual void serialize(libhla::MessageBuffer& msgBuffer);
    virtual void deserialize(libhla::MessageBuffer& msgBuffer);

    // Attributes accessors and mutators
    const double& getLookahead() const
    {
        return lookahead;
    }

    void setLookahead(const double& newLookahead)
    {
        lookahead = newLookahead;
    }

    using Super = Message;
    
    friend std::ostream& operator<<(std::ostream& os, const M_Disable_Time_Regulation& msg);
protected:
    double lookahead;
};

std::ostream& operator<<(std::ostream& os, const M_Disable_Time_Regulation& msg);
// HLA 1.3 - §8.5
class CERTI_EXPORT M_Enable_Time_Constrained : public Message {
public:
    M_Enable_Time_Constrained();
    virtual ~M_Enable_Time_Constrained() = default;

protected:
};

std::ostream& operator<<(std::ostream& os, const M_Enable_Time_Constrained& msg);
// HLA 1.3 - §8.7
class CERTI_EXPORT M_Disable_Time_Constrained : public Message {
public:
    M_Disable_Time_Constrained();
    virtual ~M_Disable_Time_Constrained() = default;

protected:
};

std::ostream& operator<<(std::ostream& os, const M_Disable_Time_Constrained& msg);

class CERTI_EXPORT M_Query_Lbts : public Message {
public:
    M_Query_Lbts();
    virtual ~M_Query_Lbts() = default;

protected:
};

std::ostream& operator<<(std::ostream& os, const M_Query_Lbts& msg);

class CERTI_EXPORT M_Query_Federate_Time : public Message {
public:
    M_Query_Federate_Time();
    virtual ~M_Query_Federate_Time() = default;

protected:
};

std::ostream& operator<<(std::ostream& os, const M_Query_Federate_Time& msg);

class CERTI_EXPORT M_Query_Min_Next_Event_Time : public Message {
public:
    M_Query_Min_Next_Event_Time();
    virtual ~M_Query_Min_Next_Event_Time() = default;

protected:
};

std::ostream& operator<<(std::ostream& os, const M_Query_Min_Next_Event_Time& msg);

class CERTI_EXPORT M_Modify_Lookahead : public Message {
public:
    M_Modify_Lookahead();
    virtual ~M_Modify_Lookahead() = default;

    virtual void serialize(libhla::MessageBuffer& msgBuffer);
    virtual void deserialize(libhla::MessageBuffer& msgBuffer);

    // Attributes accessors and mutators
    const double& getLookahead() const
    {
        return lookahead;
    }

    void setLookahead(const double& newLookahead)
    {
        lookahead = newLookahead;
    }

    using Super = Message;
    
    friend std::ostream& operator<<(std::ostream& os, const M_Modify_Lookahead& msg);
protected:
    double lookahead;
};

std::ostream& operator<<(std::ostream& os, const M_Modify_Lookahead& msg);

class CERTI_EXPORT M_Query_Lookahead : public Message {
public:
    M_Query_Lookahead();
    virtual ~M_Query_Lookahead() = default;

    virtual void serialize(libhla::MessageBuffer& msgBuffer);
    virtual void deserialize(libhla::MessageBuffer& msgBuffer);

    // Attributes accessors and mutators
    const double& getLookahead() const
    {
        return lookahead;
    }

    void setLookahead(const double& newLookahead)
    {
        lookahead = newLookahead;
    }

    using Super = Message;
    
    friend std::ostream& operator<<(std::ostream& os, const M_Query_Lookahead& msg);
protected:
    double lookahead;
};

std::ostream& operator<<(std::ostream& os, const M_Query_Lookahead& msg);

class CERTI_EXPORT M_Retract : public Message {
public:
    M_Retract();
    virtual ~M_Retract() = default;

    virtual void serialize(libhla::MessageBuffer& msgBuffer);
    virtual void deserialize(libhla::MessageBuffer& msgBuffer);

    // Attributes accessors and mutators
    const EventRetraction& getEventRetraction() const
    {
        return eventRetraction;
    }

    void setEventRetraction(const EventRetraction& newEventRetraction)
    {
        eventRetraction = newEventRetraction;
    }

    using Super = Message;
    
    friend std::ostream& operator<<(std::ostream& os, const M_Retract& msg);
protected:
    EventRetraction eventRetraction;
};

std::ostream& operator<<(std::ostream& os, const M_Retract& msg);

class CERTI_EXPORT M_Request_Retraction : public Message {
public:
    M_Request_Retraction();
    virtual ~M_Request_Retraction() = default;

protected:
};

std::ostream& operator<<(std::ostream& os, const M_Request_Retraction& msg);
// HLA 1.3 - §8.8
class CERTI_EXPORT M_Time_Advance_Request : public Message {
public:
    M_Time_Advance_Request();
    virtual ~M_Time_Advance_Request() = default;

protected:
};

std::ostream& operator<<(std::ostream& os, const M_Time_Advance_Request& msg);

class CERTI_EXPORT M_Time_Advance_Request_Available : public Message {
public:
    M_Time_Advance_Request_Available();
    virtual ~M_Time_Advance_Request_Available() = default;

protected:
};

std::ostream& operator<<(std::ostream& os, const M_Time_Advance_Request_Available& msg);

class CERTI_EXPORT M_Next_Event_Request : public Message {
public:
    M_Next_Event_Request();
    virtual ~M_Next_Event_Request() = default;

protected:
};

std::ostream& operator<<(std::ostream& os, const M_Next_Event_Request& msg);

class CERTI_EXPORT M_Next_Event_Request_Available : public Message {
public:
    M_Next_Event_Request_Available();
    virtual ~M_Next_Event_Request_Available() = default;

protected:
};

std::ostream& operator<<(std::ostream& os, const M_Next_Event_Request_Available& msg);

class CERTI_EXPORT M_Flush_Queue_Request : public Message {
public:
    M_Flush_Queue_Request();
    virtual ~M_Flush_Queue_Request() = default;

protected:
};

std::ostream& operator<<(std::ostream& os, const M_Flush_Queue_Request& msg);

class CERTI_EXPORT M_Time_Advance_Grant : public Message {
public:
    M_Time_Advance_Grant();
    virtual ~M_Time_Advance_Grant() = default;

protected:
};

std::ostream& operator<<(std::ostream& os, const M_Time_Advance_Grant& msg);

class CERTI_EXPORT M_Enable_Asynchronous_Delivery : public Message {
public:
    M_Enable_Asynchronous_Delivery();
    virtual ~M_Enable_Asynchronous_Delivery() = default;

protected:
};

std::ostream& operator<<(std::ostream& os, const M_Enable_Asynchronous_Delivery& msg);

class CERTI_EXPORT M_Disable_Asynchronous_Delivery : public Message {
public:
    M_Disable_Asynchronous_Delivery();
    virtual ~M_Disable_Asynchronous_Delivery() = default;

protected:
};

std::ostream& operator<<(std::ostream& os, const M_Disable_Asynchronous_Delivery& msg);
// HLA 1.3 - §8.3
class CERTI_EXPORT M_Time_Regulation_Enabled : public Message {
public:
    M_Time_Regulation_Enabled();
    virtual ~M_Time_Regulation_Enabled() = default;

protected:
};

std::ostream& operator<<(std::ostream& os, const M_Time_Regulation_Enabled& msg);
// HLA 1.3 - §8.6
class CERTI_EXPORT M_Time_Constrained_Enabled : public Message {
public:
    M_Time_Constrained_Enabled();
    virtual ~M_Time_Constrained_Enabled() = default;

protected:
};

std::ostream& operator<<(std::ostream& os, const M_Time_Constrained_Enabled& msg);
// Data Distribution Management
class CERTI_EXPORT M_Ddm_Create_Region : public Message {
public:
    M_Ddm_Create_Region();
    virtual ~M_Ddm_Create_Region() = default;

    virtual void serialize(libhla::MessageBuffer& msgBuffer);
    virtual void deserialize(libhla::MessageBuffer& msgBuffer);

    // Attributes accessors and mutators
    const SpaceHandle& getSpace() const
    {
        return space;
    }

    void setSpace(const SpaceHandle& newSpace)
    {
        space = newSpace;
    }

    uint32_t getExtentSetSize() const
    {
        return extentSet.size();
    }

    void setExtentSetSize(uint32_t num)
    {
        extentSet.resize(num);
    }

    const std::vector<Extent>& getExtentSet() const
    {
        return extentSet;
    }

    const Extent& getExtentSet(uint32_t rank) const
    {
        return extentSet[rank];
    }

    Extent& getExtentSet(uint32_t rank)
    {
        return extentSet[rank];
    }

    void setExtentSet(const Extent& newExtentSet, uint32_t rank)
    {
        extentSet[rank] = newExtentSet;
    }

    void removeExtentSet(uint32_t rank)
    {
        extentSet.erase(extentSet.begin() + rank);
    }

    const RegionHandle& getRegion() const
    {
        return region;
    }

    void setRegion(const RegionHandle& newRegion)
    {
        region = newRegion;
    }

    using Super = Message;
    
    friend std::ostream& operator<<(std::ostream& os, const M_Ddm_Create_Region& msg);
protected:
    SpaceHandle space;// the routing space designator
    std::vector<Extent> extentSet;// the extent set    
    RegionHandle region;// the region handle obtained upon successful creation
};

std::ostream& operator<<(std::ostream& os, const M_Ddm_Create_Region& msg);

class CERTI_EXPORT M_Ddm_Modify_Region : public Message {
public:
    M_Ddm_Modify_Region();
    virtual ~M_Ddm_Modify_Region() = default;

    virtual void serialize(libhla::MessageBuffer& msgBuffer);
    virtual void deserialize(libhla::MessageBuffer& msgBuffer);

    // Attributes accessors and mutators
    const RegionHandle& getRegion() const
    {
        return region;
    }

    void setRegion(const RegionHandle& newRegion)
    {
        region = newRegion;
    }

    uint32_t getExtentSetSize() const
    {
        return extentSet.size();
    }

    void setExtentSetSize(uint32_t num)
    {
        extentSet.resize(num);
    }

    const std::vector<Extent>& getExtentSet() const
    {
        return extentSet;
    }

    const Extent& getExtentSet(uint32_t rank) const
    {
        return extentSet[rank];
    }

    Extent& getExtentSet(uint32_t rank)
    {
        return extentSet[rank];
    }

    void setExtentSet(const Extent& newExtentSet, uint32_t rank)
    {
        extentSet[rank] = newExtentSet;
    }

    void removeExtentSet(uint32_t rank)
    {
        extentSet.erase(extentSet.begin() + rank);
    }

    using Super = Message;
    
    friend std::ostream& operator<<(std::ostream& os, const M_Ddm_Modify_Region& msg);
protected:
    RegionHandle region;
    std::vector<Extent> extentSet;// the extent set
};

std::ostream& operator<<(std::ostream& os, const M_Ddm_Modify_Region& msg);

class CERTI_EXPORT M_Ddm_Delete_Region : public Message {
public:
    M_Ddm_Delete_Region();
    virtual ~M_Ddm_Delete_Region() = default;

    virtual void serialize(libhla::MessageBuffer& msgBuffer);
    virtual void deserialize(libhla::MessageBuffer& msgBuffer);

    // Attributes accessors and mutators
    const RegionHandle& getRegion() const
    {
        return region;
    }

    void setRegion(const RegionHandle& newRegion)
    {
        region = newRegion;
    }

    using Super = Message;
    
    friend std::ostream& operator<<(std::ostream& os, const M_Ddm_Delete_Region& msg);
protected:
    RegionHandle region;
};

std::ostream& operator<<(std::ostream& os, const M_Ddm_Delete_Region& msg);

class CERTI_EXPORT M_Ddm_Register_Object : public Message {
public:
    M_Ddm_Register_Object();
    virtual ~M_Ddm_Register_Object() = default;

    virtual void serialize(libhla::MessageBuffer& msgBuffer);
    virtual void deserialize(libhla::MessageBuffer& msgBuffer);

    // Attributes accessors and mutators
    const ObjectClassHandle& getObjectClass() const
    {
        return objectClass;
    }

    void setObjectClass(const ObjectClassHandle& newObjectClass)
    {
        objectClass = newObjectClass;
    }

    const ObjectHandle& getObject() const
    {
        return object;
    }

    void setObject(const ObjectHandle& newObject)
    {
        object = newObject;
    }

    const std::string& getObjectInstanceName() const
    {
        return objectInstanceName;
    }

    void setObjectInstanceName(const std::string& newObjectInstanceName)
    {
        _hasObjectInstanceName = true;
        objectInstanceName = newObjectInstanceName;
    }

    bool hasObjectInstanceName() const
    {
        return _hasObjectInstanceName;
    }

    uint32_t getAttributesSize() const
    {
        return attributes.size();
    }

    void setAttributesSize(uint32_t num)
    {
        attributes.resize(num);
    }

    const std::vector<AttributeHandle>& getAttributes() const
    {
        return attributes;
    }

    const AttributeHandle& getAttributes(uint32_t rank) const
    {
        return attributes[rank];
    }

    AttributeHandle& getAttributes(uint32_t rank)
    {
        return attributes[rank];
    }

    void setAttributes(const AttributeHandle& newAttributes, uint32_t rank)
    {
        attributes[rank] = newAttributes;
    }

    void removeAttributes(uint32_t rank)
    {
        attributes.erase(attributes.begin() + rank);
    }

    using Super = Message;
    
    friend std::ostream& operator<<(std::ostream& os, const M_Ddm_Register_Object& msg);
protected:
    ObjectClassHandle objectClass;
    ObjectHandle object;
    std::string objectInstanceName;
    bool _hasObjectInstanceName;
    std::vector<AttributeHandle> attributes;// repeated RegionHandle      regions 
};

std::ostream& operator<<(std::ostream& os, const M_Ddm_Register_Object& msg);

class CERTI_EXPORT M_Ddm_Associate_Region : public Message {
public:
    M_Ddm_Associate_Region();
    virtual ~M_Ddm_Associate_Region() = default;

    virtual void serialize(libhla::MessageBuffer& msgBuffer);
    virtual void deserialize(libhla::MessageBuffer& msgBuffer);

    // Attributes accessors and mutators
    const ObjectHandle& getObject() const
    {
        return object;
    }

    void setObject(const ObjectHandle& newObject)
    {
        object = newObject;
    }

    const RegionHandle& getRegion() const
    {
        return region;
    }

    void setRegion(const RegionHandle& newRegion)
    {
        region = newRegion;
    }

    uint32_t getAttributesSize() const
    {
        return attributes.size();
    }

    void setAttributesSize(uint32_t num)
    {
        attributes.resize(num);
    }

    const std::vector<AttributeHandle>& getAttributes() const
    {
        return attributes;
    }

    const AttributeHandle& getAttributes(uint32_t rank) const
    {
        return attributes[rank];
    }

    AttributeHandle& getAttributes(uint32_t rank)
    {
        return attributes[rank];
    }

    void setAttributes(const AttributeHandle& newAttributes, uint32_t rank)
    {
        attributes[rank] = newAttributes;
    }

    void removeAttributes(uint32_t rank)
    {
        attributes.erase(attributes.begin() + rank);
    }

    using Super = Message;
    
    friend std::ostream& operator<<(std::ostream& os, const M_Ddm_Associate_Region& msg);
protected:
    ObjectHandle object;
    RegionHandle region;
    std::vector<AttributeHandle> attributes;
};

std::ostream& operator<<(std::ostream& os, const M_Ddm_Associate_Region& msg);

class CERTI_EXPORT M_Ddm_Unassociate_Region : public Message {
public:
    M_Ddm_Unassociate_Region();
    virtual ~M_Ddm_Unassociate_Region() = default;

    virtual void serialize(libhla::MessageBuffer& msgBuffer);
    virtual void deserialize(libhla::MessageBuffer& msgBuffer);

    // Attributes accessors and mutators
    const ObjectHandle& getObject() const
    {
        return object;
    }

    void setObject(const ObjectHandle& newObject)
    {
        object = newObject;
    }

    const RegionHandle& getRegion() const
    {
        return region;
    }

    void setRegion(const RegionHandle& newRegion)
    {
        region = newRegion;
    }

    using Super = Message;
    
    friend std::ostream& operator<<(std::ostream& os, const M_Ddm_Unassociate_Region& msg);
protected:
    ObjectHandle object;
    RegionHandle region;
};

std::ostream& operator<<(std::ostream& os, const M_Ddm_Unassociate_Region& msg);

class CERTI_EXPORT M_Ddm_Subscribe_Attributes : public Message {
public:
    M_Ddm_Subscribe_Attributes();
    virtual ~M_Ddm_Subscribe_Attributes() = default;

    virtual void serialize(libhla::MessageBuffer& msgBuffer);
    virtual void deserialize(libhla::MessageBuffer& msgBuffer);

    // Attributes accessors and mutators
    const ObjectClassHandle& getObjectClass() const
    {
        return objectClass;
    }

    void setObjectClass(const ObjectClassHandle& newObjectClass)
    {
        objectClass = newObjectClass;
    }

    const RegionHandle& getRegion() const
    {
        return region;
    }

    void setRegion(const RegionHandle& newRegion)
    {
        region = newRegion;
    }

    void passiveOn()
    {
        passive = true;
    }

    void passiveOff()
    {
        passive = false;
    }

    bool isPassiveOn() const
    {
        return passive;
    }

    uint32_t getAttributesSize() const
    {
        return attributes.size();
    }

    void setAttributesSize(uint32_t num)
    {
        attributes.resize(num);
    }

    const std::vector<AttributeHandle>& getAttributes() const
    {
        return attributes;
    }

    const AttributeHandle& getAttributes(uint32_t rank) const
    {
        return attributes[rank];
    }

    AttributeHandle& getAttributes(uint32_t rank)
    {
        return attributes[rank];
    }

    void setAttributes(const AttributeHandle& newAttributes, uint32_t rank)
    {
        attributes[rank] = newAttributes;
    }

    void removeAttributes(uint32_t rank)
    {
        attributes.erase(attributes.begin() + rank);
    }

    using Super = Message;
    
    friend std::ostream& operator<<(std::ostream& os, const M_Ddm_Subscribe_Attributes& msg);
protected:
    ObjectClassHandle objectClass;
    RegionHandle region;
    bool passive;
    std::vector<AttributeHandle> attributes;
};

std::ostream& operator<<(std::ostream& os, const M_Ddm_Subscribe_Attributes& msg);

class CERTI_EXPORT M_Ddm_Unsubscribe_Attributes : public Message {
public:
    M_Ddm_Unsubscribe_Attributes();
    virtual ~M_Ddm_Unsubscribe_Attributes() = default;

    virtual void serialize(libhla::MessageBuffer& msgBuffer);
    virtual void deserialize(libhla::MessageBuffer& msgBuffer);

    // Attributes accessors and mutators
    const ObjectClassHandle& getObjectClass() const
    {
        return objectClass;
    }

    void setObjectClass(const ObjectClassHandle& newObjectClass)
    {
        objectClass = newObjectClass;
    }

    const RegionHandle& getRegion() const
    {
        return region;
    }

    void setRegion(const RegionHandle& newRegion)
    {
        region = newRegion;
    }

    using Super = Message;
    
    friend std::ostream& operator<<(std::ostream& os, const M_Ddm_Unsubscribe_Attributes& msg);
protected:
    ObjectClassHandle objectClass;
    RegionHandle region;
};

std::ostream& operator<<(std::ostream& os, const M_Ddm_Unsubscribe_Attributes& msg);

class CERTI_EXPORT M_Ddm_Subscribe_Interaction : public Message {
public:
    M_Ddm_Subscribe_Interaction();
    virtual ~M_Ddm_Subscribe_Interaction() = default;

    virtual void serialize(libhla::MessageBuffer& msgBuffer);
    virtual void deserialize(libhla::MessageBuffer& msgBuffer);

    // Attributes accessors and mutators
    const InteractionClassHandle& getInteractionClass() const
    {
        return interactionClass;
    }

    void setInteractionClass(const InteractionClassHandle& newInteractionClass)
    {
        interactionClass = newInteractionClass;
    }

    const RegionHandle& getRegion() const
    {
        return region;
    }

    void setRegion(const RegionHandle& newRegion)
    {
        region = newRegion;
    }

    void passiveOn()
    {
        passive = true;
    }

    void passiveOff()
    {
        passive = false;
    }

    bool isPassiveOn() const
    {
        return passive;
    }

    using Super = Message;
    
    friend std::ostream& operator<<(std::ostream& os, const M_Ddm_Subscribe_Interaction& msg);
protected:
    InteractionClassHandle interactionClass;
    RegionHandle region;
    bool passive;
};

std::ostream& operator<<(std::ostream& os, const M_Ddm_Subscribe_Interaction& msg);

class CERTI_EXPORT M_Ddm_Unsubscribe_Interaction : public Message {
public:
    M_Ddm_Unsubscribe_Interaction();
    virtual ~M_Ddm_Unsubscribe_Interaction() = default;

    virtual void serialize(libhla::MessageBuffer& msgBuffer);
    virtual void deserialize(libhla::MessageBuffer& msgBuffer);

    // Attributes accessors and mutators
    const InteractionClassHandle& getInteractionClass() const
    {
        return interactionClass;
    }

    void setInteractionClass(const InteractionClassHandle& newInteractionClass)
    {
        interactionClass = newInteractionClass;
    }

    const RegionHandle& getRegion() const
    {
        return region;
    }

    void setRegion(const RegionHandle& newRegion)
    {
        region = newRegion;
    }

    void passiveOn()
    {
        passive = true;
    }

    void passiveOff()
    {
        passive = false;
    }

    bool isPassiveOn() const
    {
        return passive;
    }

    using Super = Message;
    
    friend std::ostream& operator<<(std::ostream& os, const M_Ddm_Unsubscribe_Interaction& msg);
protected:
    InteractionClassHandle interactionClass;
    RegionHandle region;
    bool passive;
};

std::ostream& operator<<(std::ostream& os, const M_Ddm_Unsubscribe_Interaction& msg);

class CERTI_EXPORT M_Ddm_Request_Update : public Message {
public:
    M_Ddm_Request_Update();
    virtual ~M_Ddm_Request_Update() = default;

    virtual void serialize(libhla::MessageBuffer& msgBuffer);
    virtual void deserialize(libhla::MessageBuffer& msgBuffer);

    // Attributes accessors and mutators
    const ObjectClassHandle& getObjectClass() const
    {
        return objectClass;
    }

    void setObjectClass(const ObjectClassHandle& newObjectClass)
    {
        objectClass = newObjectClass;
    }

    const RegionHandle& getRegion() const
    {
        return region;
    }

    void setRegion(const RegionHandle& newRegion)
    {
        region = newRegion;
    }

    uint32_t getAttributesSize() const
    {
        return attributes.size();
    }

    void setAttributesSize(uint32_t num)
    {
        attributes.resize(num);
    }

    const std::vector<AttributeHandle>& getAttributes() const
    {
        return attributes;
    }

    const AttributeHandle& getAttributes(uint32_t rank) const
    {
        return attributes[rank];
    }

    AttributeHandle& getAttributes(uint32_t rank)
    {
        return attributes[rank];
    }

    void setAttributes(const AttributeHandle& newAttributes, uint32_t rank)
    {
        attributes[rank] = newAttributes;
    }

    void removeAttributes(uint32_t rank)
    {
        attributes.erase(attributes.begin() + rank);
    }

    using Super = Message;
    
    friend std::ostream& operator<<(std::ostream& os, const M_Ddm_Request_Update& msg);
protected:
    ObjectClassHandle objectClass;
    RegionHandle region;
    std::vector<AttributeHandle> attributes;
};

std::ostream& operator<<(std::ostream& os, const M_Ddm_Request_Update& msg);
// Support Services
class CERTI_EXPORT M_Get_Object_Class_Handle : public Message {
public:
    M_Get_Object_Class_Handle();
    virtual ~M_Get_Object_Class_Handle() = default;

    virtual void serialize(libhla::MessageBuffer& msgBuffer);
    virtual void deserialize(libhla::MessageBuffer& msgBuffer);

    // Attributes accessors and mutators
    const ObjectClassHandle& getObjectClass() const
    {
        return objectClass;
    }

    void setObjectClass(const ObjectClassHandle& newObjectClass)
    {
        objectClass = newObjectClass;
    }

    const std::string& getClassName() const
    {
        return className;
    }

    void setClassName(const std::string& newClassName)
    {
        className = newClassName;
    }

    using Super = Message;
    
    friend std::ostream& operator<<(std::ostream& os, const M_Get_Object_Class_Handle& msg);
protected:
    ObjectClassHandle objectClass;
    std::string className;
};

std::ostream& operator<<(std::ostream& os, const M_Get_Object_Class_Handle& msg);

class CERTI_EXPORT M_Get_Object_Class_Name : public Message {
public:
    M_Get_Object_Class_Name();
    virtual ~M_Get_Object_Class_Name() = default;

    virtual void serialize(libhla::MessageBuffer& msgBuffer);
    virtual void deserialize(libhla::MessageBuffer& msgBuffer);

    // Attributes accessors and mutators
    const ObjectClassHandle& getObjectClass() const
    {
        return objectClass;
    }

    void setObjectClass(const ObjectClassHandle& newObjectClass)
    {
        objectClass = newObjectClass;
    }

    const std::string& getClassName() const
    {
        return className;
    }

    void setClassName(const std::string& newClassName)
    {
        className = newClassName;
    }

    using Super = Message;
    
    friend std::ostream& operator<<(std::ostream& os, const M_Get_Object_Class_Name& msg);
protected:
    ObjectClassHandle objectClass;
    std::string className;
};

std::ostream& operator<<(std::ostream& os, const M_Get_Object_Class_Name& msg);

class CERTI_EXPORT M_Get_Attribute_Handle : public Message {
public:
    M_Get_Attribute_Handle();
    virtual ~M_Get_Attribute_Handle() = default;

    virtual void serialize(libhla::MessageBuffer& msgBuffer);
    virtual void deserialize(libhla::MessageBuffer& msgBuffer);

    // Attributes accessors and mutators
    const ObjectClassHandle& getObjectClass() const
    {
        return objectClass;
    }

    void setObjectClass(const ObjectClassHandle& newObjectClass)
    {
        objectClass = newObjectClass;
    }

    const std::string& getAttributeName() const
    {
        return attributeName;
    }

    void setAttributeName(const std::string& newAttributeName)
    {
        attributeName = newAttributeName;
    }

    const AttributeHandle& getAttribute() const
    {
        return attribute;
    }

    void setAttribute(const AttributeHandle& newAttribute)
    {
        attribute = newAttribute;
    }

    using Super = Message;
    
    friend std::ostream& operator<<(std::ostream& os, const M_Get_Attribute_Handle& msg);
protected:
    ObjectClassHandle objectClass;
    std::string attributeName;
    AttributeHandle attribute;
};

std::ostream& operator<<(std::ostream& os, const M_Get_Attribute_Handle& msg);

class CERTI_EXPORT M_Get_Attribute_Name : public Message {
public:
    M_Get_Attribute_Name();
    virtual ~M_Get_Attribute_Name() = default;

    virtual void serialize(libhla::MessageBuffer& msgBuffer);
    virtual void deserialize(libhla::MessageBuffer& msgBuffer);

    // Attributes accessors and mutators
    const ObjectClassHandle& getObjectClass() const
    {
        return objectClass;
    }

    void setObjectClass(const ObjectClassHandle& newObjectClass)
    {
        objectClass = newObjectClass;
    }

    const std::string& getAttributeName() const
    {
        return attributeName;
    }

    void setAttributeName(const std::string& newAttributeName)
    {
        attributeName = newAttributeName;
    }

    const AttributeHandle& getAttribute() const
    {
        return attribute;
    }

    void setAttribute(const AttributeHandle& newAttribute)
    {
        attribute = newAttribute;
    }

    using Super = Message;
    
    friend std::ostream& operator<<(std::ostream& os, const M_Get_Attribute_Name& msg);
protected:
    ObjectClassHandle objectClass;
    std::string attributeName;
    AttributeHandle attribute;
};

std::ostream& operator<<(std::ostream& os, const M_Get_Attribute_Name& msg);

class CERTI_EXPORT M_Get_Interaction_Class_Handle : public Message {
public:
    M_Get_Interaction_Class_Handle();
    virtual ~M_Get_Interaction_Class_Handle() = default;

    virtual void serialize(libhla::MessageBuffer& msgBuffer);
    virtual void deserialize(libhla::MessageBuffer& msgBuffer);

    // Attributes accessors and mutators
    const InteractionClassHandle& getInteractionClass() const
    {
        return interactionClass;
    }

    void setInteractionClass(const InteractionClassHandle& newInteractionClass)
    {
        interactionClass = newInteractionClass;
    }

    const std::string& getClassName() const
    {
        return className;
    }

    void setClassName(const std::string& newClassName)
    {
        className = newClassName;
    }

    using Super = Message;
    
    friend std::ostream& operator<<(std::ostream& os, const M_Get_Interaction_Class_Handle& msg);
protected:
    InteractionClassHandle interactionClass;
    std::string className;
};

std::ostream& operator<<(std::ostream& os, const M_Get_Interaction_Class_Handle& msg);

class CERTI_EXPORT M_Get_Interaction_Class_Name : public Message {
public:
    M_Get_Interaction_Class_Name();
    virtual ~M_Get_Interaction_Class_Name() = default;

    virtual void serialize(libhla::MessageBuffer& msgBuffer);
    virtual void deserialize(libhla::MessageBuffer& msgBuffer);

    // Attributes accessors and mutators
    const InteractionClassHandle& getInteractionClass() const
    {
        return interactionClass;
    }

    void setInteractionClass(const InteractionClassHandle& newInteractionClass)
    {
        interactionClass = newInteractionClass;
    }

    const std::string& getClassName() const
    {
        return className;
    }

    void setClassName(const std::string& newClassName)
    {
        className = newClassName;
    }

    using Super = Message;
    
    friend std::ostream& operator<<(std::ostream& os, const M_Get_Interaction_Class_Name& msg);
protected:
    InteractionClassHandle interactionClass;
    std::string className;
};

std::ostream& operator<<(std::ostream& os, const M_Get_Interaction_Class_Name& msg);

class CERTI_EXPORT M_Get_Parameter_Handle : public Message {
public:
    M_Get_Parameter_Handle();
    virtual ~M_Get_Parameter_Handle() = default;

    virtual void serialize(libhla::MessageBuffer& msgBuffer);
    virtual void deserialize(libhla::MessageBuffer& msgBuffer);

    // Attributes accessors and mutators
    const InteractionClassHandle& getInteractionClass() const
    {
        return interactionClass;
    }

    void setInteractionClass(const InteractionClassHandle& newInteractionClass)
    {
        interactionClass = newInteractionClass;
    }

    const std::string& getParameterName() const
    {
        return parameterName;
    }

    void setParameterName(const std::string& newParameterName)
    {
        parameterName = newParameterName;
    }

    const ParameterHandle& getParameter() const
    {
        return parameter;
    }

    void setParameter(const ParameterHandle& newParameter)
    {
        parameter = newParameter;
    }

    using Super = Message;
    
    friend std::ostream& operator<<(std::ostream& os, const M_Get_Parameter_Handle& msg);
protected:
    InteractionClassHandle interactionClass;
    std::string parameterName;
    ParameterHandle parameter;
};

std::ostream& operator<<(std::ostream& os, const M_Get_Parameter_Handle& msg);

class CERTI_EXPORT M_Get_Parameter_Name : public Message {
public:
    M_Get_Parameter_Name();
    virtual ~M_Get_Parameter_Name() = default;

    virtual void serialize(libhla::MessageBuffer& msgBuffer);
    virtual void deserialize(libhla::MessageBuffer& msgBuffer);

    // Attributes accessors and mutators
    const InteractionClassHandle& getInteractionClass() const
    {
        return interactionClass;
    }

    void setInteractionClass(const InteractionClassHandle& newInteractionClass)
    {
        interactionClass = newInteractionClass;
    }

    const std::string& getParameterName() const
    {
        return parameterName;
    }

    void setParameterName(const std::string& newParameterName)
    {
        parameterName = newParameterName;
    }

    const ParameterHandle& getParameter() const
    {
        return parameter;
    }

    void setParameter(const ParameterHandle& newParameter)
    {
        parameter = newParameter;
    }

    using Super = Message;
    
    friend std::ostream& operator<<(std::ostream& os, const M_Get_Parameter_Name& msg);
protected:
    InteractionClassHandle interactionClass;
    std::string parameterName;
    ParameterHandle parameter;
};

std::ostream& operator<<(std::ostream& os, const M_Get_Parameter_Name& msg);

class CERTI_EXPORT M_Get_Object_Instance_Handle : public Message {
public:
    M_Get_Object_Instance_Handle();
    virtual ~M_Get_Object_Instance_Handle() = default;

    virtual void serialize(libhla::MessageBuffer& msgBuffer);
    virtual void deserialize(libhla::MessageBuffer& msgBuffer);

    // Attributes accessors and mutators
    const ObjectHandle& getObject() const
    {
        return object;
    }

    void setObject(const ObjectHandle& newObject)
    {
        object = newObject;
    }

    const std::string& getObjectInstanceName() const
    {
        return objectInstanceName;
    }

    void setObjectInstanceName(const std::string& newObjectInstanceName)
    {
        objectInstanceName = newObjectInstanceName;
    }

    using Super = Message;
    
    friend std::ostream& operator<<(std::ostream& os, const M_Get_Object_Instance_Handle& msg);
protected:
    ObjectHandle object;
    std::string objectInstanceName;
};

std::ostream& operator<<(std::ostream& os, const M_Get_Object_Instance_Handle& msg);

class CERTI_EXPORT M_Get_Object_Instance_Name : public Message {
public:
    M_Get_Object_Instance_Name();
    virtual ~M_Get_Object_Instance_Name() = default;

    virtual void serialize(libhla::MessageBuffer& msgBuffer);
    virtual void deserialize(libhla::MessageBuffer& msgBuffer);

    // Attributes accessors and mutators
    const ObjectHandle& getObject() const
    {
        return object;
    }

    void setObject(const ObjectHandle& newObject)
    {
        object = newObject;
    }

    const std::string& getObjectInstanceName() const
    {
        return objectInstanceName;
    }

    void setObjectInstanceName(const std::string& newObjectInstanceName)
    {
        objectInstanceName = newObjectInstanceName;
    }

    using Super = Message;
    
    friend std::ostream& operator<<(std::ostream& os, const M_Get_Object_Instance_Name& msg);
protected:
    ObjectHandle object;
    std::string objectInstanceName;
};

std::ostream& operator<<(std::ostream& os, const M_Get_Object_Instance_Name& msg);

class CERTI_EXPORT M_Get_Space_Handle : public Message {
public:
    M_Get_Space_Handle();
    virtual ~M_Get_Space_Handle() = default;

    virtual void serialize(libhla::MessageBuffer& msgBuffer);
    virtual void deserialize(libhla::MessageBuffer& msgBuffer);

    // Attributes accessors and mutators
    const std::string& getSpaceName() const
    {
        return spaceName;
    }

    void setSpaceName(const std::string& newSpaceName)
    {
        spaceName = newSpaceName;
    }

    const SpaceHandle& getSpace() const
    {
        return space;
    }

    void setSpace(const SpaceHandle& newSpace)
    {
        space = newSpace;
    }

    using Super = Message;
    
    friend std::ostream& operator<<(std::ostream& os, const M_Get_Space_Handle& msg);
protected:
    std::string spaceName;
    SpaceHandle space;
};

std::ostream& operator<<(std::ostream& os, const M_Get_Space_Handle& msg);

class CERTI_EXPORT M_Get_Space_Name : public Message {
public:
    M_Get_Space_Name();
    virtual ~M_Get_Space_Name() = default;

    virtual void serialize(libhla::MessageBuffer& msgBuffer);
    virtual void deserialize(libhla::MessageBuffer& msgBuffer);

    // Attributes accessors and mutators
    const std::string& getSpaceName() const
    {
        return spaceName;
    }

    void setSpaceName(const std::string& newSpaceName)
    {
        spaceName = newSpaceName;
    }

    const SpaceHandle& getSpace() const
    {
        return space;
    }

    void setSpace(const SpaceHandle& newSpace)
    {
        space = newSpace;
    }

    using Super = Message;
    
    friend std::ostream& operator<<(std::ostream& os, const M_Get_Space_Name& msg);
protected:
    std::string spaceName;
    SpaceHandle space;
};

std::ostream& operator<<(std::ostream& os, const M_Get_Space_Name& msg);

class CERTI_EXPORT M_Get_Dimension_Handle : public Message {
public:
    M_Get_Dimension_Handle();
    virtual ~M_Get_Dimension_Handle() = default;

    virtual void serialize(libhla::MessageBuffer& msgBuffer);
    virtual void deserialize(libhla::MessageBuffer& msgBuffer);

    // Attributes accessors and mutators
    const std::string& getDimensionName() const
    {
        return dimensionName;
    }

    void setDimensionName(const std::string& newDimensionName)
    {
        dimensionName = newDimensionName;
    }

    const SpaceHandle& getSpace() const
    {
        return space;
    }

    void setSpace(const SpaceHandle& newSpace)
    {
        space = newSpace;
    }

    const DimensionHandle& getDimension() const
    {
        return dimension;
    }

    void setDimension(const DimensionHandle& newDimension)
    {
        dimension = newDimension;
    }

    using Super = Message;
    
    friend std::ostream& operator<<(std::ostream& os, const M_Get_Dimension_Handle& msg);
protected:
    std::string dimensionName;
    SpaceHandle space;
    DimensionHandle dimension;
};

std::ostream& operator<<(std::ostream& os, const M_Get_Dimension_Handle& msg);

class CERTI_EXPORT M_Get_Dimension_Name : public Message {
public:
    M_Get_Dimension_Name();
    virtual ~M_Get_Dimension_Name() = default;

    virtual void serialize(libhla::MessageBuffer& msgBuffer);
    virtual void deserialize(libhla::MessageBuffer& msgBuffer);

    // Attributes accessors and mutators
    const std::string& getDimensionName() const
    {
        return dimensionName;
    }

    void setDimensionName(const std::string& newDimensionName)
    {
        dimensionName = newDimensionName;
    }

    const SpaceHandle& getSpace() const
    {
        return space;
    }

    void setSpace(const SpaceHandle& newSpace)
    {
        space = newSpace;
    }

    const DimensionHandle& getDimension() const
    {
        return dimension;
    }

    void setDimension(const DimensionHandle& newDimension)
    {
        dimension = newDimension;
    }

    using Super = Message;
    
    friend std::ostream& operator<<(std::ostream& os, const M_Get_Dimension_Name& msg);
protected:
    std::string dimensionName;
    SpaceHandle space;
    DimensionHandle dimension;
};

std::ostream& operator<<(std::ostream& os, const M_Get_Dimension_Name& msg);

class CERTI_EXPORT M_Get_Attribute_Space_Handle : public Message {
public:
    M_Get_Attribute_Space_Handle();
    virtual ~M_Get_Attribute_Space_Handle() = default;

    virtual void serialize(libhla::MessageBuffer& msgBuffer);
    virtual void deserialize(libhla::MessageBuffer& msgBuffer);

    // Attributes accessors and mutators
    const ObjectClassHandle& getObjectClass() const
    {
        return objectClass;
    }

    void setObjectClass(const ObjectClassHandle& newObjectClass)
    {
        objectClass = newObjectClass;
    }

    const AttributeHandle& getAttribute() const
    {
        return attribute;
    }

    void setAttribute(const AttributeHandle& newAttribute)
    {
        attribute = newAttribute;
    }

    const SpaceHandle& getSpace() const
    {
        return space;
    }

    void setSpace(const SpaceHandle& newSpace)
    {
        space = newSpace;
    }

    using Super = Message;
    
    friend std::ostream& operator<<(std::ostream& os, const M_Get_Attribute_Space_Handle& msg);
protected:
    ObjectClassHandle objectClass;
    AttributeHandle attribute;
    SpaceHandle space;
};

std::ostream& operator<<(std::ostream& os, const M_Get_Attribute_Space_Handle& msg);

class CERTI_EXPORT M_Get_Object_Class : public Message {
public:
    M_Get_Object_Class();
    virtual ~M_Get_Object_Class() = default;

    virtual void serialize(libhla::MessageBuffer& msgBuffer);
    virtual void deserialize(libhla::MessageBuffer& msgBuffer);

    // Attributes accessors and mutators
    const ObjectClassHandle& getObjectClass() const
    {
        return objectClass;
    }

    void setObjectClass(const ObjectClassHandle& newObjectClass)
    {
        objectClass = newObjectClass;
    }

    const ObjectHandle& getObject() const
    {
        return object;
    }

    void setObject(const ObjectHandle& newObject)
    {
        object = newObject;
    }

    using Super = Message;
    
    friend std::ostream& operator<<(std::ostream& os, const M_Get_Object_Class& msg);
protected:
    ObjectClassHandle objectClass;
    ObjectHandle object;
};

std::ostream& operator<<(std::ostream& os, const M_Get_Object_Class& msg);

class CERTI_EXPORT M_Get_Interaction_Space_Handle : public Message {
public:
    M_Get_Interaction_Space_Handle();
    virtual ~M_Get_Interaction_Space_Handle() = default;

    virtual void serialize(libhla::MessageBuffer& msgBuffer);
    virtual void deserialize(libhla::MessageBuffer& msgBuffer);

    // Attributes accessors and mutators
    const InteractionClassHandle& getInteractionClass() const
    {
        return interactionClass;
    }

    void setInteractionClass(const InteractionClassHandle& newInteractionClass)
    {
        interactionClass = newInteractionClass;
    }

    const SpaceHandle& getSpace() const
    {
        return space;
    }

    void setSpace(const SpaceHandle& newSpace)
    {
        space = newSpace;
    }

    using Super = Message;
    
    friend std::ostream& operator<<(std::ostream& os, const M_Get_Interaction_Space_Handle& msg);
protected:
    InteractionClassHandle interactionClass;
    SpaceHandle space;
};

std::ostream& operator<<(std::ostream& os, const M_Get_Interaction_Space_Handle& msg);

class CERTI_EXPORT M_Get_Transportation_Handle : public Message {
public:
    M_Get_Transportation_Handle();
    virtual ~M_Get_Transportation_Handle() = default;

    virtual void serialize(libhla::MessageBuffer& msgBuffer);
    virtual void deserialize(libhla::MessageBuffer& msgBuffer);

    // Attributes accessors and mutators
    const std::string& getTransportationName() const
    {
        return transportationName;
    }

    void setTransportationName(const std::string& newTransportationName)
    {
        transportationName = newTransportationName;
    }

    const TransportType& getTransportation() const
    {
        return transportation;
    }

    void setTransportation(const TransportType& newTransportation)
    {
        transportation = newTransportation;
    }

    using Super = Message;
    
    friend std::ostream& operator<<(std::ostream& os, const M_Get_Transportation_Handle& msg);
protected:
    std::string transportationName;
    TransportType transportation;
};

std::ostream& operator<<(std::ostream& os, const M_Get_Transportation_Handle& msg);

class CERTI_EXPORT M_Get_Transportation_Name : public Message {
public:
    M_Get_Transportation_Name();
    virtual ~M_Get_Transportation_Name() = default;

    virtual void serialize(libhla::MessageBuffer& msgBuffer);
    virtual void deserialize(libhla::MessageBuffer& msgBuffer);

    // Attributes accessors and mutators
    const std::string& getTransportationName() const
    {
        return transportationName;
    }

    void setTransportationName(const std::string& newTransportationName)
    {
        transportationName = newTransportationName;
    }

    const TransportType& getTransportation() const
    {
        return transportation;
    }

    void setTransportation(const TransportType& newTransportation)
    {
        transportation = newTransportation;
    }

    using Super = Message;
    
    friend std::ostream& operator<<(std::ostream& os, const M_Get_Transportation_Name& msg);
protected:
    std::string transportationName;
    TransportType transportation;
};

std::ostream& operator<<(std::ostream& os, const M_Get_Transportation_Name& msg);

class CERTI_EXPORT M_Get_Ordering_Handle : public Message {
public:
    M_Get_Ordering_Handle();
    virtual ~M_Get_Ordering_Handle() = default;

    virtual void serialize(libhla::MessageBuffer& msgBuffer);
    virtual void deserialize(libhla::MessageBuffer& msgBuffer);

    // Attributes accessors and mutators
    const std::string& getOrderingName() const
    {
        return orderingName;
    }

    void setOrderingName(const std::string& newOrderingName)
    {
        orderingName = newOrderingName;
    }

    const OrderType& getOrdering() const
    {
        return ordering;
    }

    void setOrdering(const OrderType& newOrdering)
    {
        ordering = newOrdering;
    }

    using Super = Message;
    
    friend std::ostream& operator<<(std::ostream& os, const M_Get_Ordering_Handle& msg);
protected:
    std::string orderingName;
    OrderType ordering;
};

std::ostream& operator<<(std::ostream& os, const M_Get_Ordering_Handle& msg);

class CERTI_EXPORT M_Get_Ordering_Name : public Message {
public:
    M_Get_Ordering_Name();
    virtual ~M_Get_Ordering_Name() = default;

    virtual void serialize(libhla::MessageBuffer& msgBuffer);
    virtual void deserialize(libhla::MessageBuffer& msgBuffer);

    // Attributes accessors and mutators
    const std::string& getOrderingName() const
    {
        return orderingName;
    }

    void setOrderingName(const std::string& newOrderingName)
    {
        orderingName = newOrderingName;
    }

    const OrderType& getOrdering() const
    {
        return ordering;
    }

    void setOrdering(const OrderType& newOrdering)
    {
        ordering = newOrdering;
    }

    using Super = Message;
    
    friend std::ostream& operator<<(std::ostream& os, const M_Get_Ordering_Name& msg);
protected:
    std::string orderingName;
    OrderType ordering;
};

std::ostream& operator<<(std::ostream& os, const M_Get_Ordering_Name& msg);

class CERTI_EXPORT M_Enable_Class_Relevance_Advisory_Switch : public Message {
public:
    M_Enable_Class_Relevance_Advisory_Switch();
    virtual ~M_Enable_Class_Relevance_Advisory_Switch() = default;

protected:
};

std::ostream& operator<<(std::ostream& os, const M_Enable_Class_Relevance_Advisory_Switch& msg);

class CERTI_EXPORT M_Disable_Class_Relevance_Advisory_Switch : public Message {
public:
    M_Disable_Class_Relevance_Advisory_Switch();
    virtual ~M_Disable_Class_Relevance_Advisory_Switch() = default;

protected:
};

std::ostream& operator<<(std::ostream& os, const M_Disable_Class_Relevance_Advisory_Switch& msg);

class CERTI_EXPORT M_Enable_Attribute_Relevance_Advisory_Switch : public Message {
public:
    M_Enable_Attribute_Relevance_Advisory_Switch();
    virtual ~M_Enable_Attribute_Relevance_Advisory_Switch() = default;

protected:
};

std::ostream& operator<<(std::ostream& os, const M_Enable_Attribute_Relevance_Advisory_Switch& msg);

class CERTI_EXPORT M_Disable_Attribute_Relevance_Advisory_Switch : public Message {
public:
    M_Disable_Attribute_Relevance_Advisory_Switch();
    virtual ~M_Disable_Attribute_Relevance_Advisory_Switch() = default;

protected:
};

std::ostream& operator<<(std::ostream& os, const M_Disable_Attribute_Relevance_Advisory_Switch& msg);

class CERTI_EXPORT M_Enable_Attribute_Scope_Advisory_Switch : public Message {
public:
    M_Enable_Attribute_Scope_Advisory_Switch();
    virtual ~M_Enable_Attribute_Scope_Advisory_Switch() = default;

protected:
};

std::ostream& operator<<(std::ostream& os, const M_Enable_Attribute_Scope_Advisory_Switch& msg);

class CERTI_EXPORT M_Disable_Attribute_Scope_Advisory_Switch : public Message {
public:
    M_Disable_Attribute_Scope_Advisory_Switch();
    virtual ~M_Disable_Attribute_Scope_Advisory_Switch() = default;

protected:
};

std::ostream& operator<<(std::ostream& os, const M_Disable_Attribute_Scope_Advisory_Switch& msg);

class CERTI_EXPORT M_Enable_Interaction_Relevance_Advisory_Switch : public Message {
public:
    M_Enable_Interaction_Relevance_Advisory_Switch();
    virtual ~M_Enable_Interaction_Relevance_Advisory_Switch() = default;

protected:
};

std::ostream& operator<<(std::ostream& os, const M_Enable_Interaction_Relevance_Advisory_Switch& msg);

class CERTI_EXPORT M_Disable_Interaction_Relevance_Advisory_Switch : public Message {
public:
    M_Disable_Interaction_Relevance_Advisory_Switch();
    virtual ~M_Disable_Interaction_Relevance_Advisory_Switch() = default;

protected:
};

std::ostream& operator<<(std::ostream& os, const M_Disable_Interaction_Relevance_Advisory_Switch& msg);

class CERTI_EXPORT M_Tick_Request : public Message {
public:
    M_Tick_Request();
    virtual ~M_Tick_Request() = default;

    virtual void serialize(libhla::MessageBuffer& msgBuffer);
    virtual void deserialize(libhla::MessageBuffer& msgBuffer);

    // Attributes accessors and mutators
    const bool& getMultiple() const
    {
        return multiple;
    }

    void setMultiple(const bool& newMultiple)
    {
        multiple = newMultiple;
    }

    const double& getMinTickTime() const
    {
        return minTickTime;
    }

    void setMinTickTime(const double& newMinTickTime)
    {
        minTickTime = newMinTickTime;
    }

    const double& getMaxTickTime() const
    {
        return maxTickTime;
    }

    void setMaxTickTime(const double& newMaxTickTime)
    {
        maxTickTime = newMaxTickTime;
    }

    using Super = Message;
    
    friend std::ostream& operator<<(std::ostream& os, const M_Tick_Request& msg);
protected:
    bool multiple;
    double minTickTime;
    double maxTickTime;
};

std::ostream& operator<<(std::ostream& os, const M_Tick_Request& msg);

class CERTI_EXPORT M_Tick_Request_Next : public Message {
public:
    M_Tick_Request_Next();
    virtual ~M_Tick_Request_Next() = default;

protected:
};

std::ostream& operator<<(std::ostream& os, const M_Tick_Request_Next& msg);

class CERTI_EXPORT M_Tick_Request_Stop : public Message {
public:
    M_Tick_Request_Stop();
    virtual ~M_Tick_Request_Stop() = default;

protected:
};

std::ostream& operator<<(std::ostream& os, const M_Tick_Request_Stop& msg);
// HLA 1516 - §6.2
class CERTI_EXPORT M_Reserve_Object_Instance_Name : public Message {
public:
    M_Reserve_Object_Instance_Name();
    virtual ~M_Reserve_Object_Instance_Name() = default;

    virtual void serialize(libhla::MessageBuffer& msgBuffer);
    virtual void deserialize(libhla::MessageBuffer& msgBuffer);

    // Attributes accessors and mutators
    const std::string& getObjectName() const
    {
        return objectName;
    }

    void setObjectName(const std::string& newObjectName)
    {
        objectName = newObjectName;
    }

    using Super = Message;
    
    friend std::ostream& operator<<(std::ostream& os, const M_Reserve_Object_Instance_Name& msg);
protected:
    std::string objectName;
};

std::ostream& operator<<(std::ostream& os, const M_Reserve_Object_Instance_Name& msg);
// HLA 1516 - §6.3
class CERTI_EXPORT M_Reserve_Object_Instance_Name_Succeeded : public M_Reserve_Object_Instance_Name {
public:
    M_Reserve_Object_Instance_Name_Succeeded();
    virtual ~M_Reserve_Object_Instance_Name_Succeeded() = default;

protected:
};

std::ostream& operator<<(std::ostream& os, const M_Reserve_Object_Instance_Name_Succeeded& msg);

class CERTI_EXPORT M_Reserve_Object_Instance_Name_Failed : public M_Reserve_Object_Instance_Name {
public:
    M_Reserve_Object_Instance_Name_Failed();
    virtual ~M_Reserve_Object_Instance_Name_Failed() = default;

protected:
};

std::ostream& operator<<(std::ostream& os, const M_Reserve_Object_Instance_Name_Failed& msg);

class CERTI_EXPORT M_Factory {
    public:
        static Message* create(M_Type type) throw (NetworkError ,NetworkSignal); 
        static Message* receive(MStreamType stream) throw (NetworkError ,NetworkSignal); 
    protected:
    private:
};

} // end of namespace certi 
// M_CLASSES_HH
#endif
