#include "../modo_lib/system_library.hpp"

using namespace std;

int main(){
    int fd, start, choice;

    fd = 1;
    start = 0;
    while (true) {
        cout << "Gostaria de Ler[1] ou escrever[2] no arquivo?" << endl;
        cin >> choice;
        switch (choice) {
            case 1:
                readF(fd, start);
                break;
            case 2:
                writeF(fd, start);
                break;
        }

    }

    return 0;
}
