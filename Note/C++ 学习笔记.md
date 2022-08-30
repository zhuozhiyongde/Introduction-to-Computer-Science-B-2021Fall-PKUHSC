### 2.1.2

main() 函数 

> 程序必须包含该函数

void main(void)

> 不返回、不接受任何参数

return 结束函数

> 默认 return 0

注释：/* */

### 2.1.3

#include <iostream> 预处理器，信息输入输出，cin/cout必须含有 `iostream`

复杂数学运算需要 `cmath`

`sizeof` 求内存字节数

逻辑运算符 `！&& |`

赋值从右到左

除法整数运算仍为整数，浮点数为浮点数

()

\* / %

\+ -



自加/自减 ++i --i 先操作后用 i++ 先用后操作

### 2.1.5

名称空间编译：

using namespace std; 标准组件 等价于 std:: 前缀

cin/cout

std::boolalpha 将0/1转换为false/true输出

```c++
#include <studio.h>
int main(void){
  int x,y,z;
  scanf("%d%d%d",&x,&y,&z); //如果格式符号%d之间没有分割，则可以用空格（1 or n）,换行，tab分割，如果为 %d,%d,%d 的话，则需要严格格式化输入。
  prinf
}
```

endl 重启一行

cout<<secprecision(100)<<保留精度，默认六位

white space can be replaced by ()

string a;

getline(cin,a);

### 2.2.1

声明变量 int/char/double etc..

0x 十六进制

0开头 八进制

> 数据成分
>
> oct -2
>
> 4Bit 2 0010
>
> 4Bit -2 1010
>
> 反码 1101（取反）
>
> 补码 1110（取反加1）
>
> oct 1
>
> 0001
>
> 0001
>
> 0001
>
> 补码-负数-取反加一
>
> 负数以补码形式储存

char a = "c" "h " "i" "n" "a"

0~4

char a ="China"

> c[0]~c[4]:
>
> c[5]:'\0' 字符串终止符 

char a = "China" 超了

char a = 'China'

() 格式强制转换

赋值从右到左

逻辑非>算术>关系>赋值

！> && > ||

三目运算-条件运算

max = (a>b)?a:b;

逗号1→n，整体返回n

强制类型转换，被转换的量没进行赋值



赋值 =

printf 需要告诉函数替换的类型

* %s 字符串
* %d 符号整数
* %f 浮点数
* %g double浮点数

INT_MIN INT_MAX CHAR_BIT

声明变量的同时最好传递一个值，如

int art(90);

int art{90}; // C++ 11

`unsigned` 无符号类型

signed 第一位0/1 标志 正/负

补码=反码+1？

111

100

101 = -1**2^2+1*2^0

#### 整型溢出

short x;

 x > 32768 、 x< -32767 循环从另一端时开始计算

20211012UL `unsigned & long int`

`char` 储存字符

字符变量定义/赋值用单引号。

> 一般计算机字符不超过128个，则一个字节 Byte 即可以储存 2^8 = 128种字符

常用转义序列

| 字符名称   | C++代码 |
| ---------- | ------- |
| 换行符号   | \n      |
| 水平制表符 | \t      |
| 垂直制表符 | \v      |
| 退格       | \b      |
| 回车       | \r      |
| 振铃       | \a      |
| 反斜杠\    | \\      |
| 问号?      | \?      |
| 单引号''   | \'      |
| 双引号''   | \\\'\'  |

```c++
#include <iostream>
int main(){
    using namespace std;
    cout << "Enter your password:____\b\b\b\b";
    long code;
    cin >> code;
    cout << "Your code is:" << code << "\n";
    return 0;
}
```

\b：回退一个，同时允许再次输入，会替换原有字符

unsigned & signed 考虑符号时要注意



`wchar_t`：最大字符集

cin/cout是char流，遇到wchar_t是需要使用wcin/wcout

#### C++ 11标准下 char16_t 与 char32_t



### 3.1.9

`bool`：0/1 true(1)/false(0)

隐式转换



### 3.2

`const` const int Months = 12;

不支持修改，限定Months声明的含义



### 3.3

`float`：浮点数

-18.23e-10

浮点数可以移动 d.dddE~n 左移n位

float 精度小于 double

2.2L/2.2f/2.34e28

float仅表示前6位（保证精度），故而不支持修改第8位以后的数字

需要用d/L

sign(1) / [2^] exponent(8=7+sign(1)) / fraction(23) 2进制小数位（默认1.）



### 3.4

%的两个操作数都必须为整数。如果是浮点数将会导致编译错误，可以是负数。(a/b)*b+a%b=a



### 数组

数组的定义：二位数字可用嵌套大括号{{},{},{}

`setw`：设置输出域宽，不足在前面补齐空格

数组初始化，正向按行遍历

`switch(){ case[n]:}`：按情况执行，case后需要有`break;`如果没有，顺序执行



### 输入输出

`cin.get()` ：获得一个字符，包括空白字符，如果为EOF则为-1

`cin.get(ch)`：读取一个输入字符，若成功返回真，否则返回假

`cin.get(字符数组,字符个数n,终止字符)`

其作用是从输入流中读取n-1个字符，赋给指定的字符数组，如果在读取n-1个字符之前遇到指定的终止字符，则提前结束读取。如果读取成功，则函数返回非0值；如果失败（遇文件结束符）返回0。

注意这里的读取字符数组只有读取n-1个字符，第n个字符为/0。

`cin.getline()`：读取一行字符，类似于cin.get()三参数的时候

> 遇到终止符号，getline移到终止符号后，get指针不移动

`cin.getchar()`：不跳过任何字符

`#include <cstring>`：引入cstring库，可以通过 `string strName`定义字符串型变量

`cerr/clog`：出错信息流

`#include <iomanip>`：控制输出

> `setiosflags(ios:[left/right])`
>
> `setw()`：限制输出宽度
>
> `reseetflags(ios::[left/right])`

`cout.width()`：限制输出宽度

`cout.fill()`：在不足输出的行前添加call内字符

```C++
    while ((ch = getchar()) != '\n')
```




###### memset
只能填充数组为0，-1.



###### string
\#include \<cstring\>
getline(cin,str,stopChar);
strtok_r(Null,d)



* cin.get?getchar?



##### 指针

`&` 取址

`*` 取值

指针变量也是变量。

```c++
int *pointer;
point = &c;//赋值操作
```

```c++
char c[6]="hello";
char *pc=&c;
cout<<pc;

static_cast<void *>强制类型转换
```

const int array[]
array不可被改变
指向的元素不可被改变
指向哪里可以被改变
不能通过指针修改



`static`   静态局部变量地址，效果类似于全局变量

`int *id = &Struct`

```C++
struct student{
  int id;
  char name[10];
} ;
int main(){
  student myclass[3]={
    123,"Art",
    233,"Hal",
    456,"S"
  }
  int *one = &student;
  one++;
  *one++;//需测试
}
```



Stuct. Respective. Avenir. All Rights Reserved.

Arthals and Slahtra

Art.aRt.arT.

->运算符：`one->Name`:取得指针one指向的结构体的Name的值

## 链表

链表头、链表节点、链表尾[NULL]



## 动态分配

new

delete

动态分配内存

不能用 `int a[n]` 

动态分配某种类型的连续内存空间，并将首地址赋值给指针变量

一定要 `delete` 否则会导致内存泄漏

```c++
int main(){
  int *p = new int;
  *p = 10;//也是需要显式的初始化
  cout<<*p;
  delete p;
  
  //可以：
  cin>>n;
  int *d = new int[n];
  delete []p;
  
}
```





## Str

`strcpy` ：复制字符串到一个字符数组



## Math库
