#include<bits/stdc++.h>
using namespace std;

int memo[205][205];
int dfs(int l, int r){
	if (l >= r) return 0;
	if (memo[l][r] != 0) return memo[l][r]; 
	
	int ret = INT_MAX;
	for (int head = l; head <= r; head++)
	{
		int x = dfs(l, head - 1);
		int y = dfs(head + 1, r);
		ret = min(ret, head + max(x, y));
	}
	memo[l][r] = ret;
	return ret;
}

int getMoneyAmount(int n) {
	return dfs(1, n);
}

int main()
{
	int n;
	cin>>n;
	cout<<"花费最少为:"<<getMoneyAmount(n);
	return 0;
}
