#include <cstdio>
#include <vector>
#include <queue>
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main(){
	int k;
	cin >>k;
	while(k--){
		int V,E;
		scanf("%d %d",&V,&E);
		vector < int > v[20001];
		for(int i=0; i<E; ++i){
			int a,b;
			scanf("%d %d",&a,&b);
			v[a].push_back(b);
			v[b].push_back(a);
		}
		string ans = "YES";
		bool check[V+1];
		int team[20001] = {0, };
		memset(check,false,sizeof(check));
		for(int i=1; i<=V; ++i){
			queue < int > q;
			if(!check[i]){
				q.push(i);
				check[i]=true;
				team[i]=1;
				while(!q.empty()){
					int now=q.front();
					q.pop();
					for(int i=0; i<v[now].size(); ++i){
						int next = v[now][i];
						if(team[next] != 0 && team[next] != 3-team[now])
							ans="NO";
						if(!check[next]){
							q.push(next);
							check[next]=true;
							team[next]=3-team[now];
						}
					}
				}
			}
		}
		printf("%s\n",ans.c_str());
	}
}
