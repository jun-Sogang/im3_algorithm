#include <cstdio>
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main(){
	string input;
	cin >> input;
	int alpa[28];
	for(int i=0; i<28; ++i){
		alpa[i]=0;
	}// 이 부분은 <cstring>에 있는 memset(alpa,0,sizeof(alpa))로 대체 가능합니다.
	memset(alpa,0,sizeof(alpa));//alpa에 alpa의 size만큼 0으로 채운다는 뜻입니다.
	for(int i=0; i<input.length(); ++i){
		alpa[input[i]-97]++;
	}
	for(int i=0; i<26; ++i){
		cout << alpa[i] <<" ";
	}
}
