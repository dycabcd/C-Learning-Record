#include<bits/stdc++.h>
using namespace std;

class T{
	public:
		T();
		T(double x,double y,double z);
	public:
		T operator+(const T &A)const;
		void display()const;
	private:
		double m_x;
		double m_y;
		double m_z;
};

T::T():m_x(0.0),m_y(0.0),m_z(0.0){}
T::T(double x,double y,double z):m_x(x),m_y(y),m_z(z){}

T T::operator+(const T &A)const{
	T B;
	B.m_x=this->m_x+A.m_x;
	B.m_y=this->m_y+A.m_y;
	B.m_z=this->m_z+A.m_z;
	return B;
}
void T::display()const{
	cout<<"("<<m_x<<","<<m_y<<","<<m_z<<")";
}
int main(){
	T t1(100,200,300);
	T t2(300,200,100);
	T t3=t1.operator+(t2);
	t3.display();
	return 0;
}
