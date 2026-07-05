#include<bits/stdc++.h>
using namespace std;

int main(){
	int a;
	cin>>a;
	int arr[a]={0};
	for(int i=0;i<a;i++){
		cin>>arr[i];
		for(int j=0;j<i;j++){
			if(arr[i]==arr[j]){
				i--;
				a--;
			}
		}
	}
	for(int i=0;i<a;i++) cout<<arr[i]<<" ";
	return 0;
}
