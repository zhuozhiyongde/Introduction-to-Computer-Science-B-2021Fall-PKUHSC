#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;
int main() {
	char a[25]={0};
	char b[25]={0};
	cin>>a>>b;
	sort(a,a+strlen(a));
	sort(b,b+strlen(b));
	for(int i=0;i<25;i++){
		if(a[i]!=b[i]){
			cout<<b[i];
			return 0;
		}
	}
}