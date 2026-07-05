#include<bits/stdc++.h>
using namespace std;
int main(){
	int arr[]={2,2,2,3,3,5};
	int c=1;
	int len=sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<len;i++){
		if(arr[i]==arr[i+1]) c+=1;
		else{
			cout<<arr[i]<<"^"<<c<<"*";
			c=1;
		}
	}
	return 0;
}
