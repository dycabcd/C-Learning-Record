#include<bits/stdc++.h>
using namespace std;
int n;
float sum=0;
int main(){
	cin>>n;
	int s[n];
	for(int i=0;i<n;i++){
		cin>>s[i];
		sum+=s[i];
	}
	sum=sum/n;
	printf("%.3f",sum);
	cout<<endl;
	for(int i=0;i<n;i++){
		if(s[i]>sum) cout<<s[i]<<endl;
	}
	return 0;
}
