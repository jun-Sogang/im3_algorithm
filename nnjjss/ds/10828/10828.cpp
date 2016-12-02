#include <stdio.h>
#include <string>
#include <iostream>
#include <stack>
using namespace std;
int main() {
    stack <int> s;
    int n;
    string tem;
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        cin >> tem;
        if(tem=="push") {
            int c;
            scanf("%d", &c);
            s.push(c);
        }
        else if(tem=="pop") {
            if(s.empty())
                printf("-1\n");
            else {
                printf("%d\n", s.top());
                s.pop();
            }
        }
        else if(tem=="size") {
            printf("%lu\n", s.size());
        }
        else if(tem=="empty") {
            if(s.empty())
                printf("1\n");
            else
                printf("0\n");
        }
        else if(tem=="top") {
            if(s.empty())
                printf("-1\n");
            else
                printf("%d\n", s.top());
        }
    }
}
