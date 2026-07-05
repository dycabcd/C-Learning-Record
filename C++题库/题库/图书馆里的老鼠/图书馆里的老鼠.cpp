#include<bits/stdc++.h>
using namespace std;
int n,x,y;
int main(){
	cin>>n>>y>>x;
	if(y%x==0){
		cout<<n-(y/x);
	}
	else{
		cout<<n-(x/y)-1;
	}
	return 0;
}
