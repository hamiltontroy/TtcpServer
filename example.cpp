//  Made by Troy A. Hamilton (12/18/2022)
//  No guarantees offered. Constructive comments to wmmmwd@gmail.com

#include "TtcpServer.hpp"
#include "TtcpServer.cpp"

#include <unistd.h>     //read write
#include <iostream>     //cout endl

void hi(int sockFd)
{
    if(sockFd == -1)
        return;

    char hiMsg[4] = "hi\n", buf[512];
    
    read(sockFd, buf, 512);
    write(sockFd, hiMsg, 3);
    
    std::cout << buf << std::endl;
}

int main()
{
    TtcpServer server;

    hi(server.waitForAClient(1111));
}
