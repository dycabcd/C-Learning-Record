#include<bits/stdc++.h>
using namespace std;
struct Student{
	string name; //姓名
	int age; //年龄
	bool sex; //性别
	float high; //身高
	long long number; //身份证号
	int money; //钱
};
void ts(Student s,string a,int b,bool c,float d,long long e,int f){
	s.name=a;
	s.age=b;
	s.sex=c;
	s.high=d;
	s.number=e;
	s.money=f;
}
int main(){
	Student s={"小明",16,1,1.99,340123200910121452,500};
	ts(s,"小明",16,1,1.99,340123200910121452,500);
	cout<<s.name<<" "<<s.age<<" "<<s.sex<<" "<<s.high<<" "<<s.number<<" "<<s.money;
	return 0;
}
