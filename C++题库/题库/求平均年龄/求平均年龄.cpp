#include<bits/stdc++.h>
using namespace std;
int n,x;
float sum=0;
int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>x;
		sum+=x;
	}
	sum=sum/n;
	printf("%.2f",sum);
	return 0;
}
