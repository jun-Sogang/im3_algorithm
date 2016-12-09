#include <cstdio>
#include <vector>
#include <queue>
#include <iostream>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int t;
		int ans=0;
		vector < int > v[1001];
		bool check[1001]={false, };
		scanf("%d",&t);
		for(int i=0; i<t; ++i){
			int temp;
			scanf("%d",&temp);
			v[i+1].push_back(temp);
		}
		for(int i=1; i<=t; ++i){
			queue < int > q;
			if(!check[i]){
				q.push(i);
				while(!q.empty()){
					int now = q.front();
					q.pop();
					for(int i=0; i<v[now].size(); ++i){
						int next = v[now][i];
						if(!check[next]){
							q.push(next);
							check[next]=true;
						}
						else
							ans++;
					}
				}
			}
		}
		printf("%d\n",ans);
	}
}
