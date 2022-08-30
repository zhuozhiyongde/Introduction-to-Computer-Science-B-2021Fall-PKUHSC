#include <iostream>

int main(void){
	using namespace std;
	for(int i=0;i<10;i++){
		cout<<i;
		if(i<9)
			cout<<" ";
		else
			return 0;
	}
	return 0;
}