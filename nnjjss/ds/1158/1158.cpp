#include <cstdio>
#include <iostream>
#include <queue>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    queue<int> q;
    for(int i=1; i<=n; i++) {
        q.push(i);
    }
    int m;
    cin >> m;
    cout << '<';
    for(int i=0; i<n-1; i++) {
        for(int j=0; j<m-1; j++) {
            q.push(q.front());
            q.pop();
        }
        cout << q.front() << ',' << ' ';
        q.pop();
    }
    cout << q.front();
    cout << '>' << '\n';
    
    return 0;
}
