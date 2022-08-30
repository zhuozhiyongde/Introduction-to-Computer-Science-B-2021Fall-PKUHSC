#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;
int main(int argc, char *argv[]) {
	int temp=0,n=1;
	scanf("%d",&temp);
	int arr[5000];
	memset(arr,0,sizeof(arr));
	while((scanf("%d",&temp))==1&&((getchar()!='\n'))){
		arr[n] = temp;
		n = n+1;
	}
	n = n+1;
	cout<<n<<endl;
	cout<<arr[1];
}