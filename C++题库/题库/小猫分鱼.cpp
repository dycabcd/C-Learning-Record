#include<bits/stdc++.h>
using namespace std;
int n,a=0,t;
int main(){
	cin>>n;
	cin>>t;
	a=n+t;
	for(int i=n;i>1;i--) a=n*a+t;
	cout<<a;
	return 0;
}
