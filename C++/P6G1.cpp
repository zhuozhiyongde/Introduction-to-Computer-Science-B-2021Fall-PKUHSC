#include <iostream>
using namespace std;
int main(){
	int m=1,n=1;
	cin>>m>>n;
//	cin.get();
	int origin[m][n];
//	int trans=0;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>origin[i][j];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(j!=m-1)
				cout<<origin[j][i]<<" ";
			else
				cout<<origin[j][i]<<endl;
		}
	}
}