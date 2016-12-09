#include <cstring>
#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;

int main(void)
{
    string str;
    int number[26] = { 0,};

    cin >> str;
    for (int i =0; i<str.length(); i++) {
        number[str[i] - 97] += 1;
    }
    for (int i = 0; i < 26; i++) {
        if (i != 25){
            cout << number[i] << " ";
        }
        else {
            cout << number[i] << '\n';
        }
    }
    return 0;
}
