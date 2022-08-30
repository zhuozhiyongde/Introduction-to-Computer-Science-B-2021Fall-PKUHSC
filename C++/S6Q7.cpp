#include <iostream>

using namespace std;
int main() {
	int n;
	cin>>n;
	int a[1000]={0};
	int i=0;
	while(i<n){
		cin>>a[i];
		i++;
	}
	int sum=0;
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]>a[j]){
				int temp = a[i];
				a[i]=a[j];
				a[j]=temp;
				sum++;
			}
		}
	}
//	for(int i=0;i<n;i++){
//		cout<<a[i]<<" ";
//	}
	cout<<sum;
}