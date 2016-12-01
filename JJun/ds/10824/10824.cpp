#include <cstdio>
#include <string>
#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
	string res1;
	string res2;
	string input1;
	string input2;
	cin >> res1;
	cin >> input1;
	res1+=input1;
	cin >> res2;
	cin >> input2;
	res2+=input2;
	printf("%lld\n",stoll(res1)+stoll(res2));
}
