//#include <iostream>
//
//using namespace std;
//int main() {
//	int n=0;
//	double a=0,b=0;
//	cin>>n;
//	while(n>0){
//		cin>>a>>b;
//		int hours = 0;
//		while(a>0){
//			if(a <= 1000000)
//				{
//					a = a*2;
//					b = (int)(b*1.05);
//					if(a>1000000)
//						a = 1000000;
//					cout<<hours<<"*"<<a<<" "<<b<<" original"<<endl;
//					a = a-b;
//					cout << a <<" Output_A\n"<<endl;
//					hours=hours+1;
//				}
//		}
//		cout<<hours+1<<endl;
//		n--;
//	}
//	
//}
#include <iostream>

using namespace std;
int main() {
	int n=0;
	double a=0,b=0;
	cin>>n;
	while(n>0){
		cin>>a>>b;
		int hours = 0;
		while(a>0){
			if(a <= 1000000)
				{
					a = a-b;
					a = a*2;
					b = (int)(b*1.05);
					if(a>1000000)
						a = 1000000;
					hours=hours+1;
				}
		}
		cout<<hours<<endl;
		n--;
	}
	
}