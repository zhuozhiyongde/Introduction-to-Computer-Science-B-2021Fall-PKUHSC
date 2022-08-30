#include <iostream>
#include <iomanip>

using namespace std;
int main() {
	char str[100];
	cin.getline(str,100);
	char word;
	cin>>word;
	int sum = 0;
	for(int i=0;i<100;i++){
		if(str[i]=='\0')
			break;
		else if(str[i]==word){
			sum+=1;
			str[i] = '\t';
		}
	}
	cout<<sum<<endl;
	for(int i=0;i<100;i++){
		if(str[i]=='\0')
			break;
		else if(str[i]=='\t')
			continue;
		else
			cout<<str[i];
	}
}