#include<bits/stdc++.h>
using namespace std;

int main(){
	char c='a';
	cout<<c<<endl;
	string s="hello world";
	string s2="你好，我是小明";
	s.insert(5,"a");
	s2.insert(6,"好");
	cout<<s<<" "<<s2<<endl;
	
	string s3 ="abbbbbba";
	cout<<"出现的第一个位置"<<s3.find("a")+1<<endl;
	cout<<"出现的最后一个位置"<<s3.rfind("a")+1<<endl;
	cout<<"长度为:"<<s3.size()<<endl;
	return 0;
}
