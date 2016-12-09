#include <stdio.h>
#include <stack>
#include <string.h>
#include <iostream>
using namespace std;

char input[600000];
int main() {

    cin >> input;
    stack<char> l, r;
    int len = strlen(input);

    for(int i=0; i<len; i++) {
        l.push(input[i]);
    }
    int num;
    cin >> num;

    while(num--) {
        char com;
        cin >> com;

        if(com == 'L') {
            if(!l.empty()) {
                r.push(l.top());
                l.pop();
            }
        } else if(com == 'D') {
            if(!r.empty()) {
                l.push(r.top());
                r.pop();
            }
        } else if(com == 'B') {
            if(!l.empty()) {
                l.pop();
            }
        } else if(com == 'P') {
            char x;
            cin >> x;
            l.push(x);
        }
    }
    while(!l.empty()) {
        r.push(l.top());
        l.pop();
    }
    while(!r.empty()) {
        cout << r.top();
        r.pop();
    }
    cout << '\n';

    return 0;
}
