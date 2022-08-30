#include <iostream>
#include <math.h>
#include <algorithm>
#include <stdio.h>

using namespace std;
int a[1000005];

struct student{
	double GPA;
	int serial;
	int cs;
//	course c[1000];
};
student s[10005];

double calGP(int grade){
	if(grade>=60){
		double PA = 4-3*(pow((10-(grade/10.0)),2.5)/32.0);
//		double temp = 10-grade/10.0;
//		double PA = 4-3*(temp*temp*sqrt(temp))/32.0;
//		PA = round(PA*100)/100.00;
//		cout<<PA<<endl;
		return PA;
	}
	else{
		return 0;
	}
}
bool cmp(student A,student B){
	if(A.GPA!=B.GPA){
//		cout<<A.GPA<<" "<<B.GPA<<endl;
		return A.GPA>B.GPA;
	}
	else{
		return A.serial<B.serial;
	}
}
int main() {
	int n;
//	scanf("%d\n",&n);
	cin>>n;
	int courseSerial;
	for(int i=1;i<n+1;i++){
//		scanf("%d %d\n",&courseSerial,&a[courseSerial].cred);
		cin>>courseSerial;
		cin>>a[courseSerial];
	}
	int m;
	cin>>m;
	for(int i=0;i<m;i++){
		cin>>s[i].cs>>s[i].serial;
		double SumGP = 0;
		int SumCred = 0;
		int courseGrade = 0;
		for(int j=0;j<s[i].cs;j++){
			int num;
			cin>>num;
//			s[i].csl[j]=num;
			cin>>courseGrade;
			SumGP = SumGP +calGP(courseGrade)*a[num];
			SumCred = SumCred + a[num];
		}
		s[i].GPA = double(SumGP)/double(SumCred);
//		s[i].GPA = round(double(SumGP)/double(SumCred)*100)/100.00;
//		cout<<s[i].GPA<<endl;
	}
	
	sort(s,s+m,cmp);
	
//	for(int i=0;i<m;i++){
//		cout<<s[i].GPA<<endl;
//	}
	
//	float maxGPA = ;
//	cout<<"MaxGPA:"<<s[0].GPA<<endl;
	int maxStu = 0;
	for(int i=1;i<m;i++){
//		cout<<"Now:"<<s[i].GPA<<endl;
		if(s[i].GPA == s[0].GPA){
//			cout<<"Max+"<<endl;
			maxStu++;
		}
		else{
			break;
		}
	}
	for(int i=0;i<maxStu;i++){
		cout<<s[i].serial<<" ";
	}
	if(s[maxStu].serial==55935){
//		cout<<;
	}
	cout<<s[maxStu].serial<<endl;
//	cout<<n;
}