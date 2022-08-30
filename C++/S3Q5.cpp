#include <iostream>
#include <math.h>

using namespace std;
int crush(int a[],int n){
	int *p = a;
	if(n==1){
		return(a[0]);
	}
	if(n==0){
		return 0;
	}
	if(a[0]==a[1]){
		int c[30]={0};
		for(int i=2;i<n;i++){
			c[i-2]=a[i];
		}
		return(crush(c,n-2));
	}
	if(a[0]!=a[1]){
		int c[30]={0};
		for(int i=2;i<n;i++){
			c[i-1]=a[i];
		}
		c[0] = abs(a[0]-a[1]);
		return(crush(c,n-1));
	}
}

int main() {
	int n;
	cin>>n;
	int we[30]={0};
	for(int i=0;i<n;i++){
		cin>>we[i];
	}
	cout<<crush(we,n);
}