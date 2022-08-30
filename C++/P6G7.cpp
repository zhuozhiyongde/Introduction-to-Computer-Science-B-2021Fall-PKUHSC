#include <iostream>

using namespace std;
int main() {
	char s1[200];
	char s2[200];
	cin>>s1;
	cin>>s2;
	int lenOfS1=0;
	for(int i=0;i<200;i++){
		if(s1[i]!='\0')
			lenOfS1++;
		else
			break;
	}
	for(int i=0;i<200;i++){
		if(s2[i]!='\0'){
			s1[i+lenOfS1]=s2[i];
		}
		else{
			s1[i+lenOfS1]='\0';
			break;
		}
	}
	cout<<s1;
}