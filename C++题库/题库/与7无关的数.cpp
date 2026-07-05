#include<bits/stdc++.h>
using namespace std;
int n;
long sum=0;
bool qs(int x){
	int b;
	while(x!=0){
		b=x%10;
		if(b==7) return true;
		x=x/10;
	}
	return false;
}
int  pd(int y){
	if(!(y%7==0 || qs(y)==true)) return y;
	return 0;
}
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		sum=sum+pd(i)*pd(i);
	}
	cout<<sum;
	return 0;
}
