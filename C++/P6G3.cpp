#include <iostream>
#include <iomanip>
#include <stdio.h>

using namespace std;
int main() {
	float a=0,b=0,c=0;
	float idSum[3]={0,0,0};
	int id=0,n=0;
	float abcSum[3]={0,0,0};
	char abc;
	for(int i=0;i<3;i++){
		cin>>id>>n;
		while(cin.get()!='\n'){
			float fare=0;
			scanf("%c %f",&abc,&fare);
			idSum[id-1]+=fare;
			if(abc=='A')
				abcSum[0]+=fare;
			else if(abc=='B')
				abcSum[1]+=fare;
			else if(abc=='C')
				abcSum[2]+=fare;
			
		}
	}
	for(int i=0;i<3;i++){
		printf("%d %.2f\n",i+1,idSum[i]);
	}
	for(int i=0;i<3;i++){
		printf("%c %.2f\n",char(65+i),abcSum[i]);
	}
	
}