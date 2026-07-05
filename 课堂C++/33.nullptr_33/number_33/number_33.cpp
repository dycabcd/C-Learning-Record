#include<bits/stdc++.h>
using namespace std;
void fun(int a){
	cout<<a<<endl;
}
void fun(int *a){
	cout<<*a<<endl;
}
int main(){
	int a=100;
	int* p=&a;
	cout<<p<<" "<<*p<<endl;
	p=NULL;
	fun(p);
	cout<<p<<" "<<*p<<endl;
	if(NULL == 0) cout<<"yes";
	return 0;
}
