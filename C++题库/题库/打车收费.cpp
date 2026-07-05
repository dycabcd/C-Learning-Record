#include<bits/stdc++.h>
using namespace std;
int sum=0;
int money(int a){
	if(a<=3) return 10;
	if(a>3 && a<=8) sum+=(a-3)*3+10;
	if(a>8) sum+=(a-3-5)*5+10+15;
	return sum;
}
int main(){
	int n;
	cin>>n;
	cout<<money(n);
	return 0; 
}
