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
// $Id: SocketTCP.hh,v 3.9 2004/05/18 13:18:55 breholee Exp $
// ----------------------------------------------------------------------------

#ifndef _CERTI_SOCKET_TCP_HH
#define _CERTI_SOCKET_TCP_HH

#include "Socket.hh"
#include "certi.hh"

#include <sys/socket.h>
#include <netinet/in.h>

// This is the read buffer of TCP sockets. It must be at least as long
// as the longest data ever received by a socket.
// If the next line is commented out, no buffer will be used at all.
#define SOCKTCP_BUFFER_LENGTH 4096

namespace certi {

/*! IMPORTANT NOTE: This TCP socket implementation uses a Read Buffer to
  improve global read performances(by reducing Recv system calls). An
  important drawback of this improvement is that a socket can be marked as
  empty for the system, but in fact there is data waiting in the read
  buffer. This is especially a problem for processes using the 'select'
  system call: the socket won't be marked as ready for reading, because all
  data has already been read, and is waiting in the internal buffer.
  Therefore, before returning to a select loop, be sure to call the
  IsDataReady method to check whether any data is waiting for processing.
*/
class SocketTCP : public Socket
{
public :
    // ---------------------------------------------
    // -- Fonctions heritee de la classe Socket --
    // ---------------------------------------------

    void send(void *Buffer, unsigned long Size)
        throw (NetworkError, NetworkSignal);

    void receive(void *Buffer, unsigned long Size)
        throw (NetworkError, NetworkSignal);

    Boolean isDataReady() const ;

    int getClass() const { return SOCKET_TYPE_TCP ; };
    int returnSocket() const ;

    unsigned long returnAdress() const ;

    void close();

    // --------------------------
    // -- TCP Specific Methods --
    // --------------------------

    SocketTCP();
    ~SocketTCP();

    int accept(SocketTCP *serveur);

    void createTCPClient(unsigned int port, char *nom_serveur);
    void createTCPClient(unsigned int port, unsigned long addr);
    void createTCPServer(unsigned int port = 0, unsigned long addr = INADDR_ANY);

    SocketTCP & operator= (SocketTCP &theSocket);

private:

    // ------------------------
    // -- Private Attributes --
    // ------------------------

    long _socket_tcp ;

    struct sockaddr_in _sockIn ;
    Boolean _est_init_tcp ;

    ByteCount SentBytesCount ;
    ByteCount RcvdBytesCount ;

#ifdef SOCKTCP_BUFFER_LENGTH
    // This class can use a buffer to reduce the number of systems calls
    // when reading a lot of small amouts of data. Each time a Receive
    // is made, it will try to read SOCKTCP_BUFFER_LENGTH

    char ReadBuffer[SOCKTCP_BUFFER_LENGTH] ;
    unsigned long RBLength ;
#endif

    // ---------------------
    // -- Private Methods --
    // ---------------------

    unsigned int getPort() const ;
    unsigned long getAddr() const ;
    void setPort(unsigned int port);

    int bind(unsigned int port=0, unsigned long addr=INADDR_ANY);
    void changeReuseOption();
    int connect(unsigned int port, unsigned long addr);
    int listen(unsigned long howMuch=5);
    int open();
    int timeoutTCP(int, int);

    int portableSelect(fd_set *, struct timeval *);
};

}

#endif // _CERTI_SOCKET_TCP_HH

// $Id: SocketTCP.hh,v 3.9 2004/05/18 13:18:55 breholee Exp $
