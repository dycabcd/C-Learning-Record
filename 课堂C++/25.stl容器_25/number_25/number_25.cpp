#include<bits/stdc++.h>
using namespace std;
int main(){
	string s="你好";
	s.append("世界");
	s.insert(1,"我是");
	string s1=s.substr(0,4);
	cout<<s.size()<<" "<<s.length()<<endl;
	cout<<s<<" "<<s1<<endl;
	
	vector<int> b={1,2,3,4,5,6};
	b.push_back(8);
	//b.clear();
	cout<<b.size()<<" "<<b.capacity()<<endl;
	cout<<b.front()<<" "<<b.back()<<endl;
	for(int i=5;i<100;i++) b.push_back(i);
	/*for(int i=0;i<100;i++){
		cout<<begin(i);
		cout<<end(i+1);
	}*/

	
	list<int> c={1,2,3,4,5,6,7,8};
	cout<<c.size();
	for(int i=0;i<=30;i++){
		cout<<c.front()<<" ";
		c.pop_front();
	}
	return 0;
}
