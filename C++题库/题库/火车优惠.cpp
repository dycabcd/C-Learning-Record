#include<bits/stdc++.h>
using namespace std;
int x;
int money(int n){
	int s=0;
	if(n<=10) return n*20;
	if(n>10 && n<=50){
		s+=200;
		if((n-10)%5==0) s+=(n-10)*16;
		else s+=(n-10)*16+80;
	}
	if(n>50){
		s+=840;
		if((n-50)%10==0) s+=(n-50)*12;
		else s+=(n-50)*12+120;
	}
	return s;
}
int main(){
	cin>>x;
	int n,m=100000000;
	n=money(x);
	for(int i=1;i<x;i++){
		int a=i;
		int b=x-i;
		if(m>money(a)+money(b)) m=money(a)+money(b);
	}
	if(n>m) cout<<m;
	else cout<<n;
	return 0;
}

