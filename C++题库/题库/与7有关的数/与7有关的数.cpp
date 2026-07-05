#include<bits/stdc++.h>
using namespace std;
int sum=0,n,s1=0,s2=0;
int main(){
	cin>>n;
	int i=0;
	while(i<=n){
		i++;
		if(i<10){
			if(i==7) 
				continue;
		}
		if(i>=10){
			s1=i%10;
			s2=i/10%10;
			if((s1==7 || s2==7) && i%7==0)continue;
		}
		sum+=i*i;
	}
	cout<<sum;
	return 0;
}
