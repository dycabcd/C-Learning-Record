#include<bits/stdc++.h>
using namespace std;
int n,x,sum=0;
int main(){
	cin>>n;
	int arr[n+5];
	for(int i=0;i<n;i++) cin>>arr[i];
	for(int i=0;i<n;i++) x+=arr[i];
	x/=n;
	for(int i=0;i<n;i++) sum+=(arr[i]-x)*(arr[i]-x);
	sum/=n;
	cout<<sum;
	return 0;
}
