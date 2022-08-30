#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;
int main() {
	int n;
	cin>>n;
	cin.get();
	char a[10][200];
	for(int i=0;i<n;i++){
		char c;
		int a[26]={0};
		while(cin.get(c)){
			if(c!='\n'){
				a[int(c)-97]+=1;
			}
			else{
				for(int j=0;j<26;j++){
					if(j!=25)cout<<a[j]<<" ";
					else cout<<a[j]<<endl;
				}
				break;
			}
		}
	}
}