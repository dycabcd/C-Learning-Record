#include<bits/stdc++.h>
using namespace std;
int memo[31];
int dfs(int n){
	if(memo[n]!=-1) return memo[n];
	if(memo[n]==0 || memo[n]==1){
		memo[n]=n;
		return n;
	}
	memo[n]=dfs(n-1)+dfs(n-2);
	return dfs(n-1)+dfs(n-2);
}
int fib(int n){
	memset(memo,-1,sizeof memo);
	memo[0]=1;
	return  dfs(n);
}
int main(){
	int n;
	cin>>n;
	fib(n);
	for(int i=0;i<=n;i++) cout<<memo[i]<<" ";
	return 0;
}
