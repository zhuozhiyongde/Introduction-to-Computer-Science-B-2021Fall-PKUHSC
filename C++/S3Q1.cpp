#include <iostream>
#include <stdio.h>
#include <iomanip>

using namespace std;
int main() {
	int r;
	cin>>r;
	double V=0;
	V= 4.0/3.0*3.14159*r*r*r;
//	cout<<V;
	cout.setf(ios::fixed);
	cout<<setprecision(3)<<V;
}