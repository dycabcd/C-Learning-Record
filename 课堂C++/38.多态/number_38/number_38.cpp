#include<bits/stdc++.h>
using namespace std;
class Phone{
	public:
		string make;
		string color;
		int price;
		float cpu;
	void talk(){
		cout<<"这是一部"<<make<<"手机,搭载了"<<cpu<<"芯片";
	}
};
class SuperPhone : public Phone{
	public:
		void bianxing(int a){
			cout<<"请输入模式编号:1 普通；2 78；3 91；4 筷子；5 水泥；6 小夫"<<endl;
			cin>>a;
			string arr[6]={"普通","78","91","筷子","水泥","小夫"};
			cout<<"已变为"<<arr[a-1]<<"形态";
		}
};

int n;
int main(){
	Phone a=Phone();
	a.make="华为";
	a.cpu=9020;
	a.talk();
	cout<<endl;
	SuperPhone b =SuperPhone();
	b.bianxing(n);
	return 0;
}
