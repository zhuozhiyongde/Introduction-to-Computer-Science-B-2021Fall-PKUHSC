#include <iostream>
#include <algorithm>
//#include<bits/stdc++.h>

using namespace std;

struct offer{
	int start;
	int end;
	int pay;
};

offer a[100050];

int n;

// 定义dpi为前i个订单能获得的最大利益
int dpi[100050];

bool cmp(offer a, offer b){
	if(a.end<b.end)return true;
	else return false;
}

int main() {
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].start>>a[i].end>>a[i].pay;
	}
	
	// 依据end排序
	sort(a+1,a+n+1,cmp);
	
	// 初始边界
	a[0].end = -1;
	dpi[0] = 0;
	
	for(int i=1;i<=n;i++){
		dpi[i] = dpi[i-1];
		int l = 0;
		int r = i;
		
		// 二分法查找最大相容前订单
		while(l<r){
			int mid = (l+r+1)/2;
			if(a[mid].end<=a[i].start) l = mid;
			else r = mid-1;
		}
		
		// 比较判断dpi[i-1] 和 最大相容前订单+订单本身价值
		dpi[i] = max(dpi[i],dpi[l]+a[i].pay);
	}
	cout<<dpi[n]<<endl;
	
}