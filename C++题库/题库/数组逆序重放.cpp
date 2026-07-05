#include<bits/stdc++.h>
using namespace std;
int n;
int main(){
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++) cin>>arr[i];
	for(int i=0;i<n/2;i++){
		int t=arr[i];
		arr[i]=arr[n-i-1];
		arr[n-i-1]=t;
	}
	for(int i=0;i<n;i++) cout<<arr[i]<<" ";
	return 0;
}
