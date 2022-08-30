#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;
int main() {
	int n,a,s=0;
	cin>>n>>a;
	for(int i=n;i>0;i--){
		s = s+a*pow(10,i-1)*(n+1-i);
//		cout<<s<<endl;
	}
	printf("%d",s);
}