#include <iostream>

using namespace std;

int main() {
	int n;
	cin>>n;
	int array[1000];
	int sum = 0;
	int height=0;
	for(int i=n;i>0;i--){
		cin>> array[i-1];
	}
	int mH=0;
	cin>>mH;
	for(int i=n;i>0;i--){
		if(array[i-1]<=mH)sum++;
	}
	cout<<sum;
}