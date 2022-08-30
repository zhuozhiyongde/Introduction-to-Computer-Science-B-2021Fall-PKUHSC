#include <iostream>
#include <math.h>
bool pn(int n){
    if(n<=20&&n==2||n==3||n==5||n==7||n==9||n==11||n==13||n==17||n==19)
        return 1;
    else if(n<=20)
        return 0;
    else
        {
            int half = floor(sqrt(n)),i=0;
            for(i=2;i<half+1;i++)
                {
                    if(n%i==0)
                        return 0;
                }
            return 1;

        }
}
int main(){
    using namespace std;
    unsigned int n;
    cin>>n;
    if(pn(n))
        cout<<"yes";
    else
        cout<<"no";   
}