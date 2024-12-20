#ifndef SimpleSocket_hpp
#define SimpleSocket_hpp

#include <stdio.h>
#include <sys/socket.h>
#include <netinet/in.h>

namespace HDE
{
    class SimpleSocket{
        private:
            struct sockaddr_in address;
            int connection;
            int sock;
        public:
            SimpleSocket(int domain, int server, int protocol, int port, u_long interface);

            virtual int connect_to_network(int sock, struct sockaddr_in address) = 0;
            void test_connection(int);
            struct sockaddr_in get_address();
            int get_sock();
            int get_connection();
            
    };
}



#endif