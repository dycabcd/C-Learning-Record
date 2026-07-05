#include<bits/stdc++.h>
using namespace std;
int dfs(int i,int j){
	if(i==0 || j==0) return 0;
	if(i==1 || j==1) return 1;
	return dfs(i-1,j)+dfs(i,j-1);
}
int uniquePaths(int m,int n){
	return dfs(m,n);
}
int main(){
	int m,n;
	cin>>m>>n;
	cout<<uniquePaths(m,n);
	return 0;
}
