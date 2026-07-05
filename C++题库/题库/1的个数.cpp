#include<bits/stdc++.h>
using namespace std;
int n,sum=0;
int main(){
	cin>>n;
	while(true){
		if(n%2==1) sum+=1;
		n = n/2;
		if(n==1){
			sum++;
			break;
		}
		if(n==0) break;
	}
	cout<<sum;
	return 0;
} 
//0 0 1 0 0 1 1
