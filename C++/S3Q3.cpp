#include <iostream>

using namespace std;
int main() {
	int n;
	cin>>n;
	int a[100]={0};
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int target;
	cin>>target;
	int flag = 0;
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if((a[i]+a[j])==target){
				cout<<i<<" "<<j;
				flag =1;
			}
		}
	}
	if(flag==0){
		cout<<"-1 -1";
	}
}