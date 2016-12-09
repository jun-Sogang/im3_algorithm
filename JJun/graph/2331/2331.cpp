#include <cstdio>
#include <iostream>
#include <vector>
#include <queue>
#include <map>
using namespace std;

int Next(int now,int times){
	int next=0;
	while(now>0){
		int temp=now%10;
		int times_temp=1;
		now/=10;
		for(int i=0; i<times; ++i){
			times_temp*=temp;
		}
		next+=times_temp;
	}
	return next;
}
int main(){
	int a,p;
	int cnt=1;
	map < int, int > m;
	cin >> a >> p;
	m[a]=cnt;
	int now=a;
	while(++cnt){
		now=Next(now,p);
		if(m[now] !=0)
			break;
		else{
			m[now]=cnt;
		}
	}
	cout << m[now]-1;
}
