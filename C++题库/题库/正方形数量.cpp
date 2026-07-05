#include<bits/stdc++.h>
using namespace std;
int sum=1;
int main(){
	int n,m;
	cin>>n>>m;
	if(n==1) cout<<n*m;
	else{
		for(int i=n;i>=1;i--){
			sum+=3;
		}
		for(int i=m;i>=1;i--){
			sum+=3;
		}
		sum-=2;
	}
	cout<<sum-6;
	return 0;
}
