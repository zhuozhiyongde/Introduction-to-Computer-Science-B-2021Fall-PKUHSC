#include <iostream>
#include <algorithm>

using namespace std;
int c[10005]={0};
int timeuse = 0;
int temp;
void tog(int n,int dis){
	if(n==1)cout<<timeuse<<endl;
	else{
		timeuse += c[dis]+c[dis+1];
		c[dis] = c[dis]+c[dis+1];
		c[dis+1] = -1;
		sort(c,c+temp);
		tog(n-1,dis+1);
	}
}


int main() {
	int n;
	cin>>n;
	temp=n;
	int i=0;
	while(i<n){
		cin>>c[i];
		i++;
	}
	sort(c,c+n);
	tog(n,0);
}