#include <iostream>

using namespace std;
int main() {
	unsigned short num=0;
	cin>>num;
	cout<<hex<<num<<"\n\n";
	int a1 = 32547;
	a1 = a1 & num;
	cout<<a1<<"\n\n";
	int a2 = 0xAB35;
	a2 = a2 | num;
	cout<<a2<<"\n\n";
	int a3 = 074120;
	a3 = (~ num) ^ a3;
	a3 =(unsigned short)a3;
	cout<<a3<<"\n\n";
	return 0;
}