#include<bits/stdc++.h>
using namespace std;
void test(int n,int *arr){
	for(int i=0;i<n;i++) cout<<arr[i]<<" ";
}
int main(){
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	test(10,arr);
	cout<<endl;
	cout<<"————————————————————————————"<<endl;
	
	
	
	int sbxiaofu7891=100;
	int *p=&sbxiaofu7891;
	int **t=&p;
	int ***g=&t;
	cout<<p<<" "<<*p<<endl;
	cout<<t<<" "<<*t<<endl;
	cout<<g<<" "<<*g<<endl;
	cout<<endl;
	string a[]={"你","是","我","好"};
	string b[]={"李","夫","小","军"};
	string c[]={"我","的","假","牙"};
	string *pp[]={a,b,c};
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			cout<<pp[i][j]<<" ";
		}
	}
	return 0;
}
