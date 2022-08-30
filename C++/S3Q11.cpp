#include<iostream>
#include<stdio.h>
#include<cstring>
#include<algorithm>
#include<cmath>

using namespace std;
int ans;
int m,n;
int cmp(int a,int b){
	return (a>b) ? a:b;
}
int map[1000][1000];

bool build(int sx,int sy,int fx,int fy){
	for(int i=sx;i<=fx;i++){
		for(int j=sy;j<=fy;j++){
			if(map[i][j]==1){
				return 0;
			}
		}
	}
	return 1;
}
void find(int x,int y){
	int ansx=x,ansy=y;
	for(int i=x;i<=m;i++){
		for(int j=y;j<=n;j++){
			if(build(x,y,i,j)){
				ans=cmp(ans,(i-x+1)*(j-y+1));
			}
		}
	}
}
int main(){
	cin>>m>>n;
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			cin>>map[i][j];
		}
	}
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			if(map[i][j]==0){
				find(i,j);
			}
		}
	}
	cout<<ans;
}
