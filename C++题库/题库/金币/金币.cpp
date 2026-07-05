#include<bits/stdc++.h>
using namespace std;
int n,w=1,s=1;
long sum=0;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		while(s--){
			if(i<=n){
				sum+=w;
				i++;
			}
			else{
				cout<<sum;
				return 0;
			}
		}
		w++;
		s=w;
		i--;
	}
	cout<<sum;
	return 0;
}
