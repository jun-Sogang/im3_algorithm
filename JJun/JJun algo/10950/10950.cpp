#include <stdio.h>
#include <iostream>
using namespace std;
int main(){
	int n;
	int a,b;
	cin >> n;
	while(n--){
		scanf("%d %d",&a,&b);
		printf("%d\n",a+b);
	}
}
