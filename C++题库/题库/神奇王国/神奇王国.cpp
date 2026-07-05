#include<bits/stdc++.h>
using namespace std;
int n,m,sqr;
int main(){
	cin>>n>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(i==j) sqr+=(n-i)*(m-j);
		}
	}
	cout<<sqr<<endl;
	//int arr[n+1][m+1];
	/*for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			arr[i][j]=i+j-1;
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(arr[i][j-1]+1==arr[i][j] && arr[i-1][j]+1==arr[i][j]) sum++;
		}
	}*/
	//cout<<sum;
	return 0;
}
