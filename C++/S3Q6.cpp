#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

bool similar(char a[],char b[]){
	if(strlen(a)!=strlen(b)){
		return 0;
	}
	int n = strlen(a);
	sort(a,a+n);
	sort(b,b+n);
	for(int i=0;i<n;i++){
		if(a[i]!=b[i]){
			return 0;
		}
	}
	return 1;
}

int main() {
	int n;
	cin>>n;
	int i=0;
	char a[205]={0};
	char b[205]={0};
	while(i<n){
		cin.get();
		i++;
		cin>>a>>b;
		if(similar(a,b))cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}