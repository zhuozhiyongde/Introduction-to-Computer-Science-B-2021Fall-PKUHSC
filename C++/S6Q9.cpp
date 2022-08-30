#include <iostream>
#include <stdio.h>
#include <algorithm>

using namespace std;
int m=0,arr[103]={0};
int a[1000]={0};
int ans[105][1000]={0};
//void dfs(int p,int i,int n){
//	if(p==0){
//		
//		for(int j=1;j<=i-1;j++){
//			printf("%d ",arr[j]);
//		}
//		printf("\n");
//	}
//	if(p>0){
////		printf("%d %d %d\n",p,i,n);
//		for(int j=m;j<n;j++){
//			arr[i] = a[j];
//			dfs(p-a[j],i+1,a[j]);
//		}
//	}
//}

// p为价钱，i为目前搜索到的数目，n为目前搜索到的元素的角标
bool flag=0;
void dfs(int p,int ansLNum,int n,int arrMax){
	if(p==0){
		for(int j=1;j<ansLNum-1;j++){
			printf("%d,",arr[j]);
		}
		printf("%d\n",arr[ansLNum-1]);
		flag =1;
	}
	if(p>0){
		for(int j=n;j<arrMax;j++){
			arr[ansLNum] = a[j];
			dfs(p-a[j],ansLNum+1,j+1,arrMax);
		}
	}
}


int main() {
//	int n,p;
//	scanf("%d %d",&n,&p);
//	int i=0;
//	while(i<n){
//		scanf("%d",&a[i]);
//		i++;
//	}
//	int temp;
	int n=0,m;
	for(int i=0;;i++){
		int temp;
		cin>>temp;
		char sep;
		cin.get(sep);
		if(sep==' '){
			a[i]=temp;
			n++;
		}
		else{
			m=temp;
			break;
		}
	}
	sort(a,a+n);
//	cout<<n<<" "<<m;
	dfs(m,1,0,n);
	if(flag==0){
		cout<<"NULL";
	}
}