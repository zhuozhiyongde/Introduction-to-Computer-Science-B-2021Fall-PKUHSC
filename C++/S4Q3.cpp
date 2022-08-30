#include <iostream>
#include <stdio.h>

using namespace std;
int A,B,K,L,N;

int storge[1000000]={0};

int Fib(int N){
	if(N==0){
		return K;
	}
	if(N==1){
		return L;
	}
	else if(Fib(N-1)!=0&&Fib(N-2)!=0){
		storge[N] = A*storge[N-1]+B*storge[N-2];
		return A*storge[N-1]+B*storge[N-2];
	}
	else{
		Fib(N-1);
		Fib(N-2);
		storge[N] = A*storge[N-1]+B*storge[N-2];
		return A*storge[N-1]+B*storge[N-2];
	}
}

int main() {
	cin>>A>>B>>K>>L>>N;
	storge[0]=K;
	storge[1]=L;
	cout<<Fib(N);
}