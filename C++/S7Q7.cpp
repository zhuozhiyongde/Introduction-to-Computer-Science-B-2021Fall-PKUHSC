#include <iostream>
#include <math.h>

using namespace std;

long arrange(int n,long x,long y){
	if(n==1){
		int arr[4][4]={
			{0,2,5,9},
			{1,4,8,12},
			{3,7,11,14},
			{6,10,13,15},
		};
		return arr[x][y];
	}
	else{
		long next = long(pow(4,n-1));
		int conX= x/next;
		int conY= y/next;
		long saveX = x%next;
		long saveY = y%next;
//		printf("【】%d %d %ld %ld\n%ld %ld\n____\n",conX,conY,saveX,saveY,next,arrange(1,conX,conY));
		long sum = next*next*(arrange(1,conX,conY));
//		printf("%d %ld %ld\n",n-1,saveX,saveY);
//		printf("%ld\n",arrange(n-1,saveX,saveY));
		sum+=arrange(n-1,saveX,saveY);
		return sum;
//		if(saveX!=0&&saveY!=0){
////			printf("%d %d %ld %ld\n%ld %ld\n",conX,conY,saveX,saveY,long(pow(4,n-1)),arrange(1,conX,conY));
//			long sum = next*(arrange(1,conX,conY));
//			sum+=arrange(n-1,saveX,saveY);
//			return sum;
//		}
////		long sum = next*(arrange(1,conX,conY));
////		sum+=arrange(n-1,saveX,saveY);
////		return sum;
//		else if(saveX==0&&saveY==0){
//			long sum = next*(arrange(1,conX,conY)-1);
////			sum+=arrange(n-1,saveX,saveY);
//			return sum;
//		}
//		else{
//			long sum = next*(arrange(1,conX,conY)-1);
//			sum+=arrange(n-1,saveX,saveY);
//			return sum;
//		}
////		else if(saveX==0&&saveY!=0){
////			long sum = next*(arrange(1,conX-1,conY)-1);
////			sum+=arrange(n-1,pow(4,n-1)-1,saveY-1);
////			return sum;
////		}
	}
}
int main() {
	int n,x,y;
	while(1){
		cin>>n>>x>>y;
		if(n==0){
			break;
		}
		cout<<arrange(n,x,y)<<endl;
//		break;
	}
}