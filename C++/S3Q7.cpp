#include <iostream>
#include <algorithm>

using namespace std;
struct ST{
	int job;
	int id;
	int serial;
	int out;
};
bool cmp(ST a,ST b){
	if(a.job!=b.job){
		return a.job<b.job;
	}
	else{
		return a.id<b.id;
	}
}

int main() {
	int n;
	cin>>n;
	char sep=',';
	int i=0;
	ST a[305]={0};
	while(i<n){
		cin>>a[i].job>>sep>>a[i].id;
		a[i].out=i;
		i++;
	}
	sort(a,a+n,cmp);
	for(int i=0;i<n;i++){
		a[i].serial=i;
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(a[j].serial==i)cout<<a[j].out+1<<endl;
		}
	}
}