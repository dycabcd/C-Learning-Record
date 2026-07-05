#include<bits/stdc++.h>
using namespace std;
bool pop(int x){
	for(int i=2;i<x;i++){
		if(x%i==0) return false;
	}
	return true;
}
int main() {
	int n,m;
	cin>>n;
	for(int i=2;i<n;i++){
		if(n%i==0){
			m=n/i;
			if(pop(m)){
				cout<<m;
				break;
			}
		}
	}
	return 0;
}
