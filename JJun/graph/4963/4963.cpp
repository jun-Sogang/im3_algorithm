#include <cstdio>
#include <iostream>
#include <vector>
#include <queue>
#include <cstring>
#include <algorithm>
using namespace std;

int dx[8]={0,0,-1,1,-1,-1,1,1};
int dy[8]={1,-1,0,0,-1,1,-1,1};
int map[51][51];
bool check[51][51];
int main(){
	while(1){
		int w,h;
		scanf("%d %d",&w,&h);
		if(w==0 && h==0)
			return 0;
		memset(map,0,sizeof(map));
		memset(check,false,sizeof(check));
		for(int i=0; i<h; ++i){
			for(int j=0; j<w; ++j){
				int temp;
				scanf("%d",&temp);
				map[i][j]=temp;
			}
		}
		int ans=0;
		for(int i=0; i<h; ++i){
			for(int j=0; j<w; ++j){
				if(!check[i][j] && map[i][j] == 1){
					queue < pair < int , int > > q;
					q.push(make_pair(i,j));
					check[i][j] = true;
					while(!q.empty()){
						int x=q.front().first;
						int y=q.front().second;
						q.pop();
						for(int k=0; k<8; ++k){
							int next_x = x+dx[k];
							int next_y = y+dy[k];
							if(next_x>=0 && next_x<h && next_y>=0 && next_y<w && !check[next_x][next_y] && map[next_x][next_y]==1){
								check[next_x][next_y]=true;
								q.push(make_pair(next_x,next_y));
							}
						}
					}
					ans++;
				}
			}
		}
		printf("%d\n",ans);
	}
}
