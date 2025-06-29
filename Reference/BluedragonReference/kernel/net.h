#pragma once

#include <os/logger.h>

namespace reblue {
namespace kernel {
    void NetDll_WSAStartup();
    void NetDll_WSACleanup();
    void NetDll_socket();
    void NetDll_closesocket();
    void NetDll_setsockopt();
    void NetDll_bind();
    void NetDll_connect();
    void NetDll_listen();
    void NetDll_accept();
    void NetDll_select();
    void NetDll_recv();
    void NetDll_send();
    void NetDll_inet_addr();
    void NetDll___WSAFDIsSet();
    void NetDll_XNetStartup();
    void NetDll_XNetGetTitleXnAddr();
}
}
