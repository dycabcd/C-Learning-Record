#include<bits/stdc++.h>
using namespace std;
int a,b,c;
int main(){
	cin>>a>>b>>c;
	if(a==b && b==c) cout<<"b";
	else if((a==b && a!=c && b!=c) || (a==c && a!=b && c!=b) || (c==b && a!=c && b!=a)) cout<<"y";
	else if((a*a==b*b+c*c)||(c*c==b*b+a*a)||(b*b==a*a+c*c)) cout<<"z";
	else cout<<"n";
	return 0;
}
