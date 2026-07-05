#include<bits/stdc++.h>
using namespace std;
/*常量*/

/*结构体*/

/*类*/
class student{
	private:
		int age;
		float high;
		bool sex;
	public:
		void set(int _age,float _high,bool _sex){
			age = _age;
			high = _high;
			sex = _sex;
		}
		void get(){
			if(sex=1)cout<<"他是一个"<< age <<"岁的"<<"男孩,身高是:"<<high;
			else cout<<"他是一个"<< age <<"岁的"<<"男孩,身高是:"<<high;
		}
};
/*全局变量*/

/*函数*/

/*调用函数*/
