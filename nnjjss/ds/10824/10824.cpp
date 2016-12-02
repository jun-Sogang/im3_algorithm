#include <iostream>
#include <string>
using namespace std;
int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    
    string ab = to_string(a) + to_string(b);
    string cd = to_string(c) + to_string(d);
    
    long sum1 = stol(ab);
    long sum2 = stol(cd);
    
    cout << sum1 + sum2 << '\n';
    
    return 0;
}
