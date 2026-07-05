#include<bits/stdc++.h>
using namespace std;
int fun(int x){
	for(int i=2;i<x;){
		if(x%i==0) x/=i;
		else i++;
	}
	return x<=5?1:0;
}
int main(){
	for(int i=4;i<=100;i++){
		if(i==5) continue;
		if(fun(i)==1) cout<<i<<" ";
	}
	return 0;
}
