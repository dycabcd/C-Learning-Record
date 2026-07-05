#include<bits/stdc++.h>
using namespace std;
int n,m,k,x,y;
int main(){
	cin>>n>>m>>k;
	int arr[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			arr[i][j]=0;
		}
	}
	for(int i=0;i<m;i++){
		cin>>x>>y;
		arr[x][y]=1;
		arr[x+2][y]=1;
		arr[x-2][y]=1;
		arr[x][y+2]=1;
		arr[x][y-2]=1;
		for(int i=x-1;i<x+2;i++){
			for(int j=y-1;j<y+2;j++){
				arr[i][j]=1;
			}
		}
	}
	for(int i=0;i<k;i++){
		cin>>x>>y;
		arr[x][y]=1;
		for(int i=x-2;i<5;i++){
			for(int j=y-2;j<5;j++){
				arr[i][j]=1;
			}
		}
	}
	int sum=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(arr[i][j]!=0) sum++;
		}
	}
	cout<<sum;
	return 0;
}
