#include "system_library.hpp"

void readF(int fd, int start){
    SYSCALL = "03h";

    if(SYSCALL == "03h"){
        if(fd == 1){
            KERNEL_LEVEL = "80h";
            kernel_mode();
        }
        else{
            puts("Not authorized");
        }
    }
    else{
        puts("Wrong call");
    }
}

void writeF(int fd, int start){
    SYSCALL = "05h";

    if(SYSCALL == "05h"){
        if(fd == 1){
            KERNEL_LEVEL = "80h";
            kernel_mode();
        }
        else{
            puts("Not authorized");
        }
    }
    else{
        puts("Wrong call");
    }
}
