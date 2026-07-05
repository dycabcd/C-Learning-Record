#include<bits/stdc++.h>
using namespace std;
int n,c,sum=0;
int main(){
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)cin>>arr[i];
	cin>>c;
	for(int i=0;i<n;i++){
		if(arr[i]==c) sum++;
	}
	cout<<sum;
	return 0;
}
