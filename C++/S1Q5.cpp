#include <iostream>
#include <cstring>

using namespace std;
int main() {
	char array[4][256];
	memset(array[0],'\0',sizeof(array));
	char c;
	for(int j=0;j<4;j++){
		for(int i=0;i<256;i++){
			cin.get(c);
			if(c!='\n'){
				array[j][i]=c;
			}
			else{
				break;
			}
		}
	}
	int sum=0;
	for(int i=0;i<256;i++){
		if((array[0][i]==array[1][i])&&(array[1][i]==array[2][i])&&(array[2][i]==array[3][i]))sum++;
		else{
			break;
		}
	}
	if(sum==0)return 0;
	else{
		for(int i=0;i<sum;i++){
			cout<<array[0][i];
		}
	}
}