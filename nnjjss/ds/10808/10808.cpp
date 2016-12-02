#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;

int main() {
    
    char in[101];
    int cnt[26] = {0,};
    cin >> in;
    for(int i=0; i<strlen(in); i++)
        cnt[in[i] - 'a']++;
    for(int i=0; i<26; i++)
        cout << cnt[i] << ' ';
    
    return 0;
}
