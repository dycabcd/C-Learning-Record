#include<bits/stdc++.h>
using namespace std;
int a=2;
namespace my_space{
	int a=1;
	int b=3;
}
using namespace my_space;
class Demo{
	public:
		Demo();
		void test(string str);
	private:
		string name;
		int age;
	public:
		void set(string name,int age){
			this->name=name;
			this->age=age;
		}
		void get(){
			cout<<"我叫"<<this->name<<"我今年"<<this->age<<"岁了";
		}
};
Demo::Demo(){
	cout<<"创建一个对象"<<endl;
}
void Demo::test(string str){
	cout<<"string:"<<str<<endl;
}
int main(){
	Demo d;
	d.test("hello world!!!");
	d.set("小明",7891);
	d.get();
	int a=3;
	cout<<a<<endl;
	cout<<::a<<endl;
	cout<<my_space::a<<endl;
	cout<<b<<endl;
	return 0;
}
