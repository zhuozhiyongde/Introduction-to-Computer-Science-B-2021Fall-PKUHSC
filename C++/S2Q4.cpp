#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	long N,M;
	cin>>N>>M;
	int i=1;
	while(i<M){
		if((N%i==0)&&(N%(M-i)==0)){
			cout<<i;
			return 0;
		}
		i++;
	}
	cout<<"-1";
}