#include <iostream>

using namespace std;
int main() {
	int n =0;
	cin>>n;
	while(n>0){
		int a=0;
		char b='n';
		cin>>a>>b;
		float sum=0;
		if(a<1){
			sum = sum+0.8;
		}
		else{
			sum = sum + 0.8+ (a-1)*0.5;
		}
		if(b=='y'){
			sum = sum+2;
		}
		printf("%.1f\n",sum);
		n--;
	}
}