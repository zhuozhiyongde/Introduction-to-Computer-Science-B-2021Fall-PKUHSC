#include <iostream>
#include <cstring>

using namespace std;
int attack(char s,bool weapon){
	int basic;
	if(s=='a'){
		basic =2;
		if(weapon)return basic+1;
		else return basic;
	}
	else if(s=='b'){
		basic = 1;
		if(weapon)return basic+1;
		else return basic;
	}
	else if(s=='g'){
		basic = 3;
		if(weapon)return basic+1;
		else return basic;
	}
	else{
		basic=1;
		if(weapon)return basic+5;
		else return basic;
	}
	
}

int main() {
	char shape[6];
	cin.getline(shape,7,' ');
	char sn = shape[0];
	bool weapon;
	int mon;
	cin>>weapon>>mon;
	if(attack(sn,weapon)>=mon)cout<<"YES";
	else cout<<"NO";
}