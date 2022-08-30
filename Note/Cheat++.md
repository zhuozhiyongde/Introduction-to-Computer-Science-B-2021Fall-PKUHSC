# Cheat++

## 头文件

```c++
#include <iostream>//标准输入输出流
#include <algorithm>//算法库，sort()
#include <stdio.h>//printf
#include <cstring>//字符串
#include <cmath>//数学库
#include <iomanip>//控制输出
#include <bits/stdc++.h>//据说是万能库
using namespace std;//std命名空间
```

## 定义

int 整数范围-2147483648 ~ 2147483647

float：保证六位精度的浮点数

double：双精度浮点数

#define pi 3.14159 全局定义

static：静态局部变量，即其占用的存储单元不释放，在下一次该函数调用 时，仍可以继续使用该变量

## 逻辑运算符

`int()/double()/float()`：强制类型转换，向下取整

`sizeof()`：求字节数

&：二进制与运算（1&1=1，其余 0）

^：二进制异或运算（1 ^ 1/ 0 ^ 0 = 0，其余 1）

|：二进制或运算（0|0=0，其余 1）

&&、||：逻辑运算，与、或

!：逻辑运算非

(Bool)?A:B：Bool 成立 A，否则 B

+、-、\*、/、%：加减乘除模（取余）

> int/int = int（下取整）

++i、i++：先用后加/先加后用

\>> <<：左移、右移，可以理解为\*2、/2

abs()：好像是 stdlib.h 库的。

## 输入输出

cin.get()：获得一个字符，包括空白字符，如果为 EOF 则为-1

cin.get(char)：读取一个输入字符，若成功返回真，否则返回假

cin.get(char [],n,end)：其作用是从输入流中读取 n-1 个字符，赋给指定的字符数组，如果在读取 n-1 个字符之前遇到指定的终止字符，则提前结束读取。如果读取成功，则函数返回非 0 值；如果失败（遇文件结束符）返回 0。注意这里的读取字符数组只有读取 **n-1** 个字符，第 n 个字符为/0。

cin.getline()：读取一行字符，类似于 cin.get()三参数的时候

cin.ignore()：忽略输入输出

> 遇到终止符号，getline 移到终止符号后，get 指针不移动
>
> `cin.getchar()`：不跳过任何字符

## 分支

```c++
#include <stdio.h>

int main()
{
    int a;
    printf("input integer number: ");
    scanf("%d",&a);
    switch(a)
    {
        case 1:printf("Monday\n");
        break;//没有则顺序执行
        case 2:printf("Tuesday\n");
        break;
        case 3:printf("Wednesday\n");
        break;
        case 4:printf("Thursday\n");
        break;
        case 5:printf("Friday\n");
        break;
        case 6:printf("Saturday\n");
        break;
        case 7:printf("Sunday\n");
        break;
        default:printf("error\n");
    }
}
```

## 库文件

### iomanip

setiosflags(ios:fixed)

setw()：限制输出宽度

小时点后 n 位输出：

```c++
#include <iomanip>
cout<<setiosflags(ios::fixed)<<setprecision(n)<<a;

//或
#include <stdio.h>
printf("%.2f",a);
```

setiosflags(ios:left/right)：左右对齐

setfill(‘ ‘) ：设置不足 setw 时的补齐

### stdio.h

c 的标准输入输出

常用：

```c++
scanf("control str",&a,&b);
scanf("%04d",&tm_year);
sscanf(p,"%04d%02d%02d",&times.tm_year,&times.tm_mon,&times.tm_mday);
printf("control str",a,b);
```

- %d 整数
- %c 单字符
- %s 字符串
- %f 浮点数，可以控制精度位数
- %g 双精度浮点数
- %u、%ld：unsigned int、long
- %p：指针值

转义：

- \n：回车
- %%：%
- \\'、\\”：引号

### algorithm

算法库，最常用的是 sort

sort(a,a+n,cmp)：对 a 数组从 0 开始到 n-1 依照 cmp 函数排序

```c++
struct Student{
  int grade;
  char name[9];
}
bool cmp(student A, student B){
  if(A.grade!=B.grade)return A.grade>B.grade;//依照成绩排序
  else return A.name[0]>B.name[0];//姓氏首字母字典排序（ASCII）
}
//可以理解为return true 交换 否则 不交换
```

### cstring

memset(a,0,sizeof(a)); a 为指针 sizeof(a)字节数。

```c++
#include <cstring>
char a[]="PKU";
char b[]="THU";

string c = "PKU";
string d = "THU";
// 注意 string型和char[]型不太一样
// string char[]转换：
char p[20];
strcpy(p,a.c_str());

strcpy(a,b);// 覆盖复制,注意 是指针，所以也可以strcpy(a+n,b)，从第n位（0开始）开始复制，可以搭配memeset完成不等位补齐
cout<<a;// THU

strcat(a,b);// 后缀拼接,等价于c+=d;
cout<<a;// PKUTHU

cout<<strlen(a);// 3，输出字符串不含截止\0的长度

strcmp(a,b);//-4，比较两个字符数组，相等则返回0，否则返回差值？

char ch = 'u';

strchr(a,ch);// 返回ch第一次出现的位置的指针,不存在则报错
strstr(a,b);//返回a中b第一次出现位置的指针,不存在则报错

```

### cmath

log10：返回浮点数

log：自然对数

### ctype.h

```c++
#include <iostream>
#include <cstring>// int lambda(int x){};
#include <ctype.h>

using namespace std;
int main() {
	string a = "time is money";
	for(int i=0;i<a.size();i++){
		a[i] = toupper(a[i]);//转换为大写字符
		a[i] = tolower(a[i]);//转换为小写字符
		cout<<isupper(a[i]);//是否大写字母
		cout<<islower(a[i]);//是否小写字母
		cout<<ispunct(a[i]);//是否标点符号
		cout<<isdigit(a[i]);//是否数字
		cout<<isalpha(a[i]);//是否字母
		cout<<isalnum(a[i]);//是否字母或数字
		cout<<isspace(a[i]);//是否空白
	}
//	cout<<a;
	cout<<endl;
	for(auto c:a){
		if(isalpha(c))cout<<c;
	}
}
```

## 典型例题

### C1Q1·单词数统计

```c++
#include <iostream>
using namespace std;
int main(){
// 统计单词数
   char str[80];
	int num = 0, flag = 0;
  cin.getline(str, 80);
	for(int i = 0; str[i] != '\0'; i++){
		if (str[i] == ' ') flag = 0;
		else if (flag == 0){
      flag = 1; num++;
    }
  }
  cout << "字符串中有" << num << "个单词" << endl;
  return 0;
}
```

### S1Q11·最佳凑单·动态规划

要点：记忆化搜索，二维数组保存

```c++
#include <iostream>
#include <cstring>
using namespace std;

// 典型背包DP
// Code by Arthals
// a[]存元素，n存元素个数，convert存最大价值上限
int value(int a[],int n,int convert){
	bool nega[n][convert+1];
  //初始化
	memset(nega,0,sizeof(nega));
  //设立边界条件，即全不取
	nega[0][0]=true;
  //第一个元素的边界选择
	if(a[0]<=convert)
		nega[0][a[0]]=true;
  //dp开始
	for(int i=1;i<n;i++){
		for(int j=0;j<convert+1;j++){
      //如果取上个状态可取，则决策数加一个，但value不改变也可取，下传状态
			if(nega[i-1][j]){
				nega[i][j]=true;
        // 如果可以取到a[i]个（不超过上界），则保存状态，转移状态
				if((j+a[i])<=convert)
					nega[i][j+a[i]]=true;
			}
		}
	}
  // 开始检索最大值，即各行中value最大的
	int max=0;
	for(int i=0;i<=convert;i++){
		if(nega[n-1][i])
			max=i;
	}
	return max;
}

int main() {
	int n,t;
	cin>>n>>t;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=a[i];
	}
	if(sum<t){cout<<"0";return 0;}
	if(sum==t){cout<<t;return 0;}
	int convert = sum-t;
	cout<<sum-value(a,n,convert);
}
```

### S2Q11·明哥之问·动态规划

要点：状态转移方程、特殊处理

```c++
#include <iostream>

using namespace std;
// 剪枝，创建存储结果数组
int storege[100000]={0};

// 创建出局函数，n为人数，m为喊道的数
int out(int n,int m){
  // 设立递归边界，n=1
	if(n==1){
		storege[n-1] = 1;
		return 1;
	}
	else{
    // 检查是否已存储值
		if (storege[n-1]==0){
      // 状态转移：f(n,k)=(f(n-1,k)+k)%n
			storege[n-1]=(out(n-1,m)+m)%n;
      // 特殊处理，如果模完为0说明实际为最后一个人出局
			if(storege[n-1]==0){
				storege[n-1]=n;
			}
      // 存储数值，剪枝
			return storege[n-1];
		}
    // 已存储则直接返回
		else{
			return storege[n-1];
		}
	}
}
int main() {
	char sep=',';
	int m,k;
	cin>>m>>sep>>k;
	for(int i=k;;i++){
		if(out(i,m)==k){
			cout<<i;
			break;
		}
	}
//	cout<<out(m,k);
}
```

### S3Q10·括号闭合·栈

```c++
#include <iostream>
#include <list>

using namespace std;
int main() {
	list<char> l;
	char n;
	while(cin.get(n)){
		if(n!='\n'){
			if(n=='{'||n=='('||n=='['){
//				cout<<"pushed";
				l.push_back(n);
			}
			else if(n=='}'&&l.size()!=0){
				if(l.back()=='{'){
//					cout<<"delete";
					l.pop_back();
				}
				else{
					cout<<"no";
					return 0;
				}
			}
			else if(n==']'&&l.size()!=0){
				if(l.back()=='['){
					l.pop_back();
				}
				else{
					cout<<"no";
					return 0;
				}
			}
			else if(n==')'&&l.size()!=0){
				if(l.back()=='('){
					l.pop_back();
				}
				else{
					cout<<"no";
					return 0;
				}
			}
		}
		else{
			break;
		}
	}
	if(l.empty()){
		cout<<"yes";
	}
	else{
		cout<<"no";
	}
}


```

> ```c++
> list<int>lst1;          //创建空list
> list<int> lst2(5);       //创建含有5个元素的list
> list<int>lst3(3,2);  //创建含有3个元素的list
> list<int>lst4(lst2);    //使用lst2初始化lst4
> list<int>lst5(lst2.begin(),lst2.end());  //同lst4
>
>
> Lst1.assign() 给list赋值
> Lst1.back() 返回最后一个元素
> Lst1.begin() 返回指向第一个元素的迭代器
> Lst1.clear() 删除所有元素
> Lst1.empty() 如果list是空的则返回true
> Lst1.end() 返回末尾的迭代器
> Lst1.erase() 删除一个元素
> Lst1.front() 返回第一个元素
> Lst1.get_allocator() 返回list的配置器
> Lst1.insert() 插入一个元素到list中
> Lst1.max_size() 返回list能容纳的最大元素数量
> Lst1.merge() 合并两个list
> Lst1.pop_back() 删除最后一个元素
> Lst1.pop_front() 删除第一个元素
> Lst1.push_back() 在list的末尾添加一个元素
> Lst1.push_front() 在list的头部添加一个元素
> Lst1.rbegin() 返回指向第一个元素的逆向迭代器
> Lst1.remove() 从list删除元素
> Lst1.remove_if() 按指定条件删除元素
> Lst1.rend() 指向list末尾的逆向迭代器
> Lst1.resize() 改变list的大小
> Lst1.reverse() 把list的元素倒转
> Lst1.size() 返回list中的元素个数
> Lst1.sort() 给list排序
> Lst1.splice() 合并两个list
> Lst1.swap() 交换两个list
> Lst1.unique() 删除list中重复的元素
> ```

### S3Q11·护林员盖房子·暴力

```c++
#include<iostream>
#include<stdio.h>
#include<cstring>
#include<algorithm>
#include<cmath>

using namespace std;
int ans;
int m,n;
int cmp(int a,int b){
	return (a>b) ? a:b;
}
int map[1000][1000];

bool build(int sx,int sy,int fx,int fy){
	for(int i=sx;i<=fx;i++){
		for(int j=sy;j<=fy;j++){
			if(map[i][j]==1){
				return 0;
			}
		}
	}
	return 1;
}
void find(int x,int y){
	int ansx=x,ansy=y;
	for(int i=x;i<=m;i++){
		for(int j=y;j<=n;j++){
			if(build(x,y,i,j)){
				ans=cmp(ans,(i-x+1)*(j-y+1));
			}
		}
	}
}
int main(){
	cin>>m>>n;
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			cin>>map[i][j];
		}
	}
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			if(map[i][j]==0){
				find(i,j);
			}
		}
	}
	cout<<ans;
}

```

### S4Q7·编码字符串·未知长度输入

while(cin.get(ch))

```c++
#include <iostream>
#include <stdio.h>

using namespace std;
int main() {
	char temp;
	cin.get(temp);
	int sum = 1;
	char sim = temp;
	while(cin.get(sim)){
		if(sim=='\n'){
			if(temp<=90)temp = char(temp+32);
			printf("(%c,%d)",temp,sum);
			return 0;
		}
		else if(sim==temp||int(sim)==(temp+32)||int(sim)==(temp-32)){
			sum++;
		}
		else{
			if(temp<=90)temp = char(temp+32);
			printf("(%c,%d)",temp,sum);
			temp = sim;
			sum = 1;
		}
	}
}
```

### S4Q11·合理消费·dfs 深度优先搜索（贪心算法）

```c++
#include <iostream>
#include <stdio.h>

using namespace std;
int m=0,arr[103]={0};
int a[10]={0};
int ans[105][1000]={0};

// p为价钱，i为目前搜索到的数目，n为目前搜索到的元素的角标
bool flag=0;
void dfs(int p,int ansLNum,int n,int arrMax){
	if(p==0){
    // 输出
		for(int j=1;j<ansLNum-1;j++){
			printf("%d ",arr[j]);
		}
		printf("%d\n",arr[ansLNum-1]);
		flag =1;
	}
	if(p>0){
		for(int j=n;j<arrMax;j++){
			arr[ansLNum] = a[j];// 记录
      // 继续找
			dfs(p-a[j],ansLNum+1,j,arrMax);
		}
	}
}


int main() {
	int n,p;
	scanf("%d %d",&n,&p);
	int i=0;
	while(i<n){
		scanf("%d",&a[i]);
		i++;
	}
	dfs(p,1,0,n);
	if(flag==0){
		cout<<"NO";
	}
}
```

### S6Q5·简单的进制转换·CharToIntToChar

```c++
#include <iostream>
#include <cstring>
#include <math.h>

using namespace std;
int conAlpha(char a){
	// 0-9 : 48-57
	// A-Z : 65-90
  // char转移成int
	if(int(a)<=57)return a-48;
	else return a-55;
}
char toAlpha(int a){
  // int回转char
	if(a<=9)return char(a+48);
	else return char(a+55);
}
int conv10(int from,char num[]){
	int weishu = strlen(num);
	int temp = weishu;
	int sum = 0;
	while(temp>=0){
		temp--;
		sum+=int(pow(from,temp))*conAlpha(num[weishu-temp-1]);
	}
	return sum;
}
void conv(int from,int to,char num[]){
	int num10 = conv10(from,num);
	int a[100]={0};
	int wei=0;
	while(num10>0){
		a[wei]=num10%to;
		wei++;
		num10/=to;
	}
	for(int i=wei-1;i>=0;i--){
		cout<<toAlpha(a[i]);
	}
}

int main() {
	int n;
	cin>>n;
	int i=0;
	int from,to;
	char temp[25];
	for(int i=0;i<n;i++){
		cin>>from;
		cin>>temp;
		cin>>to;
		conv(from,to,temp);
		if(i!=n-1)cout<<"\n";
	}
}
```

### S7Q8·字符串相似度·动态规划

```c++
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
      // cmp[i][j]只和上 左 左上的数据有关系
			int min = (l1<t1)?l1:t1;
			min = (min<lt)?min:lt;
			cmp[i][j]=min;
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
		printf("%.6f\n",assay(a,b));
	}
}
```

### S7Q9·球桌出租·动态规划

```c++
#include <iostream>
#include <algorithm>
//#include<bits/stdc++.h>

using namespace std;

struct offer{
	int start;
	int end;
	int pay;
};

offer a[100050];

int n;

// 定义dpi为前i个订单能获得的最大利益
int dpi[100050];

bool cmp(offer a, offer b){
	if(a.end<b.end)return true;
	else return false;
}

int main() {
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].start>>a[i].end>>a[i].pay;
	}

	// 依据end排序
	sort(a+1,a+n+1,cmp);

	// 初始边界
	a[0].end = -1;
	dpi[0] = 0;

	for(int i=1;i<=n;i++){
		dpi[i] = dpi[i-1];
		int l = 0;
		int r = i;

		// 二分法查找最大相容前订单
		while(l<r){
			int mid = (l+r+1)/2;
			if(a[mid].end<=a[i].start) l = mid;
			else r = mid-1;
		}

		// 比较判断dpi[i-1] 和 最大相容前订单+订单本身价值
		dpi[i] = max(dpi[i],dpi[l]+a[i].pay);
	}
	cout<<dpi[n]<<endl;

}
```
