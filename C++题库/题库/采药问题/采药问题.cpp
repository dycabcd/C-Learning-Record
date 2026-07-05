#include<bits/stdc++.h>
using namespace std;
const int N=1010;
int w[N],v[N];
int f[N];
void solve(){
	int T,M;
	cin>>T>>M;
	for(int i=1;i<=M;i++){
		cin>>w[i]>>v[i];
	}
	for(int i=1;i<=M;i++){
		for(int j=T;j>=w[i];j--){
			f[j]=max(f[i],f[j-w[i]]+v[i]);
		}
	}
	cout<<f[T]<<"\n";
}
int main(){
	solve();
	return 0;
}

