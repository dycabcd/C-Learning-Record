#include<bits/stdc++.h>
using namespace std;
int x,y,z,a;
int main(){
	cin>>x>>y>>z>>a;
	int n,m;
	n=a*x;
	if(y>=a) m=y*z;
	else if(y<=a) m=a*z;
	
	if(n>m) cout<<m;
	else cout<<n;
	return 0;
}
