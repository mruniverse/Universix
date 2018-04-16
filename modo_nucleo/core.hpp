#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstdio>

using namespace std;

string SYSCALL;   //System call code
string KERNEL_LEVEL;    //Define if is kernel level or not
// extern string DS;  //Data segment register

void kernel_mode();
