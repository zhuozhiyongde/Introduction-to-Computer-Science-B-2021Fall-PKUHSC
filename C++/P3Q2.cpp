#include <iostream>
using namespace std;
int main(){
    unsigned short a=0,b=0;
    scanf("%hu %hu",&a,&b);
    cout<<hex<<a<<"\n\n"<<b<<"\n\n";
    unsigned short c = a ^ b;
    cout<<c<<"\n\n";
    unsigned int d = (a>>8)*256+(b%256);
    cout<<d<<"\n\n";
    bool comb[16];
    int i = 0,j = 0;
    for(i=0;i<=15;i++)
    {
        if(i%2==0)
            comb[i] = (b>>(15-i))%2;
        else
            comb[i] = (a>>(15-i))%2;
    }
    unsigned short e=0;
    for(j=0;j<=15;j++)
        {
            e = e+((comb[j])<<(15-j));
        }
    cout<<e;

    return 0;
}