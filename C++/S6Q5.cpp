#include <iostream>
#include <cstring>
#include <math.h>

using namespace std;
int conAlpha(char a){
	// 0-9 : 48-57
	// A-Z : 65-90
	if(int(a)<=57)return a-48;
	else return a-55;
}
char toAlpha(int a){
	if(a<=9)return char(a+48);
	else return char(a+55);
}
int conv10(int from,char num[]){
	int weishu = strlen(num);
	int temp = weishu;
	int sum = 0;
	while(temp>=0){
		temp--;
		sum+=int(pow(from,temp))*conAlpha(num[weishu-temp-1]);
	}
	return sum;
}
void conv(int from,int to,char num[]){
	int num10 = conv10(from,num);
	int a[100]={0};
	int wei=0;
	while(num10>0){
		a[wei]=num10%to;
		wei++;
		num10/=to;
	}
	for(int i=wei-1;i>=0;i--){
		cout<<toAlpha(a[i]);
	}
}

int main() {
//	char an[5]="A620";
//	conv(16,10,an);
	int n;
	cin>>n;
	int i=0;
	int from,to;
	char temp[25];
	for(int i=0;i<n;i++){
		cin>>from;
		cin>>temp;
		cin>>to;
		conv(from,to,temp);
		if(i!=n-1)cout<<"\n";
	}
}