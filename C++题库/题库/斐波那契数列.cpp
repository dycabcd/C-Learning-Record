#include<bits/stdc++.h>
using namespace std;
int N[1000001];
int n;
int main(){
	N[1]=1;
	N[2]=1;
	for(int i=3;i<=100001;i++) N[i]=N[i-1]+N[i-2];
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++) cin>>arr[i];
	for(int i=0;i<n;i++){
		arr[i]=N[arr[i]]%1000;
	}
	for(int i=0;i<n;i++) cout<<arr[i]<<endl;
	return 0;
	
}
