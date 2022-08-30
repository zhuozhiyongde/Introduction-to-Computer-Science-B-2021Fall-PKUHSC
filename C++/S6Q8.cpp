#include <iostream>
#include <time.h>
#include <stdio.h>
#include <cstring>

using namespace std;
bool isLeap(int n){
	if((n%4==0&&n%100!=0)||(n%4==0&&n%400==0)){
		return true;
	}
	return false;
}
int yearDays(int n){
	if(isLeap(n))return 366;
	else return 365;
}
int month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
void cal(int n){
	int year = 2000;
	int flag = 0;
	char c[10];
	if(n%7==0)strcpy(c, "Saturday");
	if(n%7==1)strcpy(c, "Sunday");
	if(n%7==2)strcpy(c, "Monday");
	if(n%7==3)strcpy(c, "Tuesday");
	if(n%7==4)strcpy(c, "Wednesday");
	if(n%7==5)strcpy(c, "Thursday");
	if(n%7==6)strcpy(c, "Friday");
	n+=1;
	while(flag==0){
		if((n-yearDays(year))>0){
			n-=yearDays(year);
			year++;
		}
		else{
			if(isLeap(year))month[1]=29;
			else month[1]=28;
			for(int i=0;i<12;i++){
				if((n-month[i])>0){
					n-=month[i];
					continue;
				}
				else{
					if(i+1<10){
						if(n<10){
							printf("%d-0%d-0%d ",year,i+1,n);
						}
						else{
							printf("%d-0%d-%d ",year,i+1,n);
						}
					}
					else if(n<10){
						printf("%d-%d-0%d ",year,i+1,n);
					}
					else printf("%d-%d-%d ",year,i+1,n);
					cout<<c<<endl;
					flag=1;
					break;
				}
			}
		}
	}
}
int main() {
	int n;
	while(1){
		cin>>n;
		if(n==-1)break;
		cal(n);
	}
}