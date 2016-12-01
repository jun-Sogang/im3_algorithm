#include <stack>
#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
int main(){
	int n;
	cin >> n;
	while(n--){
		string temp;
		bool flag=true;
		stack < bool > v;
		cin >> temp;
		for(int i=0; i<temp.length(); ++i){
			if(temp[i] == '('){
				v.push(true);
			}
			else{
				if(v.empty()){
					flag=false;
					break;
				}
				v.pop();
			}
		}
		if(v.empty()&&flag){
			cout << "YES" <<"\n";
		}
		else
			cout << "NO" << "\n";
	}
}
