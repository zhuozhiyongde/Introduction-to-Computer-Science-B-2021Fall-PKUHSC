#include <iostream>
using namespace std;
int main() {
	unsigned int a,len=0;
	cin>>a;
	if(a!=0)
	{
		while(a)
			{
				len++;
				a=a/10;
			}
		cout<<len;

	}
	else {
		cout<<"1";
	}
}