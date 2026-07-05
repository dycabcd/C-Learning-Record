#include<bits/stdc++.h>
using namespace std;
int n,m;
int main(){
	cin>>n>>m;
	int arr[n+1];
	for(int i=1;i<=n;i++) arr[i]=0;
	for(int i=1;i<=n;i++) if(i%2==0) arr[i]=1;
	for(int i=3;i<=m;i++){
		for(int j=1;j<=n;j++){
			if(j%i==0) arr[j]=1-arr[j];
		}
	}
	for(int i=1;i<=n;i++){
		if(arr[i]==0){
			cout<<i<<",";
		}
		if(i==n && arr[i]==0){
			cout<<i;
		}
		
	}
	return 0;
}
