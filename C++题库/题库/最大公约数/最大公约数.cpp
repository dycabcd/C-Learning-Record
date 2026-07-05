#include<bits/stdc++.h>
using namespace std;
int n;
/*int at(int a,int b){
	int n=0;
	if(a==b) return a;
	if(a>b){
		for(int i=1;i<b;i++){
			if(a%i==0 && b%i==0){
				n=i;
			}
		}
	}
	return n;
	
}*/
int main(){
	cin>>n;
	int a,b;
	//for(int i=0;i<n;i++) cin>>a>>b;
	//cout<<at(a,b);
	for(int i=0;i<n;i++){
		cin>>a>>b;
		int m=0;
		if(a==b) cout<<a;
		if(a>b){
			for(int i=1;i<b;i++){
				if(a%i==0 && b%i==0){
					m=i;
				}
			}
		}
		cout<<m<<" ";
	}
	return 0;
}
