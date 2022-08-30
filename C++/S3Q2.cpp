#include <iostream>
#include <math.h>

using namespace std;
int main() {
	int a,b,n;
	cin>>a>>b>>n;
	int sum=0;
	int temp=0;
	for(int i=0;i<n;i++){
		cin>>temp;
		if(abs(a-b)<temp&&temp<a+b){
			sum++;
//			cout<<abs(a-b)<<temp<<endl;
		}
	}
	cout<<sum;
}