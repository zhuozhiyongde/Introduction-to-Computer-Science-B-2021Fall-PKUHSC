#include <iostream>
#include <stdio.h>

using namespace std;
int main() {
	char line[256];
	cin.getline(line,256);
	for(int i=0;i<256;i++){
		if(line[i+1]=='\0'){
			break;
		}
//		cout<<line[i]<<endl;
		if(line[i]=='G'&&line[i+1]=='T'){
//			cout<<line[i]<<" "<<i;
			line[i]=71;
			line[i+1]=71;
			i++;
		}
	}
	cout<<line;
}