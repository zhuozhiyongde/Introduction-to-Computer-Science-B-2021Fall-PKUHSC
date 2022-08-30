#include <iostream>

using namespace std;
int main() {
	int n;
	cin>>n;
	if(n==1){
		cout<<1;
		return 0;
	}
	int max=0;
	int a[10000]={0};
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n-1;i++){
		int flag = 1;
		int temp=a[i];
		int *p = &a[i];
		p++;
		int sum=1;
		while(*p==temp+1){
			temp=*p;
			p++;
			sum++;
		}
		if(sum>max){
			max=sum;
		}
	}
	cout<<max;
}