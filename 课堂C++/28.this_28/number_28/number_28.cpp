#include<bits/stdc++.h>
using namespace std;

class Student {
private:
	char *name;
	int age;
	float score;
public:
	void setage(int age){
		this->age=age;
	}
	Student(char *name,int age,float score){
		this->name=name;
		this->age=age;
		this->score=score;
	}
	void show(){
		cout<<name<<" "<<age<<" "<<score;
	}
};
int main(){
	Student s1("李雷",29,99);
	s1.setage(18);
	s1.show();
	Student s2("韩梅梅",91,78);
	s2.setage(20);
	s2.show();
	return 0;
}
