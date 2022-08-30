#include <iostream>

long Fibonacci(int n){
	if (n==0)
		return 0;
	else if (n==1 || n==2)
		return 1;
	else if (n==3)
		return 2;
	else
		return 3*Fibonacci(n-3)+2*Fibonacci(n-4);
}
int main(){
	using namespace std;
	int n;
	cin>>n;
	long sum = Fibonacci(n+2)-1;
	cout<<sum;
	return 0;
}