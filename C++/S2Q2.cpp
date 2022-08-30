#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	float v1,v2,S;
	float t;
	cin>>v1>>v2>>t>>S;
	if(v2<=v1){cout<<"NO";return 0;}
	int time = S/v1;
	if((v2-v1)*(time-t)>v1*t)cout<<"YES";
	else cout<<"NO";
}