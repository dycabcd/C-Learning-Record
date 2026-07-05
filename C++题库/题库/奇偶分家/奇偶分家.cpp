#include<bits/stdc++.h>
using namespace std;
int j=0,e=0;
int n;
int main(){
	cin>>n;
	for(int i=1,x;i<=n;i++){
		cin>>x;
		if(x%2==0) e++;
		else j++;
	}
	cout<<j<<" "<<e;
	return 0;
}
