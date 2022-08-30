#include <iostream>
#include <algorithm>

using namespace std;
struct info{
	int diff;
	char content[100];
	int seq;
}a[100];

int dif(char c[],int n){
	int sum=0;
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(int(c[i])>int(c[j])){
				sum++;
			}
		}
	}
	return sum;
}

bool cmp(info a,info b){
	if(a.diff!=b.diff)return a.diff<b.diff;
	else return a.seq<b.seq;
}

int main() {
	int n,m;
	cin>>n>>m;
	int i=0;
	while(i<m){
		cin>>a[i].content;
		a[i].seq = i;
		i++;
	}
	for(int i=0;i<m;i++){
		a[i].diff = dif(a[i].content,n);
//		cout<<i<<" "<<a[i].diff<<endl;
	}
	sort(a,a+m,cmp);
	cout<<endl;
	for(int i=0;i<m;i++){
		cout<<a[i].content<<endl;
	}
}