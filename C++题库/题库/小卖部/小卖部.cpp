#include<bits/stdc++.h>
using namespace std;

int main(){
	int money;
	cout<<"带多少钱"<<endl;
	cin>>money;
	string arr[]={"李军","格调","鸡蛋","火腿肠","小夫"};
	int price []={78,91,5,7,7891};
	while(money>0){
		string n;
		cout<<"买什么"<<endl;
		cin>>n;
		for(int i=0;i<4;i++){
			if(n==arr[i]){
				if(money>=price[i]){
					cout<<"购买"<<arr[i]<<"成功"<<endl;
					money = money-price[i];
					cout<<"剩余"<<money<<"元";
				}
				else cout<<"钱不够"<<endl;
			}
		}
	}
	return 0;
}
