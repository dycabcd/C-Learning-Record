#include<bits/stdc++.h>
using namespace std;
int n,t=0;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		if(i*i*i==n) t=1;
	}
	if(t==1) cout<<"yes";
	else cout<<"no";
	return 0;
}
