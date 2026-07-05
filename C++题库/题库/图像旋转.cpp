#include<bits/stdc++.h>
using namespace std;
int n,m;
int main(){
	cin>>n>>m;
	int arr[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++)cin>>arr[i][j];
	}
	int brr[m][n];
	int t=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			brr[t][m-1-i]=arr[i][j];
		}
		t++;
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<brr[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
