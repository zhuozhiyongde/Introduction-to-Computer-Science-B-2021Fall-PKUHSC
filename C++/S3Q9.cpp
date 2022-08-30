#include <iostream>
#include <algorithm>

using namespace std;
bool cmp(int a,int b){
	return a>b;
}

int game(int a[],int b[],int n){
	sort(b,b+n,cmp);
	sort(a,a+n,cmp);
	int max=-10000;
	for(int i=0;i<n;i++){
//		int *p=&b[i];
//		int *q=&a[n-i];
		int sum=0;
		int draw=0;
		int flag=0;
		for(int j=i;j<n;j++){
//			cout<<j<<" "<<i<<endl;
			if(b[j]<a[j-i]){
//				cout<<"Win"<<b[j]<<" "<<a[j-i]<<endl;
				sum++;
			}
			else if(b[j]==a[j-i]){
//				cout<<"Draw"<<b[j]<<" "<<a[j-i]<<endl;
				draw++;
			}
			else{
//				cout<<"End"<<b[j]<<" "<<a[j-i]<<endl;
				flag=1;
				break;
			}
		}
		int value = sum*200-i*200;
//		cout<<i<<" "<<sum<<" "<<draw<<" "<<value<<endl;
		if(flag==0){
			max=(max<value)?value:max;
		}
		if(sum==0&&draw==0&&flag==1){
			value = -n*200;
			max=(max<value)?value:max;
		}
//		while(*p>=*q){
//			p++;
//			q--;
//			cout<<*p<<" "<<*q<<endl;
//			sum++;
		//		}
//		cout<<i<<" "<<sum<<" "<<draw<<endl;
	}
//	cout<<max;
	return max;
}


int main() {
//	int b[3] = {95,87,74};
//	int a[3] = {92,83,71};
//	int a[2]={20,19};
//	int b[2]={22,18};
//	game(a,b,2);
//	sort(b,b+3);
//	cout<<b;
//	for(int i=0;i<3;i++){
//		cout<<b[i];
	//	}
	int n;
	while(1){
		int a[1000];
		int b[1000];
		cin>>n;
		if(n==0)return 0;
		int i=0;
		while(i<n){
			cin>>a[i];
			i++;
		}
		i=0;
		while(i<n){
			cin>>b[i];
			i++;
		}
		cout<<game(a,b,n)<<endl;
	}
}