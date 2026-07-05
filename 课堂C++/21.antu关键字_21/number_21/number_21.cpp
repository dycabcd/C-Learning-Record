#include<bits/stdc++.h>
using namespace std;
auto num(auto a1,auto b1){
	return a1-b1;
}
int main(){
	int a=10;
	float b=3.14;
	bool c= true;
	string d="abc";
	auto e="你好";
	if(typeid(d)!=typeid(e)) cout<<"yes";	
	
	auto* p1=&a;
	auto* p2=&b;
	auto* p3=&c;
	auto* p4=&d;
	cout<<p1<<" "<<*p1<<endl;
	cout<<p2<<" "<<*p2<<endl;
	cout<<p3<<" "<<*p3<<endl;
	cout<<p4<<" "<<*p4<<endl;
	
	cout<<num("123","456")<<endl;
	
	int w[]={1,2,3,4,5,6,7,8,9,10};
	for(int i=0;i<sizeof(w)/sizeof(w[0]);i++){
		w[i]*=3;
		cout<<w[i]<<" ";
	}
	cout<<endl;
	
	for(auto i : w){
		cout<<i<<" ";
	}
	return 0;
}
