#include <iostream>
#include <math.h>

using namespace std;
bool prime(int n){
	if(n<=1)return false;
	if(n==2)return true;
	for(int i=2;i<sqrt(n);i++){
		if(n%i==0)return false;
	}
	return true;
}
int main() {
	int m;
	cin>>m;
	for(int i=m-2;i>3;i--){
		if(prime(i)&&prime(i+2)){
			cout<<i<<" "<<i+2;
			break;
		}
	}
}