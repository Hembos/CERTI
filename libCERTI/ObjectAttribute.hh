// ----------------------------------------------------------------------------
// CERTI - HLA RunTime Infrastructure
// Copyright (C) 2002, 2003  ONERA
//
// This file is part of CERTI-libCERTI
//
// CERTI-libCERTI is free software ; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public License
// as published by the Free Software Foundation ; either version 2 of
// the License, or (at your option) any later version.
//
// CERTI-libCERTI is distributed in the hope that it will be useful, but
// WITHOUT ANY WARRANTY ; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
// Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public
// License along with this program ; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307
// USA
//
// $Id: ObjectAttribute.hh,v 3.12 2004/05/18 13:18:54 breholee Exp $
// ----------------------------------------------------------------------------

#ifndef _CERTI_OBJECT_ATTRIBUTE_HH
#define _CERTI_OBJECT_ATTRIBUTE_HH

#include "certi.hh"

#include <list>

namespace certi {

class RegionImp ;

class ObjectClassAttribute ;

//! Object attribute information.
/*! This class maintains information about an attribute:
  - handle,
  - ownerCandidates,
  - current owner,
  - divesting state.
*/
class ObjectAttribute {

public:
    // Public Methods

    // Constructors & Destructors
    ObjectAttribute(); //!< Declared by not defined (Don't call it).
    ObjectAttribute(AttributeHandle, FederateHandle, ObjectClassAttribute *);
    ~ObjectAttribute();

    void display() const ;

    FederateHandle getOwner() const ;
    void setOwner(FederateHandle NewOwner);

    void setDivesting(Boolean divesting_state);
    Boolean beingDivested() const ;

    int isCandidate(FederateHandle candidate) const ;
    void addCandidate(FederateHandle candidate);
    void removeCandidate(FederateHandle candidate);
    FederateHandle getCandidate(unsigned int) const throw (RTIinternalError);
    bool hasCandidates() const ;

    AttributeHandle getHandle() const ;
    void setHandle(AttributeHandle h);

    SpaceHandle getSpace() const ;
    void setSpace(SpaceHandle);

    ObjectClassAttribute *getObjectClassAttribute() const { return source ; };

    void associate(RegionImp *);
    void unassociate(RegionImp *);
    
private:
    // Private Attributes
    AttributeHandle handle ; //!< The object attribute handle.
    FederateHandle owner ; //!< Federate who owns the attribute.
    Boolean divesting ; //!< Divesting state.
    std::list<FederateHandle> ownerCandidates ; //!< Federates candidate.
    SpaceHandle space ; //!< Associated routing space
    ObjectClassAttribute *source ; //!< The associated class attribute.
    RegionImp *region ;
};

}

#endif // _CERTI_OBJECT_ATTRIBUTE_HH

// $Id: ObjectAttribute.hh,v 3.12 2004/05/18 13:18:54 breholee Exp $
