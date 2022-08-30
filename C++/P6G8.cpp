#include <iostream>
#include <cstring>

using namespace std;


int main() {
	int n=0;
	cin>>n;
	n+=1;
	string s1;
	string s2="";
	while(n>0){
		char a[200];
		cin.getline(a,200);
		s1=a;
		if(s1.length()>s2.length()){
			s2=s1;
		}
		n--;
	}
	cout<<s2;
}