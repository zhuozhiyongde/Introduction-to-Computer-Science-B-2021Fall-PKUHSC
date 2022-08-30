#include <iostream>
#include <stdlib.h>

using namespace std;
int a[10000];
int absx(int a){
	return (a>0)?a:-a;
}

int dmin;
int jiao;
void find(int n,int i,int max,int min){
	int temp = absx(absx(a[i]-max)-abs(a[i]-min));
	if(i==0){
		dmin = temp;
		jiao = 0;
	}
	else if(dmin>temp){
		jiao = i;
		dmin = temp;
	}
}



int main() {
	int n;
	cin>>n;
	int i=0;
	while(i<n){
		cin>>a[i];
		i++;
	}
	int max = a[0];
	int min = a[0];
	for(int i=0;i<n;i++){
		max = (max>a[i])?max:a[i];
		min = (min<a[i])?min:a[i];
	}
	for(int i=0;i<n;i++){
		find(n,i,max,min);
	}
	cout<<a[jiao];
}