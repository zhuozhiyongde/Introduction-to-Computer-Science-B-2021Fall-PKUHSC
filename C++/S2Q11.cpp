#include <iostream>

using namespace std;
int storege[100000]={0};
int out(int n,int m){
	if(n==1){
		storege[n-1] = 1;
//		cout<<"("<<n<<","<<m<<")\t"<<storege[n-1]<<endl;
		return 1;
	}
	else{
		if (storege[n-1]==0){
			storege[n-1]=(out(n-1,m)+m)%n;
			if(storege[n-1]==0){
				storege[n-1]=n;
			}
//			cout<<"("<<n<<","<<m<<")\t"<<storege[n-1]<<endl;
			return storege[n-1];
		}
		else{
//			cout<<"("<<n<<","<<m<<")\t"<<storege[n-1]<<endl;
			return storege[n-1];
		}
	}
}
int main() {
	char sep=',';
	int m,k;
	cin>>m>>sep>>k;
	for(int i=k;;i++){
		if(out(i,m)==k){
			cout<<i;
			break;
		}
	}
//	cout<<out(m,k);
}