#include <cstdio>
#include <iostream>
using namespace std;
int main(){
	int n,a,sum=0;
	cin >> n;
	while(n--){
		scanf("%1d",&a);
		sum+=a;
	}
	cout << sum << '\n';
}
