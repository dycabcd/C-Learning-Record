#include<bits/stdc++.h>
using namespace std;
class Date{
	friend ostream& operator << (ostream& out,const Date& d);
	friend istream& operator << (istream& in,Date& d);
public:
	Date(int year=1,int month=1,int day=1)
		:_year(year)
		,_month(month)
		,_day(day)
	{ }
	operator bool(){
		if(_year == 0) return false;
		else return true;
	}
private:
	int _year;
	int _month;
	int _day;
};
istream& operator>>(istream& in,Date& d){
	in>>d._year>>d._month>>d._day;
	return in;
}
ostream& operator<<(ostream& out,const Date& d){
	out<<d._year<<" "<<d._month<<" "<<d._day;
	return out;
}
int main(){
	int i=1;
	double j=2.2;
	cout<<i<<endl;
	cout<<j<<endl;
	
	Date d(2022,4,10);
	cout<<d;
	while(d){
		cin>>d;
		cout<<d;
	}
	return 0;
}

