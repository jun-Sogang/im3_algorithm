#include <cstdio>
#include <iostream>
using namespace std;
int main(){
	char temp;
	int upper=0;
	int lower=0;
	int space=0;
	int num=0;
	while(scanf("%c",&temp)==1){
		if(temp=='\n'){
			cout << lower << " " << upper << " " << num << " " << space << "\n";	
			upper=lower=space=num=0;
			continue;
		}
		if(temp>='0' && temp <='9')
			num++;
		else if(temp >='a' && temp <= 'z')
			lower++;
		else if(temp >= 'A' && temp <='Z')
			upper++;
		else
			space++;
	}
}
