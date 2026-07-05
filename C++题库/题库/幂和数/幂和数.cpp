#include<bits/stdc++.h>
using namespace std;
int l,r,sum = 0;
int sy(int n,int l,int r){
	int x = l ,y = r;
	int k = r;
	if (n <= 0) return -1;
	else{
		for(int i = 0;i<=k;i++){
			for(int j = 0;j<=k;j++){
				if((n == pow(2,i)+pow(2,j)) && (n<=r && n>=l)){
					return 1;
					break;
				}
			}
		}
	}
}
int main(){
	cin>>l>>r;
	for(int i = l;i<=r;i++){
		if(sy(i,l,r) == 1) sum++;
	}
	cout<<sum;
	return 0;
}
