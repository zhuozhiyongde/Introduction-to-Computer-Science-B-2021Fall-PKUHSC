#include <iostream>
#include <algorithm>

using namespace std;

struct Product{
	int price;
	int num;
};

bool cmp(Product A,Product B){
	if(A.price==B.price){
		return A.num>B.num;
	}
	return A.price<B.price;
}

int main() {
	int M,N;
	cin>>N>>M;
	Product a[10000];
	for(int i=0;i<M;i++){
		cin>>a[i].price>>a[i].num;
	}
	sort(a,a+M,cmp);
	int n=0;
	int sum=0;
	for(int i=0;i<M;i++){
		if((a[i].num+n)<N){
			n = a[i].num+n;
			sum = sum+a[i].num*a[i].price;
		}
		else if((a[i].num+n)==N){
			n = N;
			sum = sum+a[i].num*a[i].price;
			break;
		}
		else if((a[i].num+n)>N){
			sum = sum+(N-n)*a[i].price;
			n=N;
			break;
		}
	}
	cout<<sum;
}