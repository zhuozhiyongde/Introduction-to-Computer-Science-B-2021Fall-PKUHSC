#include <iostream>

using namespace std;
bool beau(int n){
	if(n==1){
		return 1;
	}
//	while(n!=0){
//		if(!((n%10==2)||(n%10==3)||(n%10==5))){
//			return 0;
//		}
//		n=n/10;
//	}
	if(n%5==0){
		return beau(n/5);
	}
	else if(n%3==0){
		return beau(n/3);
	}
	else if(n%2==0){
		return beau(n/2);
	}
	else{
		return 0;
	}
}
int main() {
	int n;
	cin>>n;
	int i=0;
	int sum=0;
	while(i<n){
		i++;
		int temp;
		cin>>temp;
		if(beau(temp)){
			sum++;
//			cout<<temp;
		}
	}
	cout<<sum;
//	cout<<beau(n);
}