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
// $Id: InteractionBroadcastList.hh,v 3.6 2004/05/18 13:18:53 breholee Exp $
// ----------------------------------------------------------------------------

#ifndef _CERTI_INTERACTION_BROADCAST_LIST_HH
#define _CERTI_INTERACTION_BROADCAST_LIST_HH

#include "certi.hh"
#include "NetworkMessage.hh"
#include "InteractionBroadcastLine.hh"
#include "SecurityServer.hh"

#include <list>

namespace certi {

class InteractionBroadcastList {

public:

    // -----------------------
    // -- Public Attributes --
    // -----------------------

    /*! The Message to be broadcast. This message must be allocated before
      calling the constructor of the class, be is deleted by the destructor.
    */
    NetworkMessage *message ;

    // --------------------
    // -- Public Methods --
    // --------------------
    InteractionBroadcastList(NetworkMessage *theMsg);
    ~InteractionBroadcastList();

    void clear();
    void addFederate(FederateHandle theFederate);
    void sendPendingMessage(SecurityServer *Server);

private:

    // ------------------------
    // -- Private Attributes --
    // ------------------------
    std::list<InteractionBroadcastLine *> lines ;

    // ---------------------
    // -- Private Methods --
    // ---------------------

    InteractionBroadcastLine *getLineWithFederate(FederateHandle theFederate);
};

}

#endif // _CERTI_INTERACTION_BROADCAST_LIST_HH

// $Id: InteractionBroadcastList.hh,v 3.6 2004/05/18 13:18:53 breholee Exp $
