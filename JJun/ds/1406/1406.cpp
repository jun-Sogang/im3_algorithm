#include <cstdio>
#include <stack>
#include <string>
#include <iostream>
using namespace std;
int main(){
	string input;
	stack < char > front;
	stack < char > back;
	int n;
	cin >> input;
	for(int i=0; i<input.length(); ++i){
		front.push(input[i]);
	}
	cin >> n;
	for(int i=0; i<n; ++i){
		string temp;
		cin >> temp;
		if(temp == "P"){
			string ch;
			cin >> ch;
			front.push(ch[0]);
		}
		else if(temp == "L"){
			if(!front.empty()){
				back.push(front.top());
				front.pop();
			}
		}
		else if(temp == "B"){
			if(!front.empty())
				front.pop();
		}
		else if(temp == "D"){
			if(!back.empty()){
				front.push(back.top());
				back.pop();}
		}
	}
	int len=front.size();
	for(int i=0; i<len; ++i){
		back.push(front.top());
		front.pop();
	}
	len=back.size();
	for(int i=0; i<len; ++i){
		printf("%c",back.top());
		back.pop();
	}
}
