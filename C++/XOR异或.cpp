#include <iostream>
#include <cstring>

using namespace std;
int main() {
	char a[2000];
	char b[2000];
	char c[2000];
	cin>>a>>b;
	int as = strlen(a);
	int bs = strlen(b);
	if(as!=bs){
		if(as>bs){
			strcpy(c+as-bs,b);
		}
		if(as<bs){
			strcpy(c+bs-as,a);
		}
		for(int i=0;i<((as<bs)?as:bs);i++){
			c[i]='0';
		}
	}
	if(as>bs){
		for(int i=0;i<as;i++){
			if(a[i]==c[i]){
				cout<<'0';
			}
			else{
				cout<<'1';
			}
		}
	}
	else if(as<bs){
		cout<<'b'<<endl;
		for(int i=0;i<bs;i++){
			if(b[i]==c[i]){
				cout<<'0';
			}
			else{
				cout<<'1';
			}
		}
	}
	else{
		for(int i=0;i<bs;i++){
			if(b[i]==a[i]){
				cout<<'0';
			}
			else{
				cout<<'1';
			}
		}
	}
}