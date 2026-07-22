---
name: cpp-coding-style
description: 适用于C++项目的编码风格规范，涵盖头文件、命名约定、格式化、注释、常见编程模式、算法模式、OOP风格、模板泛型等。遵循项目既有的C++编写习惯，包括万能头文件、简短变量名、埃及风格括号、VLA数组、全局变量、混用I/O风格等。
---

# C++ 编程习惯（cpp-coding-style）

编写或编辑 `.cpp` 文件时严格遵循以下约定。

## 1. 头文件与命名空间

```cpp
#include<bits/stdc++.h>
using namespace std;
```

- 始终使用万能头文件 `#include<bits/stdc++.h>`，**绝不使用**单独的 `#include` 指令
- 始终使用 `using namespace std;`

## 2. 文件模板结构

### 2.1 简洁型模板（推荐，最常用）

```cpp
#include<bits/stdc++.h>
using namespace std;
int n;
int fun(int x){
    // 处理逻辑
    return x;
}
int main(){
    cin>>n;
    cout<<fun(n);
    return 0;
}
```

### 2.2 带 solve() 的模板

```cpp
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    // ... 处理逻辑
    cout<<ans;
}
int main(){
    solve();
    return 0;
}
```

### 2.3 分段注释模板

```cpp
#include<bits/stdc++.h>
using namespace std;
/*常量*/
const int N=1010;
/*结构体*/
struct Node{
    int x,y;
};
/*全局变量*/
int n,m;
int arr[N];
/*函数*/
int fun(int x){
    return x;
}
/*主函数*/ int main(){
    //freopen(".in","r",stdin);
    //freopen(".out","w",stdout);
    fun();
    //system("pause");
    return 0;
}
```

- `/*主函数*/` 与 `int main(){` 在同一行
- `freopen` 默认注释掉
- `system("pause")` 默认注释掉

## 3. 命名约定

### 3.1 函数命名

- 简短拼音或英文缩写：`pop()`（素数检测）、`sy()`（平方根检测）、`p()`（数位运算）、`tmp()`（临时处理）
- 通用函数名：`fun()`, `solve()`, `dfs()`, `calc()`
- 自定义函数名直接用：`reverse()`, `uniquePaths()`, `getMoneyAmount()`

### 3.2 变量命名

- **整数**：`n`, `m`, `x`, `y`, `a`, `b`, `c`, `k`, `sum`, `ans`, `ret`, `Max`, `Min`
- **循环变量**：`i`, `j`, `k`
- **数组**：`arr`, `v`, `N`, `f`, `w`, `M`, `B`, `memo`, `s`, `pm`, `s1`, `s2`, `s3`
- **字符串**：`s`, `n`（临时字符串拼接）
- **布尔**：无特殊前缀，直接用 `bool` 类型

### 3.3 结构体/类命名

- **结构体**：`Node`, `number`, `Student`, `tree`, `bag`, `Box`, `Phone`, `T`
- **typedef**：`typedef struct number N;`（C风格），常用单字母简写如 `typedef struct BiNode B;`、`typedef struct ListNode L;`、`typedef struct Node N;`
- **类**：`Student`, `TreeNode`, `ListNode`

### 3.4 常量命名

- `const int N=100;` 或 `const int N=1010;` 或 `const int MAXN=100000;`
- 使用大写字母或 `MAX` 前缀

### 3.5 类成员变量命名

- **m_ 前缀**：`m_x, m_y, m_z`（表示 member）
- **下划线后缀**：`_year, _month, _day`（表示私有成员）
- 两种风格混用均可，保持一致即可

## 4. 格式化

### 4.1 缩进

- 使用 **Tab**（显示为2-4个空格宽度）
- 循环/条件体内部缩进一层

### 4.2 花括号

- **埃及风格**：`{` 放在语句末尾，不换行
- `if(x==y){`, `for(int i=0;i<n;i++){`, `while(x!=0){`
- 函数花括号：`int main(){` 同行，或 `int main()` 换行 `{`，优先同行

### 4.3 空格

- 以下两种均可接受：`if(x==y)` 或 `if (x == y)`
- 保持一致即可，优先使用紧凑风格 `if(x==y)`
- 运算符两侧空格可有可无：`x%i==0` 或 `x % i == 0`

### 4.4 其他

- 不留尾随空格
- 文件末尾留一个空行
- 全局变量声明之间不加空行

## 5. 注释

- **纯中文注释**：所有注释使用中文
- **无行内解释性注释**：不写代码含义说明，如 `// 循环遍历数组`
- **分段注释**：使用 `/* */` 风格，如 `/*常量*/`、`/*全局变量*/`
- **公式/思路注释**：偶尔在文件末尾或关键位置添加简短注释，如 `//n*2-1`
- **保留旧代码**：注释掉旧代码而非删除
- **测试数据**：可作为注释放在文件末尾或相关函数调用旁

## 6. 常见编程模式

### 6.1 数组声明

- **变长数组（VLA）**：`int arr[n];`（最常用）
- **全局定长数组**：`int N[1000001];`（大数组）
- **全局定长数组 + const**：`const int N=1010; int f[N];`

### 6.2 初始化

- `memset(arr, 0, sizeof(arr));`
- 循环赋值：`for(int i=0;i<n;i++) arr[i]=0;`
- 声明时初始化：`int arr[n]={0};`

### 6.3 STL 容器

- **vector**：`vector<int> v(n);`、`vector<int> v(10,1);`、`vector<int> b={1,2,3,4,5,6};`
- **string**：`string s;`、`getline(cin,s);`
- **deque**：`deque<int> que;` 替代 `std::queue` 用于队列操作
- **stack/queue**：用于BFS/DFS
- **pair**：`pair<int,int>`
- **unordered_map**：用于哈希映射

### 6.4 STL 算法

- `sort(arr, arr+n);`
- `reverse(arr, arr+n);`
- `max()`, `min()`, `sqrt()`, `pow()`, `abs()`

### 6.5 输入输出

- **混用风格**：`cin`/`cout` 和 `scanf`/`printf` 自由混用
- **格式化输出**：使用 `printf("%.2f", x);` 控制精度
- **字符串输入**：`getline(cin, s);` 或 `scanf("%s", &s);`
- **输出换行**：`cout<<endl;` 或 `cout<<"\n";`

### 6.6 循环结构

- `for(int i=0;i<n;i++)`（最常用）
- 循环变量命名：`i`, `j`, `k`
- 简洁语法：`for(int i=0;i<n;i++) cin>>arr[i];`（单行不换行）

### 6.7 条件判断

- `if(x==y){ ... }` / `else{ ... }`
- 三元运算符：`x = a>b ? a : b;`
- 返回值：`return x<=5?1:0;`

### 6.8 文件操作

- `freopen(".in","r",stdin);` / `freopen(".out","w",stdout);`
- 默认注释掉，需要时取消注释

### 6.9 暂停

- `system("pause");`（保持控制台窗口）

### 6.10 文件流操作

- `ifstream` / `ofstream` 手动 `open()` / `close()`
- C-style 路径双斜杠：`"C://Users//Desktop//abc.txt"`
- 读取到 char 数组：`char buf[1024]; while(ifs >> buf){ cout<<buf<<endl; }`

```cpp
ofstream ofs;
ofs.open("C://Users//Desktop//abc.txt",ios::out);
ofs<<"内容";
ofs.close();

ifstream ifs;
ifs.open("C://Users//Desktop//abc.txt",ios::in);
char buf[1024];
while(ifs >> buf) cout<<buf<<endl;
ifs.close();
```

### 6.11 内存管理

- `new` 分配 / `delete` 释放
- `ListNode *node = new ListNode(x);` 分配单个对象
- `int* next = new int[len+1];` 分配数组
- `delete node;` / `delete[] next;` 对应释放
- 注意：部分场景存在 `new` 后未 `delete` 的情况（如 `get_next` 返回 `new int[]` 但调用方未释放）

## 7. 算法模式

### 7.1 素数判断

```cpp
bool pop(int x){
    for(int i=2;i<x;i++){
        if(x%i==0) return false;
    }
    return true;
}
```

- 函数名习惯用 `pop()`
- 返回值：`bool`、`int`（如 `return 78` 假、`return 91` 真）

### 7.2 DFS/递归 + 记忆化

```cpp
int memo[205][205];
int dfs(int l, int r){
    if(l >= r) return 0;
    if(memo[l][r] != 0) return memo[l][r];
    int ret = INT_MAX;
    for(int head=l; head<=r; head++){
        int x = dfs(l, head-1);
        int y = dfs(head+1, r);
        ret = min(ret, head + max(x, y));
    }
    memo[l][r] = ret;
    return ret;
}
```

### 7.3 动态规划（DP）

```cpp
// 1D DP
const int N=1010;
int f[N];
for(int i=1;i<=M;i++){
    for(int j=T;j>=w[i];j--){
        f[j]=max(f[j], f[j-w[i]]+v[i]);
    }
}
```

### 7.4 排序

```cpp
sort(arr, arr+n);
// 或
sort(v.begin(), v.end());
```

### 7.5 字符串处理

- `string` 类型 + `[]` 索引访问
- 字符数组：`char s[n]; scanf("%s",&s);`
- 逐字符处理：`for(int i=0;i<s.size();i++)`

### 7.6 回溯算法

```cpp
int hang[100],b[100],c[100],d[100];
int N,ans=0;
void search(int cur){
    if(cur>N){ ans++; return; }
    for(int i=1;i<=N;i++){
        if(!b[i] && !c[i+cur] && !d[i-cur+N]){
            hang[cur]=i;
            b[i]=1; c[i+cur]=1; d[i-cur+N]=1;
            search(cur+1);
            b[i]=0; c[i+cur]=0; d[i-cur+N]=0;
        }
    }
}
```

- 全局状态数组 + 递归搜索
- 回溯恢复：标记后递归，递归后清除标记

## 8. 类与OOP风格

- 使用 `private` / `public` 访问控制
- 构造函数使用 `this->` 成员赋值 或 **初始化列表**：`Date(int y,int m,int d):_year(y),_month(m),_day(d){}`
- 类声明与实现分离：`.h` 声明成员函数，`.cpp` 实现
- 重载 `operator<<` / `operator>>` 用 `friend` 友元实现输出输入
- 友元函数在类内声明、类外定义
- 友元模板函数：`template <typename T> friend void dis(const T& obj);`
- 运算符重载显式调用：`t1.operator+(t2)` 而非 `t1 + t2`
- 成员运算符重载函数标记 `const`：`T operator+(const T &A)const;`
- 虚函数表手动访问：`intptr_t* vptr=(intptr_t*)(&obj); intptr_t* vftable=(intptr_t*)*vptr;`

```cpp
class Date{
    friend ostream& operator<<(ostream& out,const Date& d);
    friend istream& operator>>(istream& in,Date& d);
public:
    Date(int year=1,int month=1,int day=1)
        :_year(year),_month(month),_day(day){}
private:
    int _year;
    int _month;
    int _day;
};
ostream& operator<<(ostream& out,const Date& d){
    out<<d._year<<" "<<d._month<<" "<<d._day;
    return out;
}
```

## 9. 模板与泛型

- 使用 `template <typename T>` 关键字（`typename` 而非 `class`）
- 多类型参数：`template <typename T, typename U>`
- 测试多种基本类型实例化：`int`, `float`, `double`, `char`, `bool`
- 友元模板函数与类结合使用：`template <typename T> friend void dis(const T& obj);`

```cpp
template <typename T>
T add(T a,T b){
    return a+b;
}
int main(){
    cout<<add(1,2)<<endl;
    cout<<add(3.14,6.28)<<endl;
    cout<<add('a','b')<<endl;
    cout<<add(true,false)<<endl;
    return 0;
}
```

## 10. 关键字与宏

- **auto**：`auto s=q.front();` 自动类型推导
- **nullptr**：`ListNode *next=nullptr;` 与 `NULL` 混用均可
- **__FUNCTION__**：`cout<<__FUNCTION__<<endl;` 打印当前函数名
- **const 成员函数**：`void display()const;` 标记不修改成员变量

## 11. 编译配置

- **编译器**：MinGW g++，路径 `C:\mingw64\bin\g++.exe`
- **编译参数**：`-g`（调试模式）
- **输出文件**：`<源文件名>.exe`

## 12. 注意事项

| ✅ 允许 | ❌ 不推荐 |
|---------|----------|
| `#include<bits/stdc++.h>` | 单独写多个 `#include` |
| VLA `int arr[n]` | 强制使用 `vector` 替代 |
| 全局变量声明 | 大量函数传参 |
| 短名/拼音函数名 | 长英文描述性函数名 |
| 混用 `cin/cout` 和 `printf/scanf` | 纯用C++流或纯用C I/O |
| 省略 `return 0;` | 理论上应保留，偶尔可省略 |
| 注释保留旧代码 | 直接删除旧代码 |
| `deque` 替代 `queue` | 强制使用 `std::queue` |
| `NULL` 和 `nullptr` 混用 | 强制只使用一种 |
| `typedef struct` 单字母简写 | 长结构体类型名 |
| `m_` / `_` 前缀成员变量 | 无前缀成员变量 |
| 显式调用 `operator+` | 仅隐式调用（虽都可接受） |