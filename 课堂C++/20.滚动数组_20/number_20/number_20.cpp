#include<bits/stdc++.h>
using namespace std;
/*常量*/

/*结构体*/

/*类*/

/*全局变量*/

/*函数*/
int fb(int n){
	if(n==1) return 0;
	if(n==2) return 1;
	return  fb(n-1)+fb(n-2);
}
int fbnq(int n){
	int a=0,b=1,temp;
	for(int i=2;i<n;i++){
		temp=a+b;
		a=b;
		b=temp;
	}
	return temp;
}
/*调用函数*/
void fun_1(){
	cout<<endl;
	
	cout<<fb(20)<<" ";
	cout<<fbnq(20);
	
	cout<<endl;
}
void fun(){
	system("pause");
	fun_1();
	
	system("pause");
}
/*主函数*/ int main(){
	//freopen(".in","r",stdin);
	//freopen(".out","w",stdout);
	
	fun();
	return 0;
}
