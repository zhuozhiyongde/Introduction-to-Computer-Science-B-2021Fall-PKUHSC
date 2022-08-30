#include <iostream>
#include <math.h>
#include <algorithm>

using namespace std;

struct offer{
	long start;
	long end;
	int pay;
};
offer a[100005];
int valueMax = 0;
int temp;
bool cmp(offer a,offer b){
	if(a.start!=b.start)return a.start<b.start;
	else return a.end<b.end;
}
// 总订单数量、时间轴、目前搜索到的订单、收获的订单价值
void dfs(int n,long timenow,int now,int valuenow){
	if(now==n-1){
		int temp = valuenow;
		if(a[n-1].start>=timenow){
			temp+=a[n-1].pay;
		}
		valueMax = (temp>valueMax)?temp:valueMax;
	}
	if(now<n-1){
		for(int j=now+1;j<n;j++){
			if(a[j].start>=a[now].end){
				dfs(n,a[now].end,j,valuenow+a[now].pay);
			}
		}
		dfs(n,timenow,now+1,valuenow);
	}
}


int main() {
	int n;
	cin>>n;
	int i=0;
	while(i<n){
		cin>>a[i].start>>a[i].end>>a[i].pay;
		i++;
	}
	sort(a,a+n,cmp);
	dfs(n,0,0,0);
	cout<<valueMax;
}