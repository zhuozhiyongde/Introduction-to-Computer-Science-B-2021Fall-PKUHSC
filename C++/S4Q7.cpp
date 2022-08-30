#include <iostream>
#include <stdio.h>

using namespace std;
int main() {
	char temp;
	cin.get(temp);
	int sum = 1;
	char sim = temp;
	while(cin.get(sim)){
		if(sim=='\n'){
			if(temp<=90)temp = char(temp+32);
			printf("(%c,%d)",temp,sum);
			return 0;
		}
		else if(sim==temp||int(sim)==(temp+32)||int(sim)==(temp-32)){
			sum++;
		}
		else{
			if(temp<=90)temp = char(temp+32);
			printf("(%c,%d)",temp,sum);
			temp = sim;
			sum = 1;
		}
	}
}