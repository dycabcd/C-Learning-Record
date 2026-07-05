#include<bits/stdc++.h>
using namespace std;

int hang[100];
int b[100],c[100],d[100];
int N,ans=0;
void search(int);
int main(){
	cin>>N;
	search(1);
	cout<<ans<<endl;
	return 0;
}
void search(int cur){
	if(cur>N){
		if(ans<3){
			for(int i=1;i<=N;i++){
				cout<<hang[i]<<" ";	
			}
			cout<<endl;
		}
		ans++;
		return;
	}
	else{
		for(int i=1;i<=N;i++){
			if(!(b[i]) && (!c[i+cur]) && (!d[i-cur+N])){
				hang[cur]=i;
				b[i]=1;
				c[i+cur]=1;
				d[i-cur+N]=1;
				search(cur+1);
				b[i]=0;
				c[i+cur]=0;
				d[i-cur+N]=0;
			}
		}
	}
}
