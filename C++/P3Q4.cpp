#include <iostream>

using namespace std;
int main() {
	int a=0;
	cin>>a;
	int i=0,j=0,e=0;
	int comb[7];
	while(j<=6)
		{
			for(i=15;i>=0;i--)
				{
					if(i<=2||((10<=i)&&(i<=12))||i==15)
						{
							comb[j] = (a>>i)%2;
							j++;
						}
				}
		}
	for(j=0;j<=6;j++)
		{
			e = e+((comb[j])<<(6-j));
		}
	cout<<hex<<e;
}