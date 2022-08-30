#include <iostream>
#include <math.h>

using namespace std;
bool a[100000]={0};

bool prime(int x){
	if(x<=1)return 0;
	if(x==2)return 1;
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

int weishu(int x){
	int sum = 0;
	while(x!=0){
		x = x/10;
		sum++;
	}
	return sum;
}

int conv(int x){
	int dig = weishu(x)-1;
	int temp = 0;
	while(x!=0){
		temp += x%10*int(pow(10,dig));
		dig--;
		x = x/10;
	}
	return temp;
}

int main() {
	int n;
	int m;
	char sep;
	cin>>n>>sep>>m;
	int flag = 0;
	for(int i=n;i<=m;i++){
		if(prime(i)&&a[i]==0){
			if(prime(conv(i))&&n<=conv(i)&&conv(i)<=m){
				a[i]=1;
				a[conv(i)]=1;
				if(flag==1)cout<<',';
				flag = 1;
				cout<<i;
			}
		}
	}
	if(flag==0)cout<<"NULL";
}