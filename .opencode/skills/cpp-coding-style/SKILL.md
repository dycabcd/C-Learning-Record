---
name: cpp-coding-style
description: Use when writing or editing C++ code in this project (D:\My_Project\C++). Apply the user's established coding conventions including template structure, naming, formatting, and common patterns. Trigger keywords: C++, cpp, 编码风格, 代码规范, 习惯.
---

# C++ Coding Style (cpp-coding-style)

Use this skill when writing or editing any `.cpp` file in this project. Follow the conventions below exactly.

## 1. Header & Namespace

```cpp
#include<bits/stdc++.h>
using namespace std;
```

Always start with the universal header. Never use individual `#include` directives.

## 2. File Template Structure

Every program must follow this section-comment template in order:

```cpp
/*常量*/
/*结构体*/
/*类*/
/*全局变量*/
/*函数*/
/*调用函数*/
/*主函数*/ int main(){
    //freopen(".in","r",stdin);
    //freopen(".out","w",stdout);
    fun();
    return 0;
}
```

- Section comments are in Chinese, using `/* */` style.
- `/*主函数*/` is on the same line as `int main(){`.
- `freopen` lines are commented out by default.
- `system("pause")` is used inside `fun()` to pause execution.

## 3. Naming Conventions

- **Functions**: Use generic names like `fun()`, `fun_1()`, `fun_2()`, `fun_3()`, `fun_4()`.
- **Variables**: Short names — `n`, `m`, `x`, `y`, `a`, `b`, `c`, `s`, `sum`, `i`, `j`, `k`.
- **Structs/Classes**: Short names like `Node`, `Student`, `tree`, `bag`, `T`, `Box`, `Phone`.
- **Typedef**: Use `typedef struct ... N;` (C-style) when convenient.
- **Global constants**: `const int N=100;` or `const int N=1010;`.

## 4. Formatting

- **Indentation**: Use tabs (displayed as 4 spaces).
- **Braces**: Egyptian style — `{` on the same line for `if`, `for`, `while`.
- **Function braces**: Opening brace can be on the same line or next line (inconsistent in existing code, prefer same line for new code).
- **Spacing**: Inconsistent in existing code. Both `if(x==y)` and `if (x == y)` are acceptable.
- **No trailing whitespace** at end of lines.

## 5. Comments

- **Chinese only**: All comments are in Chinese.
- **Section comments only**: Use `/* */` for structural section headers. No inline code comments explaining *why*.
- **Commented-out code**: Keep old code commented out rather than deleting it.
- **Test data**: Place test input data as comments at the bottom or next to relevant function calls.

## 6. Common Patterns

- **Array declaration**: Use variable-length arrays (`int arr[n]`) and global fixed-size arrays (`int arr[N]`).
- **Initialization**: `memset(arr, 0, sizeof(arr));`
- **STL containers**: `vector`, `deque`, `stack`, `queue`, `list`, `string`, `pair`, `unordered_map`.
- **STL algorithms**: `sort`, `reverse`.
- **Iterators**: Prefer range-based `for` or index-based `for(int i=0;i<n;i++)`.
- **Input/Output**: Mix `cin`/`cout` with `printf`/`scanf` freely.
- **Pause**: `system("pause");` to keep console window open.
- **File I/O**: `freopen(".in","r",stdin);` / `freopen(".out","w",stdout);` (commented out by default).

## 7. Class & OOP Style

- `private` / `public` sections.
- Constructor uses `this->` to assign members.
- Overload `operator<<` as `friend` for output.

## 8. Compilation

- Compiler: MinGW g++ at `C:\mingw64\bin\g++.exe`
- Flags: `-g` (debug)
- Output: `<source>.exe`