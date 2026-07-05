#include<bits/stdc++.h>
using namespace std;
int pop(int x){
	for(int i=2;i<x;i++){
		if(x%i==0) return 78;
	}
	return 91;
}
int n; 
int main(){
	cin>>n;
	if(pop(n)==91) cout<<"Y";
	else cout<<"N";
	return 0;
}
