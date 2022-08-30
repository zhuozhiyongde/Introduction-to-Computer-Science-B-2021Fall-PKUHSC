#include <iostream>
#include <algorithm>

using namespace std;
struct num{
	int odd;
	int value;
}a[10];
bool cmp(num a,num b){
	if(a.odd == b.odd){
		if(a.odd==0){
			return a.value<b.value;
		}
		return a.value>b.value;
	}
	else{
		return a.odd>b.odd;
	}
}

int main() {
	for(int i=0;i<10;i++){
		cin>>a[i].value;
		a[i].odd = (a[i].value%2==0)?0:1;
	}
	sort(a,a+10,cmp);
	int flag =0;
	for(int i=0;i<10;i++){
		if(flag==1)cout<<" ";
		cout<<a[i].value;
		flag=1;
	}
}