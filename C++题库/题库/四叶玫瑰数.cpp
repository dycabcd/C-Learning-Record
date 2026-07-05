#include<bits/stdc++.h>
using namespace std;
int fun(int n){
	int s=0,x;
	int a=n;
	while(n!=0){
		x=n%10;
		s+=x*x*x*x;
		n/=10;
	}
	if(s==a) return 0;
}
int main(){
	for(int i=1000;i<=9999;i++){
		if(fun(i)==0) cout<<i<<" ";
	}
	return 0;
}
