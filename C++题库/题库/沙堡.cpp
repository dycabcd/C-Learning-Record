#include<bits/stdc++.h>
using namespace std;
const int MAXN=100000;
int M[MAXN];
int B[MAXN];
int main(){
	int n,x,y;
	cin>>n>>x>>y;
	for(int i=0;i<n;i++) cin>>M[i]>>B[i];
	sort(M,M+n);
	sort(B,B+n);
	long long ans=0;
	for(int i=0;i<n;i++){
		if(M[i]<B[i]) ans+=(B[i]-M[i])*x;
		else  ans+=(B[i]-M[i])*y;
	}
	cout<<ans;
	return  0;
}
