#include <iostream>
#include <cstring>


using namespace std;

int absset(int x){
	return (x>0)?x:-x;
}
double assay(char a[],char b[]){
	int sa = strlen(a);
	int sb = strlen(b);
	int cmp[25][25]={0};
	for(int j=0;j<25;j++){
		cmp[0][j]=j;
		cmp[j][0]=j;
	}
	for(int i=1;i<sa+1;i++){
		for(int j=1;j<sb+1;j++){
			int l1 = cmp[i-1][j]+1;
			int t1 = cmp[i][j-1]+1;
			int lt = cmp[i-1][j-1];
			if(a[i-1]==b[j-1])lt=lt;
			else lt++;
//			printf("(%d,%d):%d-%d-%d\n",i,j,l1,t1,lt);
			int min = (l1<t1)?l1:t1;
			min = (min<lt)?min:lt;
			cmp[i][j]=min;
//			printf("(%d,%d):%d\n",i,j,min);
		}
	}
	int out = cmp[sa][sb];
	out++;
	double sim = 1.0/out;
	return sim;
}

int main() {
	int n;
	cin>>n;
	int i=0;
	cin.get();
	while(i<n){
		i++;
		char a[100];
		char b[100];
		cin>>a>>b;
//		cout<<"a:"<<a<<endl;
//		cout<<"b:"<<b<<endl;
		printf("%.6f\n",assay(a,b));
	}
}