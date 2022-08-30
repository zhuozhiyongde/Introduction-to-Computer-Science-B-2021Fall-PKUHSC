#include <iostream>

using namespace std;
int main() {
	int n;
	cin>>n;
	int i=1;
	long sum=1;
	while(i<n){
		sum=(sum+1)*2;
		i++;
	}
	cout<<sum;
}