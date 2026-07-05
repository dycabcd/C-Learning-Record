#include<bits/stdc++.h>
using namespace std;
bool pop(int x){
	for(int i=2;i<x;i++){
		if(x%i==0) return false;
	}
	return true;
}
int main(){
	for(int i=2;i<=100;i++){
		if(pop(i)==true) cout<<i<<" ";
	}	
	return 0;
}
