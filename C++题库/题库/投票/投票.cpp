#include<bits/stdc++.h>
using namespace std;
int t,f,s;
int main(){
	while(true){
		cin>>s;
		if(s==1) t++;
		if(s==0) f++;
		if(s==-1) break;
	}
	if(t>f) cout<<"Yes"<<endl;
	else if(t<f) cout<<"No"<<endl;
	else cout<<"Tie"<<endl;
	cout<<t<<":"<<f;
	
	return 0;
}
