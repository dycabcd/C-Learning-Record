#include<bits/stdc++.h>
using namespace std;
int n,sum=0;
int main(){
	cin>>n;
	char s[n];
	scanf("%s",&s);
	for(int i=0;i<n;i++){
		if(n%2==0){
			if(s[i]!=s[i+1]){
				sum++;
				i+=2;
			}
		}
		else{
			if(s[i]!=s[i+2]&& s[i]<'\0'){
				sum++;
				i+=3;
			}
		}
	}
	if(sum==0){
		cout<<"-1";
	}
	cout<<sum;
	return 0;
}
