#include<bits/stdc++.h>
using namespace std;
template <typename T>//假设类型
T add(T a,T b){
	return a+b;
}
/*class moter{
	public:
		int R_m;
};
template<class T>
bool func1(T &a,T &b){
	return a.R_m>b.R_m;	
}*/
template<typename T>
T abb(T a,T b,T c,T d){
	return (a+b)-(c+d);
}
//template<typename T>
/*T shuo(T a){
	T c=typeid(a).name();
	if(c=='i') return "int";
	if(c=='f') return "float";
	if(c=='b') return "bool";
	if(c=='c') return "char";
	if(c=='s') return "string";
}*/
int main(){
	cout<<add(1,2)<<endl;//int
	cout<<add(3.14,6.28)<<endl;//float
	cout<<add('a','b')<<endl;//char
	cout<<add(true,false)<<endl;//bool
	//cout<<func1(1,0);
	cout<<abb(true,false,false,true)<<endl;
	int a=1;
	//cout<<shuo(a);
	return 0;
}
