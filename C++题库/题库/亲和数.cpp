#include<bits/stdc++.h>
using namespace std;
int pop(int x){
	int sum=0;
	for(int i=1;i<=x;i++){
		if(x%i==0) sum+=i; 
	}
	sum=sum-x;
	return sum;
}
int main(){
	int s;
	cin>>s;
	int arr[s][2];
	for(int i=0;i<s;i++){
		for(int j=0;j<2;j++){
			cin>>arr[i][j];
		}
	}
	for(int i=0;i<s;i++){
		if(pop(arr[i][0])==arr[i][1] && pop(arr[i][1])==arr[i][0]) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}
