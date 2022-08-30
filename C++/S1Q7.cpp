#include <iostream>
#include <cstring>


using namespace std;
int main() {
	string line;
	int n;
	cin>>n;
	int a[100][100];
	int championScore=0;
	int champion = 0;
	int max,min,sum;
	memset(a,0,sizeof(a));
	for(int i=0;i<n;i++){
		max = 0;
		min = 100;
		sum = 0;
		for(int j=0;j<5;j++){
			cin>>a[i][j];
			if(a[i][j]<min)min=a[i][j];
			if(a[i][j]>max)max=a[i][j];
		}
		for(int j=0;j<5;j++){
			sum+=a[i][j];
		}
		a[i][0]=(sum-max-min);
	}
	for(int i=0;i<n;i++){
		if(championScore<a[i][0]){
			champion=i;
			championScore=a[i][0];
		}
	}
	cout<<champion+1<<" "<<championScore;
}