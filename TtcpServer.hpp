//  Made by Troy A. Hamilton (12/18/2022)
//  No guarantees offered. Constructive comments to wmmmwd@gmail.com

#include <netinet/in.h> //sockaddr_in
#include <sys/socket.h> //socket bind listen accept
#include <unistd.h>     //close
#include <cstring>      //memset

class TtcpServer
{
    private:
        unsigned short
            pvbufferedPortNumber = 0;
        int
            pvclientFd = 0, pvListenerFd = 0;
        
        void setUpSocket(unsigned short);
        void blockUntilClientConnects();
        void cleanUpClass();
        
    public:
        int waitForAClient(unsigned short);
};
