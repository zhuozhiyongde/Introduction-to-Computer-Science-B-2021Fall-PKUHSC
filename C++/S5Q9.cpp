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
};
student s[10005];

double calGP(int grade){
	if(grade>=60){
		double PA = 4-3*(pow((10-(grade/10.0)),2.5)/32.0);
		return PA;
	}
	else{
		return 0;
	}
}
bool cmp(student A,student B){
	if(A.GPA!=B.GPA){
		return A.GPA>B.GPA;
	}
	else{
		return A.serial<B.serial;
	}
}
int main() {
	int n;
	cin>>n;
	int courseSerial;
	for(int i=1;i<n+1;i++){
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
			cin>>courseGrade;
			SumGP = SumGP +calGP(courseGrade)*a[num];
			SumCred = SumCred + a[num];
		}
		s[i].GPA = double(SumGP)/double(SumCred);
	}
	
	sort(s,s+m,cmp);
	
	int maxStu = 0;
	for(int i=1;i<m;i++){
		if(s[i].GPA == s[0].GPA){
			maxStu++;
		}
		else{
			break;
		}
	}
	for(int i=0;i<maxStu;i++){
		cout<<s[i].serial<<" ";
	}
	
	cout<<s[maxStu].serial<<endl;
}