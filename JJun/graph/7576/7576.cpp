#include <cstdio>
#include <vector>
#include <queue>
#include <algorithm>
#include <iostream>
#include <cstring>
using namespace std;

int map[1001][1001];
bool check[1001][1001];
int dx[4]={0,0,-1,1};
int dy[4]={1,-1,0,0};
int main(){
	int m,n;
	bool flag=true;
	memset(check,false,sizeof(check));
	memset(map,0,sizeof(map));
	queue < pair < int , int > > q;
	cin >> m >> n;
	for(int i=0; i<n; ++i){
		for(int j=0; j<m; ++j){
			scanf("%d",&map[i][j]);
			if(map[i][j]==1){
				q.push(make_pair(i,j));
			}
			else
				flag=false;
		}
	}
	if(flag)
		return printf("%d\n",0);
	while(!q.empty()){
		int x=q.front().first;
		int y=q.front().second;
		q.pop();
		for(int i=0; i<4; ++i){
			int next_x=x+dx[i];
			int next_y=y+dy[i];
			if(next_x>=0 && next_x<n && next_y>=0 && next_y<m && map[next_x][next_y]==0 && !check[next_x][next_y]){
				map[next_x][next_y]=map[x][y]+1;
				check[next_x][next_y]=true;
				q.push(make_pair(next_x,next_y));
			}
		}
	}
	int Max=0;

	for(int i=0; i<n; ++i){
		for(int j=0; j<m; ++j){
			Max=max(Max,map[i][j]);
			if(map[i][j]==0)
				flag=true;
		}
	}
	if(flag)
		return printf("%d\n",-1);
	printf("%d\n",Max-1);
}
