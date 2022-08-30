#include <iostream>

using namespace std;
int main() {
	int n=0,i=0;
	cin>>n;
	int array[50]={};
	while(i<n){
		int ai=0;
		scanf("%d",&ai);
//		cout<<ai;
		array[i] = ai;
		i++;
	}
	int cyc = 0;
	cin>>cyc;
	for(int j=0;j<n-1;j++){
		cout<<array[(j+n-cyc)%n]<<" ";
	}
	cout<<array[(n-1+n-cyc)%n];
}