#include<bits/stdc++.h>
using namespace std;

int main(){
	long long arr[20];
	for(int i=0;i<20;i++) arr[i]=1;
	for(int i=0;i<20;i++){
		for(int j=1;j<=i+1;j++){
			arr[i]*=j;
		}
		cout<<arr[i]<<endl;
	}
	return 0;
}
