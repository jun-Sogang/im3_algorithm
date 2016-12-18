#include <cstdio>
#include <queue>
#include <cstring>
#include <algorithm>
#include <vector>
using namespace std;

typedef long long ll;
vector < pair < int , int > > v[100001];
bool visited[100001];
ll sum[100001];
void bfs(int start){
	queue < int > q;
	q.push(start);
	visited[start]=true;
	while(!q.empty()){
		int now = q.front();
		q.pop();
		for(int i=0 ;i<v[now].size(); ++i){
			int next= v[now][i].first;
			if(!visited[next]){
				q.push(next);
				visited[next]=true;
				sum[next]+=sum[now]+v[now][i].second;
			}
		}
	}
}
int main(){
	int n;
	scanf("%d",&n);

	for(int i=1; i<n; ++i){
		int a,b,c;
		scanf("%d %d %d%*c",&a,&b,&c);
		v[a].push_back(make_pair(b,c));
		v[b].push_back(make_pair(a,c));
	}
	bfs(1);
	int MAX=0;
	int point=0;
	for(int i=1; i<=n; ++i){
		if(MAX < sum[i]){
			MAX=sum[i];
			point=i;
		}
	}
	memset(sum,0,sizeof(sum));
	memset(visited,false,sizeof(visited));
	bfs(point);
	MAX=0;
	for(int i=1; i<=n; ++i){
		MAX = MAX > sum[i] ? MAX : sum[i];
	}
	printf("%d\n",MAX);
}
