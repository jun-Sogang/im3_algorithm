#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int n;
	int a[1000002];
	cin >> n;
	for(int i=0; i<n; i++){
		int temp;
		scanf("%d",&a[i]);
	}
	sort(a,a+n);
	cout << a[0] << ' '<< a[n-1] << '\n';
}
