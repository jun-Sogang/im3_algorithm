#include <algorithm>
#include <iostream>
#include <string>
#include <cstring>
#include <vector>
using namespace std;

int main() {
    
    string input;
    cin >> input;
    vector<string> v;
    for(int i=0; i<input.length(); i++) {
        v.push_back(input.substr(i, input.length()));
    }
    sort(v.begin(), v.end());
    for(int i=0; i<v.size(); i++) {
        cout << v[i] << '\n';
    }
    
    
    return 0;
}
