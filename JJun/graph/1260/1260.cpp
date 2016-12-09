#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <cstring>
using namespace std;


vector < int > a[1005];
bool check[1005] = {false, };
void dfs(int v){
	check[v]=true;
	printf("%d ",v);
	for(int i=0; i< a[v].size(); ++i){
		int x= a[v][i];
		if(check[x] ==false){
			dfs(x);
		}
	}
}

void bfs(int v){
	queue < int > q;
	q.push(v);
	check[v] =true;
	while(!q.empty()){
		int x = q.front();
		q.pop();
		printf("%d ", x);
		for(int i=0; i<a[x].size(); i++){
			int y =a[x][i];
			if(check[y] == false){
				q.push(y);
				check[y]=true;
			}
		}
	}

}


int main(){
	int n,m,v;
	cin >> n >> m >> v;
	for(int i=0; i<m; ++i){
		int U,V;
		scanf("%d %d",&U,&V);
		a[U].push_back(V);
		a[V].push_back(U);
	}
	for(int i=0; i<n; i++){
		sort(a[i].begin(),a[i].end());
	}
	dfs(v);

	memset(check,false,sizeof(check));	
	puts("");
	bfs(v);

	
}
