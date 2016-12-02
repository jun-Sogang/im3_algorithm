#include <iostream>
#include <string>
using namespace std;
struct Queue {
    int data[10000];
    int begin, end;
    Queue() {
        begin = 0;
        end = 0;
    }
    void push(int num) {
        data[end] = num;
        end += 1;
    }
    bool empty() {
        if (begin == end) {
            return true;
        } else {
            return false;
        }
    }
    int pop() {
        if (empty()) {
            return -1;
        } else {
            begin += 1;
            return data[begin-1];
        }
    }
    int size() {
        return end - begin;
    }
    int front() {
        if (empty()) {
            return -1;
        } else {
            return data[begin];
        }
    }
    int back() {
        if (empty()) {
            return -1;
        } else {
            return data[end-1];
        }
    }
    
};
int main() {
    int n;
    cin >> n;
    
    Queue q;
    
    while(n--) {
        string cmd;
        cin >> cmd;
        if (cmd == "push") {
            int num;
            cin >> num;
            q.push(num);
        } else if (cmd == "front") {
            cout << (q.empty() ? -1 : q.front()) << '\n';
        } else if (cmd == "back") {
            cout << (q.empty() ? -1 : q.back()) << '\n';
        } else if (cmd == "size") {
            cout << q.size() << '\n';
        } else if (cmd == "empty") {
            cout << q.empty() << '\n';
        } else if (cmd == "pop") {
            cout << (q.empty() ? -1: q.front()) << '\n';
            if (!q.empty()) {
                q.pop();
            }
        }
    }
    
    return 0;
}
