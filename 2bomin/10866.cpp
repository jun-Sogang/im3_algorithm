#include <stdio.h>
#include <iostream>
#include <string>
#include <deque>
using namespace std;

int main(void)
{
    string str;
    int n; 
    int x;
    deque <int> de;
    
    cin >> n;
    for(int i =0; i<n; i++){
        cin >> str;

        if (str == "push_front"){
            cin >> x;
            de.push_front(x);
        } else if (str == "push_back") {
            cin >> x;
            de.push_back(x);
        } else if (str == "pop_front") {
            if (de.empty()){
                cout << -1 << '\n';
            }
            else {
                cout << de.front() << '\n';
                de.pop_front();
            }
        } else if (str == "pop_back") {
            if (de.empty()){
                cout << -1 << '\n';
            }
            else {
                cout << de.back() << '\n';
                de.pop_back();
            }
        } else if (str == "size") {
            cout << de.size() << '\n';
        } else if (str == "empty") {
            if(de.empty()){
                cout << 1 << '\n';
            }
            else {
                cout << 0 << '\n';
            }
        } else if (str == "front") {
            if(de.empty()){
                cout << -1 << '\n';
            }
            else {
                cout << de.front() << '\n';
            }
        } else if (str == "back") {
            if(de.empty()){
                 cout << -1 << '\n';
             }
            else {
                 cout << de.back() << '\n';
            }
        }
    }
    return 0;
}
