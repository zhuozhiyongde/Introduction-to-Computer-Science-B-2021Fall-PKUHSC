#include <iostream>

using namespace std;
int main() {
	int m,n;
	cin>>m>>n;
	int array[101][101];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>array[i][j];
		}
	}
	int sum=0;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(array[i][j])sum++;
		}
	}
	cout<<sum;
}