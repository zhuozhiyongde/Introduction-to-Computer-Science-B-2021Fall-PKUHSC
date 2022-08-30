#include <iostream>
#include <stdio.h>

using namespace std;
int m=0,arr[103]={0};
int a[10]={0};
int ans[105][1000]={0};

// p为价钱，i为目前搜索到的数目，n为目前搜索到的元素的角标
bool flag=0;
void dfs(int p,int ansLNum,int n,int arrMax){
	if(p==0){
		for(int j=1;j<ansLNum-1;j++){
			printf("%d ",arr[j]);
		}
		printf("%d\n",arr[ansLNum-1]);
		flag =1;
	}
	if(p>0){
		for(int j=n;j<arrMax;j++){
			arr[ansLNum] = a[j];
			dfs(p-a[j],ansLNum+1,j,arrMax);
		}
	}
}


int main() {
	int n,p;
	scanf("%d %d",&n,&p);
	int i=0;
	while(i<n){
		scanf("%d",&a[i]);
		i++;
	}
	dfs(p,1,0,n);
	if(flag==0){
		cout<<"NO";
	}
}