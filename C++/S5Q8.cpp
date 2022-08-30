#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;
bool prime(int x){
	if(x<=0)return 0;
	if(x==1||x==2)return 1;
	int temp = int(sqrt(x));
	int flag = 0;
	for(int j=2;j<=temp;j++){
		if(x%j==0){
			flag =1;
			break;
		}
	}
	if(flag ==0)return 1;
	return 0;
}
bool logX(int x){
	int flag =0;
	if(x==2)return 0;
	if(prime(x))return 1;
	if(x%2==0)return 0;
	else{
		for(int j=3;j<x/2;j++){
			if(prime(j)){
				int temp = x;
				while(temp!=0){
					if(temp%j==0){
//						cout<<temp<<" "<<j<<endl;
						temp/=j;
					}
					else{
						break;
					}
				}
				if(temp==0){
					return 1;
				}
			}
		}
	}
	return 0;
	
}
bool origin(int x){
	if(x==1||x==2||x==4)return 1;
	if(x%2==0&&prime(x/2))return 1;
	if(prime(x))return 1;
	if(logX(x))return 1;
	return 0;
}
int main() {
	int x;
	cin>>x;
	if(origin(x))cout<<"True";
	else cout<<"False";
}