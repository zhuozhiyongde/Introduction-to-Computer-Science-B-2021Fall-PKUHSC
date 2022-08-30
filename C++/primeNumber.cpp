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
int answer(int n){
    int m=0;
    m = (n%10)*1000+(n%100-n%10)*10+(n%1000-n%100)/10+floor(n/1000);
    return m;
}

bool judge(int n) {
    return (answer(n)==n)?true:false;
}

int main(){
    using namespace std;
    int i;
    for(i=1000;i<10000;i++)
    {
        if(judge(i)==1){
            if (pn(i)==1){
                cout<<i<<" yes"<<endl;
            }
        }
    }
//    int n;
//    cin>>n;
//    if(pn(n)==0)
//        cout<<"no";
//    else
//        cout<<"yes";
}