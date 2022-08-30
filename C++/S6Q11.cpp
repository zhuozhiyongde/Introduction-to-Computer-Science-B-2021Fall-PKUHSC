#include <iostream>

using namespace std;
long long storge[1005]={1,2,4};
long long ways(int n){
	if(storge[n-1]!=0){
		return storge[n-1];
	}
	else{
		storge[n-1] = (ways(n-1)+ways(n-2)+ways(n-3))%10000;
//		if(storge[n-1]<0)cout<<storge[n-1]<<endl;
		return storge[n-1];
	}
}
int main() {
	int n;
	cin>>n;
	cout<<ways(n)%10000;
}