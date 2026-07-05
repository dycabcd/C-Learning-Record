#include<bits/stdc++.h>
using namespace std;
int n;
int sy(int x){
	int y = sqrt(x);
	if((y*y) == x) return 1;
	else return 0;
}
int main(){
	int sum = 0;
	cin>>n;
	int arr[n];
	for(int i = 0;i<n;i++) cin>>arr[i];
	for(int i = 0;i<n;i++){
		for(int j = i;j<n;j++){
			if(sy(arr[i] + arr[j]) == 1) sum++;
		}
	}
	cout<<sum;
	return 0;
}
