#include <iostream>
#include <math.h>
using namespace std;
int main() {
	int n = 0;
	cin>>n;
	int array[1000][3];
	for(int i=0;i<n;i++){
		for(int j=0;j<3;j++){
			cin>>array[i][j];
		}
	}
	for(int i=0;i<n;i++){
		for(int s=i+1;s<n;s++){
			float centerDistance = (pow(array[i][0]-array[s][0],2)+pow(array[i][1]-array[s][1],2));
			if(pow((array[i][2]+array[s][2]),2) > centerDistance){
				cout<<"Yes";
				return 0;
			}
		}
	}
	cout<<"No";
}