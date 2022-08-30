#include <iostream>

using namespace std;
bool map[102][102];
bool mapOut[100][100];

bool cov(int i,int j){
	int sum=0;
	for(int s=i-1;s<=i+1;s++){
		for(int t=j-1;t<=j+1;t++){
			if(s==i&&t==j){
				continue;
			}
			sum+=map[s][t];
		}
	}
	if(map[i][j]==1){
		if(sum<2||sum>3)return 0;
		else return 1;
	}
	if(map[i][j]==0&&sum==3)return 1;
	else return 0;
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
			mapOut[i-1][j-1]=cov(i,j);
		}
	}
	for(int i=0;i<m;i++){
		int flag =0;
		for(int j=0;j<n;j++){
			if(flag ==1){
				cout<<" ";
//				continue;
			}
			cout<<mapOut[i][j];
			flag =1;
		}
		cout<<endl;
	}
}