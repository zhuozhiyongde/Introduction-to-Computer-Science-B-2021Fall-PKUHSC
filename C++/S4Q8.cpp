#include <iostream>
#include <math.h>

using namespace std;

int dig(int N){
	int sum=0;
	while(N!=0){
		sum++;
		N=N/10;
	}
	return sum;
}
//int flag =1;
bool spec(int N){
	int digit = dig(N)-1;
	int flag = 1;
	for(int i=digit;i>=0;i--){
		if((N/int(pow(10,i)))%2==flag){
			if(flag==1)flag=0;
			else flag=1;
		}
		else{
			return 0;
		}
	}
	return 1;
}
int main() {
	int n;
	cin>>n;
	int i=0;
	while(i<n){
		i++;
		int L,R;
		cin>>L>>R;
		int sum=0;
		for(int num=L;num<=R;num++){
			if(spec(num))sum++;
		}
		cout<<sum<<endl;
	}
}