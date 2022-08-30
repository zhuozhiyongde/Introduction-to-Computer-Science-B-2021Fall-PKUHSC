#include <iostream>
#include <string.h>
#include <algorithm>

using namespace std;

struct patient{
	char name[9];
	int age;
	float temp;
	bool sneeze;
};
bool cmp(patient a,patient b){
	if(a.age!=b.age){
		return a.age>b.age;
	}
	else {
		int aN = int(a.name[0]);
		int bN = int(b.name[0]);
//		cout<<aN<<" "<<bN<<endl;
		return aN<bN;
	}
}
int main() {
	int n;
	cin>>n;
	cin.get();
	patient state[n];
	int i=0;
	while(i<n){
		cin.getline(state[i].name,9,' ');
		int age;float temp;bool sneeze;
		cin>>state[i].age>>state[i].temp>>state[i].sneeze;
		cin.get();
		i++;
	}
	sort(state,state+n,cmp);
	for(int j=0;j<n;j++){
		if(state[j].temp>=37.5&&state[j].sneeze){
			printf("%s %d %g\n",state[j].name,state[j].age,state[j].temp);
		}
	}
}