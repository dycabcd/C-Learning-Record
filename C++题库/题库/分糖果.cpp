#include<bits/stdc++.h>
using namespace std;
int n;
int main(){
	cin>>n;
	int a,s=0,t=0;
	for(int i=0;i<n;i++){
		cin>>a;
		if(a>t){
			s+=a;
			t=a;
		}
		else{
			int f=t+1;
			s+=f;
			t=t+1;
		}
	}
	cout<<s;
	return 0;
}
