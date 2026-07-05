#include<bits/stdc++.h>
using namespace std;
int find(int x,vector<int> alls){
	int l = 0,r = alls.size() - 1;
	while(l < r){
		int mid = (l+r)/2;
		if(alls[mid] >= x){
			r = mid;
		}
		else{
			l = mid + 1;
		}
	}
	return l + 1;
}
int main(){
	vector<int> old_date = {100,5,20,10000,3000000};
	vector<int> alls = old_date;
	sort(alls.begin(),alls.end());
	alls.erase(unique(alls.begin(),alls.end()),alls.end());
	cout<<find(100,alls);
	return 0;
}
