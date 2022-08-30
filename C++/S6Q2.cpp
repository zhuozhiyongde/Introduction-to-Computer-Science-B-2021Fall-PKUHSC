#include <iostream>
#include <stdio.h>

using namespace std;
int main() {
	int n;
	cin>>n;
	int i=0;
	int out=0;
	int sum=0;
	while(i<n){
		i++;
		int temp1,temp2;
		cin>>temp1>>temp2;
		out+=temp1;
		sum+=temp2;
	}
	printf("%.2f%%",double(out)/sum*100);
}