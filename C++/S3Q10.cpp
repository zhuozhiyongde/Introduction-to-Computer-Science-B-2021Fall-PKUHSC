#include <iostream>
#include <list>

using namespace std;
int main() {
	list<char> l;
	char n;
	while(cin.get(n)){
		if(n!='\n'){
			if(n=='{'||n=='('||n=='['){
//				cout<<"pushed";
				l.push_back(n);
			}
			else if(n=='}'&&l.size()!=0){
				if(l.back()=='{'){
//					cout<<"delete";
					l.pop_back();
				}
				else{
					cout<<"no";
					return 0;
				}
			}
			else if(n==']'&&l.size()!=0){
				if(l.back()=='['){
					l.pop_back();
				}
				else{
					cout<<"no";
					return 0;
				}
			}
			else if(n==')'&&l.size()!=0){
				if(l.back()=='('){
					l.pop_back();
				}
				else{
					cout<<"no";
					return 0;
				}
			}
		}
		else{
			break;
		}
	}
	if(l.empty()){
		cout<<"yes";
	}
	else{
		cout<<"no";
	}
}