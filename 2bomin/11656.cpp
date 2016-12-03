#include <stdio.h>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int n = str.length();
    string arr[n];

    for (int i =0; i<n; i++){
        arr[i] = str.substr(i, n-i);
    }
    sort(arr, arr+n);
    for (int i =0; i<n; i++){
        cout << arr[i] << '\n';
    }
    return 0;
}
