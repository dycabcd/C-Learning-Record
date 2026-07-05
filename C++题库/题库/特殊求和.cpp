#include<bits/stdc++.h>
using namespace std;
int n,sum=0;
int cmp(int x){
	int b;
	while(x!=0){
		b=x%10;
		if(b==7) return 7;
		x=x/10;
	}
	return 0;
}
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		if(i%7==0 || cmp(i)==7) sum+=i;
	}
	cout<<sum;
	return 0;
}
