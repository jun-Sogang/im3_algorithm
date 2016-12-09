#include <cstdio>
#include <vector>
#include <iostream>
#include <queue>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		int team_num=0;
		vector < int > v[100001];
		int num[100001]={0,};
		int set[100001]={0,};
		bool check[100001]={false,};
		scanf("%d",&n);
		for(int i=1; i<=n; ++i){
			int temp;
			scanf("%d",&temp);
			v[i].push_back(temp);
		}
		int set_num=0;
		for(int i=1; i<=n; ++i){
			set_num++;
			if(!check[i]){
				int cnt=1;
				queue < int > q;
				check[i]=true;
				q.push(i);
				num[i] = cnt++;
				set[i] = set_num;
				while(!q.empty()){
					int now=q.front();
					q.pop();
					for(int i=0; i<v[now].size(); ++i){
						int next=v[now][i];
						if(!check[next]){
							num[next]=cnt++;
							set[next]=set_num;
							check[next]=true;
							q.push(next);
						}
						else if(set[now] == set[next]){
							team_num+=num[now]-num[next]+1;					
							break;
						}
					}
				}
			}
		}
		printf("%d\n",n-team_num);
	}
}
