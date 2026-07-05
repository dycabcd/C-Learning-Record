#include<bits/stdc++.h>
using namespace std;
int N,D,d=1;
int main(){
	cin>>N>>D;
	int arr[N];
	int m;
	for(int i=0;i<N;i++) arr[i]=0;
	for(int i=1;i<=D;i++){
		cin>>m;
		arr[m]+=i;
	}
	for(int i=0;i<N;i++) cout<<arr[i]<<" ";
	return 0;
}
