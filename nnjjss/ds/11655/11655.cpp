#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    while(getline(cin, s)) {
        for(char x: s) {
            if(x >= 'a' && x <= 'm') {
                printf("%c", x+13);
            } else if(x >= 'n' && x <= 'z') {
                printf("%c", x-13);
            } else if(x >= 'A' && x <= 'M') {
                printf("%c", x+13);
            } else if(x >= 'N' && x <= 'Z') {
                printf("%c", x-13);
            } else if(x >= '0' && x <= '9') {
                printf("%c", x);
            } else if(x == ' ') {
                printf("%c", x);
            }
        }
    }
    
    return 0;
}
