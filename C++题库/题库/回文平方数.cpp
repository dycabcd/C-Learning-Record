#include<bits/stdc++.h>
using namespace std;
int reverse(int n){
	int t=0;
	vector<int> v(10,1);
	int i=0;
	while(n!=0){
		t=n%10;
		v[i]=t;
		n/=10;
		i++;
	}
	int k=0,r=1;
	for(int j=i-1;j>=0;j--){
		k+=v[j]*r;
		r*=10;
	}
	return k;
}
int main(){
	for(int i=1,k;i<=300;i++){
		k=i*i;
		if(reverse(k)==k) cout<<i<<" "<<k<<endl;
	}
	return 0;
}
