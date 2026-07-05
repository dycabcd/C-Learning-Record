#include<bits/stdc++.h>
using namespace std;
/*常量*/

/*结构体*/

/*类*/

/*全局变量*/

/*函数*/

/*调用函数*/
void fun_1(){
	cout<<endl;
	
	deque<int> que;
	for(int i=1;i<=10;i++) que.push_back(i);
	for(int i=1;i<=10;i++){
		cout<<que.front()<<" ";
		que.pop_front();
	}
	
	cout<<endl;
}
void fun_2(){
	cout<<endl;
	
	deque<int> q1;
	deque<int> q2;
	for(int i=1;i<=10;i++){
		q1.push_back(i);
		q2.push_back(i);
	}
	q1.swap(q2);
	for(int i=1;i<=10;i++){
		cout<<q1.front()<<" ";
		q1.pop_front();
	}
	cout<<endl;
	for(int i=1;i<=10;i++){
		cout<<q2.front()<<"* ";
		q2.pop_front();
	}
	
	cout<<endl;
}
void fun_3(){
	int n,i,j;
	deque<int> q;
	cin>>n;
	for(int k=0;k<n;k++){
		cin>>i>>j;
		q.push_front(i);
		if(j==0) break;
	}
	for(int k=0;k<n;k++){
		cout<<q.back()<<endl;
		q.pop_back();
	}
}
void fun(){
	system("pause");
	system("pause");
	fun_1();
	
	system("pause");
	system("pause");
	fun_2();
	
	system("pause"); 
	system("pause");
	fun_3();//3 1 2 2 3 3 0
	
	system("pause");
	system("pause");
}
/*主函数*/ int main(){
	//freopen(".in","r",stdin);
	//freopen(".out","w",stdout);
	
	fun();
	return 0;
}
