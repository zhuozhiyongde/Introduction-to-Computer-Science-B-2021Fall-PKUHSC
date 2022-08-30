#include <iostream>

using namespace std;
int main() {
	int array[1000]={};
	int n=0;
	cin>>n;
	int i = 0;
	while(i<n){
		int ai = 0;
		scanf("%d",&ai);
		array[i] = ai;
		i++;
	}
	for(int re=0;re<n-1;re++){
		for(int j=0;j<n-re-1;j++){
			int aj = array[j];
			int ajn = array[j+1];
			if(ajn<aj){
				array[j+1] = aj;
				array[j] = ajn;
				
			}
		}
	}
	for(int j=0;j<n;j++){
		if(j!=n-1){
			cout<<array[j]<<endl;
		}
		else{
			cout<<array[j];
		}
	}
}