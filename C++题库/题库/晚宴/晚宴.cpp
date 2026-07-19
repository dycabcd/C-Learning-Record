#include<bits/stdc++.h>
using namespace std;
int n;
bool zmjjkk(int x,int y){
	int cxy;
	if(x>y) cxy = y;
	else cxy = x;
	for(int i = 2;i<=cxy;i++){
		if((x%i == 0) && (y%i == 0)){
			return false;
			break;
		}
	}
	return true;
} 
int main(){
	int max = 0;
	cin>>n;
	int arr[n];
	for(int i = 0;i<n;i++) cin>>arr[i];
	for(int i = 0;i<n-1;i++){
		for(int j = i+1;j<n;j++){
			if(((zmjjkk(arr[i],arr[j])) == true) && max < (arr[i] + arr[j])){
				max = arr[i] + arr[j];
			}
		}
	}
	cout<<max;
	return 0;
}
