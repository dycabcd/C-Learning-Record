#include<bits/stdc++.h>
using namespace std;
int n;
int main(){
	cin>>n;
	bool arr[n+1];
	for(int i=1;i<=n;i++){
		arr[i] = 0;
	}
	for(int i=1;i<=n;i++){
		for(int j=0;j<=n;j++){
			if(j%i==0){
				arr[j]=1-arr[j];
			}
		}
	}
	for(int i=1;i<=n;i++){
		if(arr[i]==1) cout<<i<<" ";
	}
	return 0;
}
