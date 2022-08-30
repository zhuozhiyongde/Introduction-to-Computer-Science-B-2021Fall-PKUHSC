#include <iostream>
#include <math.h>
int weishu(int N){
	int i;
	while(N!=0){
		i++;
		N=N/10;
	}
	return i;
}

using namespace std;
int main() {
	int n;
	cin>>n;
	int nsq = n*n;
	if(nsq%int(pow(10,weishu(n)))==n){
		cout<<"yes";
		return 0;
	}
	cout<<"no";
}