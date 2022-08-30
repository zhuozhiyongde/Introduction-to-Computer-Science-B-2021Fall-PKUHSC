#include <iostream>
#include <cstring>
using namespace std;

int value(int a[],int n,int convert){
	bool nega[n][convert+1];
	memset(nega,0,sizeof(nega));
	nega[0][0]=true;
	if(a[0]<=convert)
		nega[0][a[0]]=true;
	for(int i=1;i<n;i++){
		for(int j=0;j<convert+1;j++){
			if(nega[i-1][j]){
				nega[i][j]=true;
				if((j+a[i])<=convert)
					nega[i][j+a[i]]=true;
			}
//			for(int s=0;s<n;s++){
//				for(int x=0;x<=convert;x++){
//					cout<<nega[s][x]<<" ";
//				}
//				cout<<endl;
//			}
		}
	}
	int max=0;
	for(int i=0;i<=convert;i++){
		if(nega[n-1][i])
			max=i;
	}
	return max;
}

int main() {
	int n,t;
	cin>>n>>t;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
//	cout<<value(a,n,t);
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=a[i];
	}
//	cout<<sum;
	if(sum<t){cout<<"0";return 0;}
	if(sum==t){cout<<t;return 0;}
//	cout<<value(a,n,t);
	int convert = sum-t;
	cout<<sum-value(a,n,convert);
}