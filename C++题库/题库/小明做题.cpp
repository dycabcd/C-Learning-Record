#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,Max,MAX;
	cin>>n;
	int arr[n][2];
	for(int i=0;i<n;i++){
		for(int j=0;j<2;j++) cin>>arr[i][j];
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<2;j++){
			if(arr[i][j+1]/arr[i][j]>Max){
				Max=arr[i][j+1]/arr[i][j];
				MAX=i;
			}
			else{
				Max=arr[i][j+1]/arr[i][j];
			}
		}
	}
	cout<<MAX+1;
	return 0;
}
