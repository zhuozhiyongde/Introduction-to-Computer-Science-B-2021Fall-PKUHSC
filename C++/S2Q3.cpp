#include <iostream>
#include <iomanip>

using namespace std;
int main() {
	float sum=0;
	for(int i=0;i<12;i++){
		float j;
		cin>>j;
		sum+=j;
	}
	cout<<setiosflags(ios::fixed)<<setprecision(2)<<"$"<<sum/12<<endl;
}