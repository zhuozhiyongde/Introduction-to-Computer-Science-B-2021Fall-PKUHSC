#include <iostream>
#include <string.h>

using namespace std;
int main() {
	int n=1000;
	cin>>n;
	bool lamb[1001];
	memset(lamb, 1, sizeof(lamb));
	for(int i=1;i<n+1;i++){
		for(int j=n/i;j>0;j--){
			lamb[i*j]=!lamb[i*j];
		}
		cout<<endl;
	}
	for(int i=1;i<n+1;i++){
		if(lamb[i])
			cout<<i<<" ";
	}
}