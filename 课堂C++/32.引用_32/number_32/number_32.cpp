#include<bits/stdc++.h>
using namespace std;

int n=100;
void fun(char *c){
	cout<<n<<endl;
	*c='t';
}
void fun(char &c){
	cout<<n<<endl;
	c='o';
}
int main(){
	char a='V';
	char& b=a;
	fun(&a);
	cout<<a<<" "<<b<<endl;
	void fun10(char& c);
	fun10(a);
	//const int& c=10;
	cout<<a<<" "<<b;
	return 0;
}
