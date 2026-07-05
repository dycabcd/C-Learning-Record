#include<bits/stdc++.h>
using namespace std;
int n,m;
int main(){
	cin>>n>>m;
	int a[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>a[i][j];
		}
	}
	int s=0;
	for(int i=0;i<m;i++) s+=a[0][i];
	for(int i=0;i<m;i++) s+=a[n-1][i];
	for(int i=0;i<n;i++) s+=a[i][0];
	for(int i=0;i<n;i++) s+=a[i][m-1];
	s-=a[n-1][0]+a[0][m-1]+a[0][0]+a[n-1][m-1];
	
	cout<<s;
	return 0;
}
/*
3 3
1 2 3
4 5 6
7 8 9
*/
