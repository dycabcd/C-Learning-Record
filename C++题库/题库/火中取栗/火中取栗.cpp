#include<bits/stdc++.h>
using namespace std;
int n,k;
int main(){
	cin>>n>>k;
	int arr[n];
	int sum=0;
	for(int i=0;i<n;i++) cin>>arr[i];
	for(int i=0;i<n;i++){
		if(arr[i]%2!=0) sum=sum+arr[i]/2+1;
		else sum=sum+arr[i]/2;
	}
	cout<<sum;
	return 0;
}
