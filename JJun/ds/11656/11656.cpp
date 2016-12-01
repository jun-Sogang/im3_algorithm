#include <cstdio>
#include <algorithm>
#include <string>
#include <iostream>
#include <vector>
using namespace std;
int main(){
	string input;
	vector < string > v;
	cin >> input;
	for(int i=0; i<input.length(); ++i){
		v.push_back(input.substr(i,input.length()));
	}
	sort(v.begin(),v.end());
	for(int i=0; i<v.size(); ++i){
		cout << v[i] << "\n";
	}
}
