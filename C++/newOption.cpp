#include <iostream>
#include <math.h>
#include <cstring>
#include <stdio.h>

using namespace std;
double sumSqrt(double a,double b){
	double sum = a*a+b*b;
	sum = sqrt(sum);
	return sum;
}
double subAbs(double a,double b){
	double absx = a-b;
	absx = (absx>0)?absx:-absx;
	return absx;
}
int main() {
	char ch;
	char alg;
	double a0;
	double b0;
	cin>>a0;
	while(cin.get(ch)){
		if(ch!=' '){
			printf("%.3f",a0);
			return 0;
		}
		cin>>alg>>b0;
		if(alg == '@'){
			a0 = sumSqrt(a0, b0);
		}
		else{
			a0 = subAbs(a0, b0);
		}
	}
	
}