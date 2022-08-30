#include <iostream>
#include <algorithm>

using namespace std;
struct node{
	int l,r,w;
	
	bool operator <(const node& x) const {
		return r<x.r;
	}
}a[100050];

int n;
int dp[100050];


int main() {
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d%d%d",&a[i].l,&a[i].r,&a[i].w);
	}
	
	sort(a+1,a+1+n);
	a[0].r = -1;
	dp[0] = 0;
	for(int i=1;i<=n;i++){
		dp[i] = dp[i-1];
		int l = 0, r = i;
		while(l<r){
			int mid = (l+r+1) >> 1;
			if(a[mid].r <= a[i].l) l = mid;
			else r = mid -1;
		}
		dp[i] = max(dp[i], dp[l]+a[i].w);
	}
	
	cout<<dp[n]<<endl;
}