#include<bits/stdc++.h>
using namespace std;
int n,sum=0;
int main(){
	cin>>n;
	int arr[n+1];
	for(int i=1;i<=n;i++){
		cin>>arr[i];
	}
	for(int i=1;i<=n;i++){
		if(arr[i]<0){
			if(abs(arr[i])==250){
				sum=i;
				break;
			}
		}
		else if(arr[i]==250){
			sum=i;
			break;
		}
	}
	cout<<sum;
	return 0;
}
