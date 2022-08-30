#include <iostream>

using namespace std;
void Sort(int array[],int n){
	for(int i=0;i<n;i++){
		int k = i;
		for(int j=i+1;j<n;j++){
			if(array[j]<array[k])
				k=j;
		}
		if(k!=i){
			int t = array[k];
			array[k] = array[i];
			array[i] = t;
		}
	}
}
void PrintData(int n){
	
}
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
}