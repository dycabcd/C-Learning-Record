#include<bits/stdc++.h>
using namespace std;
int dfs(int pos,vector<int>& nums,vector<int>& memo){
	if(memo[pos] !=0) return memo[pos];
	int ret=1;
	for(int i=pos+1;i<nums.size();i++){
		if(nums[i]>nums[pos]){
			ret=max(ret,dfs(i,nums,memo)+1);
		}
	}
	memo[pos]=ret;
	return ret;
}
int lengthOfLIS(vector<int>& nums){
	int ret=0,n=nums.size();
	vector<int> memo(n);
	for(int i=0;i<n;i++)
		ret=max(ret,dfs(i,nums,memo));
	return ret;
}
int main(){
	vector<int> n;
	for(int i=0;i<10;i++){
		n.push_back(i);
	}
	cout<<lengthOfLIS(n);
	return 0;
}
