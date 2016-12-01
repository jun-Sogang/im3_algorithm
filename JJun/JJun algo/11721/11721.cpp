#include <cstdio>
#include <string>
#include <iostream>
using namespace std;
int main(){
	string a;
	cin >> a;
	for(int i=0; i<a.length(); ++i){
		printf("%c",a[i]);
		if(i%10 == 9){
			cout << '\n';
		}
	}
}
