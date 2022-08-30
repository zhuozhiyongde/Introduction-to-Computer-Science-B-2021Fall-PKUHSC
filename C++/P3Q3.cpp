#include <iostream>

using namespace std;
int main() {
	unsigned short a=0;
	cin>>a;
	int i=0,output=0;
	bool comb[16];
	for(i=0;i<=15;i++)
	{
		comb[15-i] = (a>>i)%2;
	}
	for(i=0;i<=15;i++)
	{
		cout<<comb[i];
	}
}