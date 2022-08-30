#include <iostream>

using namespace std;
int numMax=1;
int a[10000]={0};
void trynum(int n,int start){
	int temp = a[start];
	int sum = 1;
	for(int i=start+1;i<n;i++){
		if(a[i]==temp+1){
			temp++;
			sum++;
		}
		else{
//			cout<<temp<<" "<<a[i]<<" "<<i<<endl;
			break;
		}
	}
	numMax = (numMax>sum)?numMax:sum;
}
int main() {
	int n;
	cin>>n;
	int i=0;
	while(i<n){
		cin>>a[i];
		i++;
	}
	for(int i=0;i<n;i++){
		trynum(n, i);
	}
	cout<<numMax;
}