#include <iostream>
#include <iomanip>
#include <stdio.h>

#define pi 3.14159
using namespace std;
int main() {
	double r,h;
	cin>>r>>h;
//	cout<<"Area = "<<ios::fixed<<setprecision(3)<<pi*2*r*h+pi*r*r*2;
	printf("Area = %.3f",pi*2*r*h+pi*r*r*2);
}