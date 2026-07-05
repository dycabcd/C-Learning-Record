#include<bits/stdc++.h>
using namespace std;
int n,k,a=1,b=1;
int main(){
	cin>>n>>k;
	int i=1;
	while(a<n){
		b*=k+1;
		a+=b;
		i++;
	}
	cout<<i;
	return 0;
}
