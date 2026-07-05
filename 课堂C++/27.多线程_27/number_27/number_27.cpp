#include<bits/stdc++.h>
using namespace std;
void a(){
	cout<<"thread 1 thread new!!!"<<endl;
}
void b(int n){
	cout<<"thread 2 running new!!!"<<n;
}
int main(){
	thread t1(a);
	thread t2(b,100);
	
	t1.detach();
	if(t1.joinable()){
		t1.join();	
	}
	else{
		cout<<"no";
	}
	t2.join();
	
	thread t3(a;
		thread t4(b,10);
		t3.join();
		this_thread::yield();
		cout<<this_thread::get_id();
		return 0;
}
