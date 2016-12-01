#include <stdio.h>
#include <string>
#include <iostream>
#include <stack>
using namespace std;
int main(){
	stack <int> v;
	int n;
	string temp;
	scanf("%d",&n);
	for(int i=0; i<n; i++){
		cin >> temp;
		if(temp=="push"){
			int tmp;
			scanf("%d",&tmp);
			v.push(tmp);
		}
		else if(temp=="pop"){
			if(v.empty())
				printf("-1\n");
			else{
				printf("%d\n",v.top());
				v.pop();
			}
		}
		else if(temp=="size"){
			printf("%lu\n",v.size());
		}
		else if(temp=="empty"){
			if(v.empty())
				printf("1\n");
			else
				printf("0\n");
		}
		else if(temp=="top"){
			if(v.empty())
				printf("-1\n");
			else
				printf("%d\n",v.top());
		}
	}
}
