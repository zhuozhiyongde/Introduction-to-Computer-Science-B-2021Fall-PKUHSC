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
bool cmp(offer a,offer b){
	if(a.start!=b.start)return a.start<b.start;
	else return a.end<b.end;
}
// 总订单数量、时间轴、目前搜索到的订单、收获的订单价值
void dfs(int n,long timenow,int now,int valuenow){
	if(now==n-1){
		if(a[n-1].start>=timenow)valuenow+=a[n-1].pay;
		valueMax = (valuenow>valueMax)?valuenow:valueMax;
	}
	if(now<n-1){
		int flag =0;
		for(int j=now+1;j<n;j++){
			if(a[j].start>=a[now].end){
				//				printf("%d-%d\n",now,j);
				flag = 1;
				dfs(n,a[now].end,j,valuenow+a[now].pay);
			}
			//			else{
			//				printf("break:%ld %ld - (%d,%d)\n",a[j].start,a[now].end,j,now);
			//				dfs(n,timenow,now+1,valuenow);
			//			}
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
//	for(int i=0;i<n;i++){
//		printf("%ld %ld %d (%d)\n",a[i].start,a[i].end,a[i].pay,i);
//	}
	dfs(n,0,0,0);
//	if(valueMax==615){
//		for(int i=0;i<n;i++){
//			printf("%ld %ld %d (%d)\n",a[i].start,a[i].end,a[i].pay,i);
//		}
//	}
	cout<<valueMax;
}