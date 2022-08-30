#include <iostream>
#include <iomanip>

using namespace std;
int main() {
	double n = 0;
	cin >>n;
	cout<<setiosflags(ios::fixed)<<setprecision(5)<<(5*(n-32))/9;
}