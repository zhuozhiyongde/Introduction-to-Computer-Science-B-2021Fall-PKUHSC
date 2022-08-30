#include <iostream>

using namespace std;
int mod10(int n){
	if(n==0)return 0;
	while((n%10)==0){
		n/=10;
	}
	return n;
}
void conv(int n){
	if(n==0){
		cout<<n;
	}
	if(n<0){
		n=-n;
		cout<<"-";
		while(n!=0){
			cout<<n%10;
			n=n/10;
		}
	}
	else{
		while(n!=0){
			cout<<n%10;
			n=n/10;
		}
	}
}
int main() {
	int n;
	cin>>n;
	conv(mod10(n));
}