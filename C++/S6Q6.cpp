#include <iostream>

using namespace std;
bool Art=0;
void sep(int start,int n){
	int sum = 0;
	int temp = start;
	int num = 0;
	while(sum<n){
		sum+=temp;
		temp++;
		num++;
	}
	if(sum==n){
		bool flag =0;
		for(int i=0;i<num;i++){
			if(flag==1)cout<<"+";
			cout<<start+i;
			flag=1;
		}
		cout<<"="<<n<<endl;
		Art = 1;
	}
}
int main() {
	int n;
	cin>>n;
	for(int i=n/2;i>0;i--){
		sep(i,n);
	}
	if(Art==0)cout<<"None";
}