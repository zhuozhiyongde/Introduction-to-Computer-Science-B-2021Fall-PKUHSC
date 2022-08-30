#include <iostream>
#include <cstring>

using namespace std;
int main() {
	char red[1005],blue[1005];
	cin>>red>>blue;
	if(strlen(red)>strlen(blue)){
		cout<<"RED";
		return 0;
	}
	if(strlen(red)<strlen(blue)){
		cout<<"BLUE";
		return 0;
	}
	for(int i=0;i<1005;i++){
		if(red[i]=='\0'){
			cout<<"EQUAL";
			return 0;
		}
		else if(red[i]==blue[i]){
			continue;
		}
		bool cmp;
		cmp = (red[i]>blue[i])?1:0;
		if(cmp==1){
			cout<<"RED";
			return 0;
		}
		if(cmp==0){
			cout<<"BLUE";
			return 0;
		}
	}
}