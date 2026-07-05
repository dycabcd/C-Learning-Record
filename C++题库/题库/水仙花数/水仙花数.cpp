#include<bits/stdc++.h>
using namespace std;
int cmp(int x){
	int y,sum=0;
	while(x!=0){
		y=x%10;
		sum+=y*y*y;
		x=x/10;
	}
	return sum;
}
int n;
int main(){
	cin>>n;
	for(int i=2;i<=n;i++){
		if(cmp(i)==i) cout<<i<<endl;
	}
	return 0;
}
