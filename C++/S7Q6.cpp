#include <iostream>
#include <stdio.h>

using namespace std;
int par[20]={0};
//void pair(int n,int sum){
//	for(int i=0;i<n;i++){
//		
//	}
//}

char conv(int i){
	if(i==1)return '(';
	else if(i==-1)return ')';
	else return 0;
}
void dfs(int n,int sum,int lp,int rp){
	if(lp==n&&rp==n){
		for(int i=0;i<2*n-1;i++){
			cout<<conv(par[i]);
		}
		cout<<conv(par[2*n-1])<<endl;
	}
	else if(sum<2*n&&lp>=rp){
		if(lp<n){
			//			cout<<"lp:"<<lp<<" rp:"<<rp<<endl;
			par[lp+rp]=1;
			dfs(n,sum+1,lp+1,rp);
		}
		if(rp<lp){
			par[lp+rp]=-1;
			//			cout<<"rp:"<<rp<<" lp:"<<lp<<endl;
			dfs(n,sum+1,lp,rp+1);
		}
	}
//	else{
//		for(int j=0;)
//		if(lp<n){
////			cout<<"lp:"<<lp<<" rp:"<<rp<<endl;
//			par[lp+rp]=1;
//			for(int j=sum;j<2*n;j++){
//				dfs(n,sum+1,lp+1,rp);
//			}
//		}
//		else if(rp<n){
//			par[lp+rp]=-1;
////			cout<<"rp:"<<rp<<" lp:"<<lp<<endl;
//			for(int j=sum;j<2*n;j++){
//				dfs(n,sum+1,lp,rp+1);
//			}
//		}
		
//	}
}
int main() {
	int n;
	cin>>n;
	dfs(n,0,0,0);
}