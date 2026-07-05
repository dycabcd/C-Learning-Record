#include<bits/stdc++.h>
using namespace std;
int a,b;
int p(int x){
	int y = 0;
	while(x != 0){
		y++;
		x/=10;
	}
	return y;
}
int main(){
	cin>>a>>b;
	int n = a+b;
	int o = p(n);
	int arr[o+1];
	arr[0] = -1;
	for(int i=o;n!=0;i--){
		arr[i] = n%10;
		n/=10;
	}
	for(int i=o-1;i>=0;i--){
		cout<<arr[o-i];
		if(i%3==0 && i > 0) cout<<",";
	}
	return 0;
}
