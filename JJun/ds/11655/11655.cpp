#include <string>
#include <cstdio>
#include <iostream>
using namespace std;
int main(){
	char temp;
	char upper[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	char lower[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	while(scanf("%c",&temp)==1){
		if(temp>='A' && temp <='Z'){
			printf("%c",upper[(temp-'A'+13)%26]);
		}
		else if(temp>='a' && temp<='z'){
			printf("%c",lower[(temp-'a'+13)%26]);
		}
		else if(temp >='0' && temp<='9'){
			printf("%c",temp);
		}
		else if(temp == ' ')
			printf(" ");
	}
}
