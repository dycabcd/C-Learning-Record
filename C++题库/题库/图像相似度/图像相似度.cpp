#include<bits/stdc++.h>
using namespace std;
int n,m,sum=0;
int main(){
	cin>>n>>m;
	int a1[n][m],a2[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++) cin>>a1[i][j];
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++) cin>>a2[i][j];
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(a1[i][j]==a2[i][j]) sum+=1;
		}
	}
	float s=sum/(n*m)*100;
	printf("%.2f",s);
	return 0;
}
/*
3 3
1 0 1
0 0 1
1 1 0
1 1 0
0 0 1
0 0 1
*/
