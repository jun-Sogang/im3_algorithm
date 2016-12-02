#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
    
    string t;
    cin >> t;
    int n = t.size();
    stack<int> s;
    int ans = 0;
    for(int i=0; i<n; i++) {
        if(t[i] == '(') {
            s.push(i);
        } else {
            if(s.top()+1 == i) {
                s.pop();
                ans += s.size();
            } else {
                s.pop();
                ans += 1;
            }
        }
    }
    printf("%d\n", ans);
    
    return 0;
}
