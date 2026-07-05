#include<bits/stdc++.h>
using namespace std;
int zlt(int n){
	int arr[51];
	arr[1]=1;
	arr[2]=2;
	for(int i=3;i<51;i++){
		arr[i]=arr[i-1]+arr[i-2];
	}
	cout<<arr[n]<<endl;
}
int main(){
	int a,b,c;
	cin>>a>>b>>c;
	zlt(a);
	zlt(b);
	zlt(c);
	return 0;
}
