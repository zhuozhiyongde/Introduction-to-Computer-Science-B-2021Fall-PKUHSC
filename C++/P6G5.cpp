#include <iostream>

using namespace std;
int main() {
	int a,b,c;
	cin>>a>>b>>c;
	int larray[a][b];
	int rarray[b][c];
	int result[a][c];
	for(int row=0;row<a;row++){
		for(int col=0;col<b;col++){
			cin>>larray[row][col];
		}
	}
	for(int row=0;row<b;row++){
		for(int col=0;col<c;col++){
			cin>>rarray[row][col];
		}
	}
	
	for(int a1=0;a1<a;a1++){
		for(int c1=0;c1<c;c1++){
			int sum = 0;
			for(int b1=0;b1<b;b1++){
					sum+=larray[a1][b1]*rarray[b1][c1];
			}
			result[a1][c1]=sum;
		}
	}
	
	for(int a1=0;a1<a;a1++){
		for(int c1=0;c1<c;c1++){
			if(c1!=c-1)
				cout<<result[a1][c1]<<" ";
			else
				cout<<result[a1][c1]<<endl;
		}
	}
}