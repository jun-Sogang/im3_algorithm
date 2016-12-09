#include <cstdio>
#include <vector>
#include <algorithm>
#include <iostream>
#include <queue>
#include <cstring>
using namespace std;

vector < int > v[1002];
bool check[1002];

int bfs(int start){
	queue < int > q;
	if(check[start])
		return 0;
	q.push(start);
	check[start]=true;
	while(!q.empty()){
		int x = q.front();
		q.pop();
		for(int i=0; i<v[x].size(); ++i){
			int z = v[x][i];
			if(!check[z]){
				q.push(z);
				check[z]=true;
			}
		}
	}
	return 1;
}


int main(){
	int n,m;
	int ans=0;
	cin >> n >> m;
	memset(check,false,sizeof(check));	
	for(int i=0; i<m; ++i){
		int a,b;
		scanf("%d %d",&a,&b);
		v[a].push_back(b);
		v[b].push_back(a);
	}
	for(int i=1; i<=n; ++i){
		ans+=bfs(i);
	}
	cout << ans;
}
