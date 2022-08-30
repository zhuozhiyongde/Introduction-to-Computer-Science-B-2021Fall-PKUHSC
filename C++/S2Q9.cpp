#include <iostream>
//#include <climits>

using namespace std;
//long sumMoney2(int k,int a[],int n,int sum){
//	if(k==1){
//		int sum1=sum+a[n-1];
//		int sum2=sum+a[0];
//		return((sum1>sum2)?sum1:sum2);
//	}
//	else{
//		int b[n-1];
//		int c[n-1];
//		for(int i=0;i<n-1;i++){
//			b[i]=a[i];
//		}
//		long sum1 = sum+a[n-1];
//		for(int j=1;j<n;j++){
//			c[j-1]=a[j];
//		}
//		long sum2 = sum+a[0];
//		long try1 = sumMoney(k-1, b, n-1, sum1);
//		long try2 = sumMoney(k-1, c, n-1, sum2);
//		return((try1>try2)?try1:try2);
//	}
//}
long sumMoney(int k,int a[],int n){
	if(n==k){
		long sum=0;
		for(int i=0;i<n;i++){
			sum+=a[i];
		}
		return sum;
	}
	else{
		long sum=0;
		for(int i=0;i<n;i++){
			sum+=a[i];
		}
//		int max=0;
		long min;
		long sum2;
		for(int i=0;i<k+1;i++){
			if(i==0){
				sum2=0;
				for(int j=0;j<n-k;j++){
					sum2+=a[j];
				}
				min=sum2;
				continue;
			}
			else{
				sum2=sum2-a[i-1];
				sum2=sum2+a[i-1+n-k];
			}
			min = (sum2<min)?sum2:min;
		}
		return sum-min;
	}
}
int main() {
	int n,k;
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<sumMoney(k, a, n);
}