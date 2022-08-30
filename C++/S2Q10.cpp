#include <iostream>
#include <math.h>

using namespace std;
bool prime(int x){
	for(int i=2;i<=sqrt(x);i++){
		if(x%i==0)return 0;
	}
	return 1;
}
bool square(int x){
	if(x==0)return 0;
	if(int(sqrt(x))==sqrt(x))return 1;
	return 0;
}
int main() {
	int x;
	int m,n;
	cin>>m>>n;
	int sum=0;
	for(int i=m;i<n+1;i++){
		if(prime(i/1000000)&&square(i%1000)){
			int flag=0;
			for(int j=2;j<9;j++){
				if(((i%int(pow(10,j))-i%int(pow(10,j-2)))/int(pow(10,j-2))==13)){
					flag=1;
				}
			}
			if(flag==0){
//				cout<<i<<endl;
				sum++;
			}
		}
	}
	cout<<sum;
}