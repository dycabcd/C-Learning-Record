#include<bits/stdc++.h>
using namespace std;
int n;
int main(){
	cin>>n;
	int arr[n][4];
	int s[n]={0};
	for(int i=0;i<n;i++){
		for(int j=0;j<4;j++){
			cin>>arr[i][j];
			s[i]+=arr[i][j];
		}
	}
	int p=0;
	for(int i=0;i<n-2;i++){
		int y=0;
		if(abs(s[i]-s[i+1])<=20){
			for(int j=0;j<4;j++){
				if(abs(arr[i][j]-arr[i+1][j])<=10){
					y++;
				}
			}
			if(y==4){
				i+=1;
				p++;
			}
		}
	}
	return 0;
}
