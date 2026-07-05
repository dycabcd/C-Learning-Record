#include<bits/stdc++.h>
using namespace std;
int n,sum=0;
int main(){
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++) cin>>arr[i];
	sort(arr,arr+n);
	for(int i=0;i<n-1;i+=2){
		if(arr[i]!=arr[i+1]){
			sum+=abs(arr[i]-arr[i+1]);
		}
	}
	cout<<sum;
	return 0;
}
