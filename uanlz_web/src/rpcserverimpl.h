#ifndef RPC_H
#define RPC_H

#include <mdz_net_sockets/streamsocket.h>

namespace UANLZ { namespace WEB {

class RPCServerImpl
{
public:
    RPCServerImpl();
    static bool createRPCListener();

private:
    static bool callbackOnRPCConnect(void *, Mantids::Network::Streams::StreamSocket *sock, const char *remoteAddr, bool secure);
};

}}

#endif // RPC_H
