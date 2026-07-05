#include<bits/stdc++.h>
using namespace std;
float n,m;
int main(){
	cin>>n>>m;
	if(((n-100)*0.9)*1.1<m) cout<<"fat";
	else if(((n-100)*0.9)*0.9>m) cout<<"thin";
	else cout<<"standard";
	return 0;
}
