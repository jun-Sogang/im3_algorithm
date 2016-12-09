#include <cstdio>
#include <cstring>
#include <queue>
#include <algorithm>
using namespace std;
int map[101][101];
bool check[101][101];
int dx[4]={0,0,-1,1};
int dy[4]={1,-1,0,0};
int main(){
	int n,m;
	scanf("%d %d",&n,&m);
	for(int i=0; i<n; ++i){
		for(int j=0; j<m; ++j){
			scanf("%1d",&map[i][j]);
		}
	}
	memset(check,false,sizeof(check));
	queue < pair < int , int > > q;
	q.push(make_pair(0,0));
	check[0][0]=true;
	while(!q.empty()){
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		for(int i=0; i<4; ++i){
			int next_x = x+dx[i];
			int next_y = y+dy[i];
			if(next_x>=0 && next_x < n && next_y>=0 && next_y<m && !check[next_x][next_y] && map[next_x][next_y] == 1){
				check[next_x][next_y]=true;
				map[next_x][next_y]=map[x][y]+1;
				q.push(make_pair(next_x,next_y));
				if(next_x == n-1 && next_y == m-1)
					return printf("%d\n",map[next_x][next_y]);
			}
		}
	}
}
