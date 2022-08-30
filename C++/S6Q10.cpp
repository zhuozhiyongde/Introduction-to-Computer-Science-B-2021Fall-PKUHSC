#include <iostream>

using namespace std;
bool map[102][102];
bool mapOut[100][100];
int sum=0;

void cov(int i,int j){
	if(map[i][j]==1){
		int temp=0;
		temp=map[i-1][j]+map[i+1][j]+map[i][j+1]+map[i][j-1];
		sum+=(4-temp);
	}
}

int main() {
	int m,n;
	cin>>m>>n;
	for(int i=0;i<=m+1;i++){
		for(int j=0;j<=n+1;j++){
			if(i==0||i==m+1||j==0||j==n+1){
				map[i][j]=0;
				continue;
			}
			cin>>map[i][j];
		}
	}
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			cov(i,j);
		}
	}
	cout<<sum;
}