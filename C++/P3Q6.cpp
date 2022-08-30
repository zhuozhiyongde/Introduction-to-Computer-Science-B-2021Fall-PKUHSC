#include <iostream>

using namespace std;
int main() {
	int a,b;
	cin>>a>>b;
	if(b>a+1)
	{
		for(a++;a<b;a++)
			cout<<a<<"\n\n";
		
	}
	else
	{
		cout<<a;
	}
}