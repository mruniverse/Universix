#include "core.hpp"

void kernel_mode(){
    while(KERNEL_LEVEL == "80h"){
        if(SYSCALL == "03h"){
            int c;
            FILE *file;
            file = fopen("modo_nucleo/teste.txt", "r");
            if (file != NULL) {
                while ((c = getc(file)) != EOF){
                    putchar(c);
                }
                fclose(file);
            }
            SYSCALL = "";
        }
        else if(SYSCALL == "05h"){
            ofstream myfile ("modo_nucleo/teste.txt", ios::ate | ios::app);
            if (myfile.is_open()){
                myfile << "New information added.\n";
                myfile.close();
            }
            SYSCALL = "";
        }
        KERNEL_LEVEL = "" ;
    }
}
