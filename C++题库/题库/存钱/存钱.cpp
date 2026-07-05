#include<bits/stdc++.h>
using namespace std;

int main(){
	int a,b,c;
	cin>>a>>b>>c;
	int arr[]={a,a,a,a,a,b,b};
	int s=0,t=0,d=0,i=0;
	while(s<c){
		s+=arr[i];
		i++;
		if(i==6) i=0;
		d++;
	}
	cout<<d;
	return 0;
}
