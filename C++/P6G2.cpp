#include <iostream>

using namespace std;
int main() {
	int n =0;
	cin>>n;
	int array[n][n];
	
	int num=1;
	for(int i=0;i<=2*n-2;i++){
		for(int j=i;j>=0;j--){
			if(j<n&&i-j<n){
				if(i%2==0){
					array[j][i-j]=num++;
				}
				else
					array[i-j][j]=num++;
			}
		}
	}
	for(int r=0;r<n;r++){
		for(int c=0;c<n;c++){
			if(c!=n-1){
				cout<<array[r][c]<<" ";
			}
			else {
				cout<<array[r][c]<<"\n";
			}
		}
	}
}
