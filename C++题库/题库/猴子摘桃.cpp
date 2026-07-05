#include<bits/stdc++.h>
using namespace std;
int sum=0,n,day=1,x=1;
int main(){
	cin>>n;
	for(int i=1;day<=n;i++){
		for(int j=1;j<=i;j++){
			day++;
			sum+=x;
		}
		x++;
	}
	cout<<sum;
	return 0;
}
