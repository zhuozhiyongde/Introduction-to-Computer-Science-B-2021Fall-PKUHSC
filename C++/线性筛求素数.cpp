#include <iostream>
#include <cstring>

using namespace std;
int main(){
	int n=0;
	int a[3100];
	memset(a,n,sizeof(a));
	cin>>n;
	for(int i=2;i<3100;i++){
		for(int j=2;i*j<3100;j++){
			if(a[i*j]==0)
				a[i*j]=1;
		}
	}
	if(a[n])
		cout<<"no"<<endl;
	else
		cout<<"yes"<<endl;
}