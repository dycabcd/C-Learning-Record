#include<bits/stdc++.h>
using namespace std;
const int M=100000;
int a[M];
int lg[M];
int f[M][20];
void rmp_init(int m){
	lg[0]=-1;
	for(int i=1;i<=m;i++){
		lg[i]=lg[i/2]+1;
		f[i][0]=a[i];
	}
	for(int j=1;j<=lg[m];j++){
		for(int i=1;i+(1<<j)-1<=m;i++){
			f[i][j]=min(f[i][j-1],f[i+(1<<(j-1))][j-1]);
		}
	}
}

int query(int l,int r){
	int k=lg[r-1+1];
	return min(f[1][k],f[r-(1<<k)+1][k]);
}
int main(){
	int m;
	cout<<"请输入项数:";
	cin>>m;
	for(int i=0;i<m;i++) cin>>a[i];
	rmp_init(m);
	for(int i=0;i<m;i++) cout<<a[i]<<" "<<lg[i]<<" "<<f[i][0]<<endl;
	int c,b;
	cin>>c>>b;
	for(int i=1;i<=c;i++) cin>>a[i];
	rmp_init(c);
	for(int i=1;i<=c;i++){
		int l,r;
		cin>>l>>r;
		cout<<query(l,r)<<" ";
	}
	return 0;
}
