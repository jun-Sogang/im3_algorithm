#include <cstdio>
#include <vector>
#include <algorithm>
#include <queue>
#include <cstring>
using namespace std;

typedef long long ll;
int parent[100001]={0,};
ll sum[100001]={0, };
bool visited[100001]={0, };
vector < pair < int , int > > v[100001]; // first : 연결된 정점 , second : 가중치

void bfs(int start){
	visited[start]=true;
	queue < int > q;
	q.push(start);
	while(!q.empty()){
		int now = q.front();
		q.pop();
		for(int i=0; i<v[now].size(); ++i){
			int next = v[now][i].first;
			if(!visited[next]){
				q.push(next);
				visited[next]=true;
				sum[next]+=v[now][i].second+sum[now];
			}
		}
	}
}
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0; i<n; ++i){
		int a,b,c;
		bool flag=true;
		scanf("%d",&a);
		while(flag){
			scanf("%d",&b);
			if(b==-1){
				flag=false;
				continue;
			}
			scanf("%d",&c);
			v[a].push_back(make_pair(b,c));
		}
	}
	bfs(1);
	int MAX=0;
	int point=0;
	for(int i=1; i<=n; ++i){
		if(MAX < sum[i]){
			MAX = sum[i];
			point=i;
		}
	}
    memset(visited,false,sizeof(visited));
	memset(sum,0,sizeof(sum));
	bfs(point);
	int ans=0;
	for(int i=1; i<=n; ++i){
		ans= ans > sum[i] ? ans : sum[i];
	}
	printf("%d\n",ans);

}
