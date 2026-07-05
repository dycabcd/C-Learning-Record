#include<bits/stdc++.h>
using namespace std;
class  Base{
	private:
		int num;
	public:
		Base(){num=10;}
		~Base(){}
		virtual void fun1(){
			cout<<"virtual func1"<<endl;
		}
		virtual void fun2(){
			cout<<"virtual func2"<<endl;
		}
	virtual void fun3(){
		cout<<"virtual func3"<<endl;
	}
};
class Son:public Base{
	public:
		virtual void fun2(){
			cout<<"2";
		}
	
};
void test(){
	Base base;
	intptr_t *vfptr = (intptr_t*)&base;
	intptr_t *vftabble = (intptr_t*)*vfptr;
	void(*func)() = (void(*)())*vftabble;
	func();
	func=(void(*)())*(vftabble+1);
	func();
}
int main(){
	test();
	return 0; 
}
