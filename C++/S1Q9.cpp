#include <iostream>

using namespace std;
int main() {
	int n,m;
	int a[100];
	cin>>n>>m;
	struct Friends{
		int price;
		int prime;
	};
	Friends p[n];
	for(int i=0;i<n;i++){
		cin>>p[i].price>>p[i].prime;
	}
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			if(p[i].prime<p[j].prime){
				Friends tem;
				tem = p[j];
				p[j] = p[i];
				p[i] = tem;
			}
		}
	}
	int priceSum=0;
	for(int i=0;i<n;i++){
		if((priceSum+p[i].price)<=m){
			priceSum+=p[i].price;
		}
		else{
			cout<<i;
			return 0;
		}
	}
	cout<<n;
}