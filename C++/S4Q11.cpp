#include <iostream>

using namespace std;

void payOut(int i,int price[],int money,int n){
	
}


void wallet(int n,int money,int price[]){
//	while(sum<money){
//		for(int i=0;i<n;i++){
//			if((sum+price[i])<money){
//				sum+=price[i];
//			}
//		}
//	}
	bool pay[105][205]={0};
	// 每个数组第三维第一个数储存是否可以达到
	// 次数+钱数+储存钱的列表
	pay[0][0]=1;
	for(int i=0;i<104;i++){
		for(int j=0;j<=200;j++){
			if(pay[i][j]==1){
				for(int s=0;s<n;s++){
					if((j+price[s])>money){
						continue;
					}
					pay[i+1][j+price[s]]=1;
					//					int tempL[105] =pay[i][j];
				}
			}
		}
	}
	for(int i=0;i<104;i++){
		if(pay[i][money]==1){
			cout<<i<<endl;
		}
	}
}


int main() {
	int n,p;
	cin>>n>>p;
	int i=0;
	int a[10];
	while(i<n){
		cin>>a[i];
		i++;
	}
	wallet(n,p,a);
}