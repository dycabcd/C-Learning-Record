#include<bits/stdc++.h>
using namespace std;
int n,sum=0;
int arr[4]={23,233,2333,2333};
int main(){
	cin>>n;
	int a=n%4;
	int b=n/4;
	if(b>0){
		sum+=b*(23+233+2333+23333);
		for(int i=0;i<a;i++){
			sum+=arr[i];
		}
	}
	else{
		for(int i=0;i<a;i++){
			sum+=arr[i];
		}
	}
	cout<<sum;
	return 0;
}
