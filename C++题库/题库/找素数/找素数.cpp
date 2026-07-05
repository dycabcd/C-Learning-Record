#include<bits/stdc++.h>
using namespace std;
bool pop(int x){
	for(int i=2;i<x;i++){
		if(x%i==0) return false;
	}
	return true;
}
int a,b,sum=0;
int main(){
	cin>>a>>b;
	for(int i=a;i<=b;i++){
		if(pop(i)==true) sum++;
	}
	cout<<sum;
	return 0;
}
