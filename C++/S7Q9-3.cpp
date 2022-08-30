#include <iostream>
#include <algorithm>
#include <stdio.h>

using namespace std;
int dpi[210000000]={0};
struct offer{
	int start;
	int end;
	int pay;
};
offer arr[10005];

void dp(int n,int tm){
	dpi[0]=0;
	if(tm==0){
	}
	else{
		int i=0;
		while(arr[i].end<=tm&&arr[i].end!=0){
			int A = arr[i].pay+dpi[arr[i].start];
			int B = dpi[tm-1];
			dpi[tm]=(A>B)?A:B;
			i++;
		}
	}
}


//			if(A>B)printf("%d+%d=%d\n",dpi[arr[i].start],arr[i].pay,A);

bool cmp(offer a,offer b){
	if(a.end!=b.end)return a.end<b.end;
	else return a.start<b.start;
}

int main() {
	int n;
	cin>>n;
	int i=0;
	while(i<n){
		cin>>arr[i].start>>arr[i].end>>arr[i].pay;
		i++;
	}
	sort(arr,arr+n,cmp);
	dpi[arr[0].end] = arr[0].pay;
	dpi[0]=0;
	for(int i=1;i<=arr[n-1].end;i++){
		dp(n,i);
	}
	cout<<dpi[arr[n-1].end];
}