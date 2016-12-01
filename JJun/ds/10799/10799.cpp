#include <cstdio>
#include <stack>
#include <string>
#include <iostream>
using namespace std;

int main(){
	stack < bool > v;
	string input;
	int ans=0;
	cin >> input;
	for(int i=0; i<input.length(); ++i){
		if(input[i] == '(')
			v.push(true);
		else{
			if(input[i-1]!=input[i]){
				v.pop();
				ans+=v.size();
			}
			else{
				v.pop();
				ans+=1;
			}
		}	
	}
	cout << ans << "\n";
}
