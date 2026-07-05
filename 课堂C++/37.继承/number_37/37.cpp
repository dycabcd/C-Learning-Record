#include<bits/stdc++.h>
using namespace std;
class test{
	public:
		test(const char *c1="功能1",const char *c2="功能2"){
			this->c1=c1;
			this->c2=c2;
		};
		~test();
	void play(){
		cout<<"playing"<<endl;
	}
	private:
		string c1;
		string c2;
};

class pt:public test{
	public:
		pt(const int *a,const int *b){
		};
};
int main(){
	test t();
	printf("%s","子类对象开始构造");
	return 0;
}
