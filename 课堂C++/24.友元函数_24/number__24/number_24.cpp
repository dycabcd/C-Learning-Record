#include<bits/stdc++.h>
using namespace std;
class  Box{
	private:
		double length;
	public:
		Box(double l):length(l){}
	friend double getlength(const Box& b);
	friend double calc(const Box& b);
	template <typename T>
	friend void dis(const T& obj);
};


class calculator{
	double calc(const Box& b);
};
double calc(const Box& b){
	return b.length;
}


double getlength(const Box& b){
	return b.length;
}


template <typename T>
void dis(const T& obj){
	cout<<obj.length;
}
int main(){
	Box box(100);
	dis(box);
	return 0;
}
