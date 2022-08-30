#include <iostream>

using namespace std;
int main() {
	for(int i=1;i<8;i++)
	{
		for(int j=1;j<8;j++)
		{
			if(j<7)
				cout<<oct<<i<<"*"<<j<<"="<<i*j<<" ";
			else
				cout<<oct<<i<<"*"<<j<<"="<<i*j;
		}
		cout<<"\n\n";
	}
}