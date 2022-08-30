#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;
int main() {
	int n;
	cin>>n;
	int i=0;
	double min;
	while(i<n){
		double distance;
		double dx,dy;
		cin>>dx>>dy;
		distance = sqrt(dx*dx+dy*dy);
		if(i==0){
			min = distance;
		}
		else{
			min = (min<distance)?min:distance;
		}
		i++;
	}
	printf("%.2f",min);
}