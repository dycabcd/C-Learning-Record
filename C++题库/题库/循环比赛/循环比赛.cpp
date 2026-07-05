#include<bits/stdc++.h>
using namespace std;
int N=1,M;
int main(){
	cin>>M;
	for(int i=1;i<=M;i++) N*=2;
	int arr[N];
	for(int i=0;i<N;i++){
		arr[i]=i+1;
	}
	for(int i=0;i<N;i++){
		for(int j=i;j<N;j++){
			cout<<arr[j-i];
		}
		cout<<endl;
	}
	return 0;
}
