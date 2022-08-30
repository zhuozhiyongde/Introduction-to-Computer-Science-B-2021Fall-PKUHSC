#include <iostream>

using namespace std;
int main() {
	long long a=0,b=1,c=0,sum=0,i=0,n;//定义fn=a,fn-1=b，中间变量c,求和sum
	cin>>n;
	for(i=0;i<n;i++)
	{
		c=a+b;
		b=a;
		a=c;
		sum=sum+a;
	}
	cout << sum << endl;
	return 0;
}