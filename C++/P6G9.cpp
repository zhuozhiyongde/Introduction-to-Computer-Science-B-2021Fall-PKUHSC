#include <iostream>
#include <stdio.h>

using namespace std;
int main() {
	int flag = 0;
	int n=1;
	while(1){
		char ch;
		if((ch=getchar())!=' '){
			if(ch!='\n'){
				flag=0;
				cout<<ch;
			}
			else {
				break;
			}
		}
		else if(flag==0){
			flag=1;
			cout<<ch;
		}
	}
}