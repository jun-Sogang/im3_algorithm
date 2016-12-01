#include <cstdio>
#include <queue>
#include <iostream>
using namespace std;
int main(){
	int n;
	int cnt;
	queue < int > q;
	cin >> n;
	for(int i=1; i<=n; ++i){
		q.push(i);
	}
	cin >> cnt;
	cout << "<";
	while(!q.empty()){
		for(int i=0; i<cnt-1; ++i){
			q.push(q.front());
			q.pop();
		}
		cout << q.front();
		q.pop();
		if(!q.empty())
			cout<< ", ";
	}
	cout << ">";
}
