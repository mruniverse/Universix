#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;

extern string SYSCALL;   //System call code
extern string KERNEL_LEVEL;    //Define if it's kernel level or not
// string DS;  //Data segment register

void readF(int fd, int start);
void writeF(int fd, int start);
extern void kernel_mode();
