#include <iostream>

using namespace std;
int main() {
	int N,M;
	cin>>N>>M;
	int sum=0;
	while(N>0){
		if((N-5*M)>=0){
			sum = sum+7;
			N = N-5*M;
		}
		else if((N-3*M)>=0){
			sum = sum+4;
			N = N-3*M;
		}
		else{
			int nowMax = N/M;
			sum = sum+nowMax;
			break;
		}
	}
	cout<<sum;
}