#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<int> v(10,1);
	for(int i=0;i<10;i++) cout<<v[i]<<" ";
	cout<<endl;
	for(int i=0;i<=15;i++){
		cout<<"长度:"<<v.size()<<endl;
		cout<<"容量:"<<v.capacity()<<endl;
		v.push_back(1);
	}
	for(int i=0;i<=15;i++) v.pop_back();
	cout<<"容量:"<<v.capacity()<<endl;
	v.reserve(100);
	for(int i=0;i<=90;i++) v.push_back(i);
	cout<<"容量:"<<v.capacity()<<endl;
	return 0;
}
