#include<bits/stdc++.h>
using namespace std;
int n;
int main(){
	cin>>n;
	int arr[n],brr[n];
	for(int i = 0;i<n;i++){
		cin>>arr[i];
		brr[i] = arr[i];
		brr[i] = abs(brr[i]);
	}
	sort(brr,brr+n);
	for(int i = n-1;i>=0;i--){
		for(int j = 0;j<n;j++){
			if(brr[i] == abs(arr[j])){
				cout<<arr[j]<<" ";
				break;
			}
		}
	}
 	return 0;
}//
