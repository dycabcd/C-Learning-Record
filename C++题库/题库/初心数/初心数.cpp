#include<bits/stdc++.h>
using namespace std;
int n,cnt=0;
int v(int x){
	int s=0;
	while(x!=0){
		s+=x%10;
		x=x/10;
	}
	return s;
}
int main(){
	cin>>n;
	int a[n],arr[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		for(int j=2;j<=9;j++){
			if(v(j*a[i])==v(a[i])){
				cnt++;
			}
		}
		if(cnt==8) arr[i]=v(a[i]);
		else arr[i]=0;
		cnt=0;
	}
	for(int i=0;i<n;i++){
		if(arr[i]==0) cout<<"No"<<endl;
		else cout<<arr[i]<<endl;
	}
	return 0;
}
