#include<bits/stdc++.h>
using namespace std;
/*常量*/

/*结构体*/

/*类*/

/*全局变量*/
int a[] = {-4,0,0,0-3,4,4};
/*函数*/
int find(int x){//查找头头            
	if(a[x]<0) return x;
	return a[x]=find(a[x]);
}
void join(int x,int y){//暴力雇佣
	int fx=find(x),fy=find(y);
	if(fx!=fy){
		a[fx]=fy;                                                                                    
	}
}
/*调用函数*/
void fun_1(){
	cout<<endl;
	
	cout<<find(3)<<" "<<find(6)<<endl;
	join(3,5);
	cout<<find(3)<<" "<<find(6)<<endl;
	
	cout<<endl;
}
void fun(){
	system("pause");
	//fun_1();
}
/*主函数*/ int main(){
	//fun();
	fun_1();
	return 0;
}
