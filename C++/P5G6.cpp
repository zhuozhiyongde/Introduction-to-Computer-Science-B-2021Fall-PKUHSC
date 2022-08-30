#include <iostream>

using namespace std;
int main() {
	int array[10]={};
	int i = 0;
	while(i<10){
		int ai = 0;
		scanf("%d",&ai);
		array[i] = ai;
		i++;
	}
	for(int j=0;j<9;j++){
		int aj = array[j];
		int ajn = array[j+1];
		if(ajn<aj){
			array[j+1] = aj;
			array[j] = ajn;
			
		}
	}
	for(int j=0;j<10;j++){
		if(j!=9){
			cout<<array[j]<<" ";
		}
		else{
			cout<<array[j];
		}
	}
}