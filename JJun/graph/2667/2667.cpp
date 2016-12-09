#include <cstdio>
#include <cstring>
#include <queue>
#include <algorithm>
#include <vector>
using namespace std;
int dx[4]={0,0,-1,1};
int dy[4]={1,-1,0,0};
int map[26][26];
bool check[26][26];
int cnt=0;
int n;
vector < int > num;
void bfs(int x, int y){
	queue < pair < int , int > > q;
	int count=1;
	if(map[x][y] && !check[x][y]){
		q.push(make_pair(x,y));
		check[x][y]=true;
		while(!q.empty()){
			int now_x=q.front().first;
			int now_y=q.front().second;
			q.pop();
			for(int i=0; i<4; ++i){
				int next_x = now_x+dx[i];
				int next_y = now_y+dy[i];
				if(!check[next_x][next_y] && map[next_x][next_y]==1 && next_x>=0 && next_x<n && next_y>=0 && next_y<n){
					q.push(make_pair(next_x,next_y));
					check[next_x][next_y]=true;
					count++;
				}
			}
		}
		num.push_back(count);
		cnt++;
	}
}


int main(){
	memset(check,false,sizeof(check));
	scanf("%d",&n);
	for(int i=0; i<n; ++i){
		for(int j=0; j<n; ++j){
			scanf("%1d",&map[i][j]);
		}
	}
	for(int i=0; i<n; ++i){
		for(int j=0; j<n; ++j){
			bfs(i,j);
		}
	}
	sort(num.begin(),num.end());
	printf("%d\n",cnt);
	for(int i=0; i<num.size(); ++i){
		printf("%d\n",num[i]);
	}
}
