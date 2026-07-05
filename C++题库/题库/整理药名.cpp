#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	string s[n];
	for(int i=0;i<n;i++) cin>>s[i];
	for(int i=0;i<n;i++){
		string k=s[i];
		if(k[0]>='a' && k[0]<='z') k[0]-=32;
		for(int j=0;j<k.size();j++){
			if(k[i]>='A' && k[i]<='Z')
			k[j]+=32;
		}
		cout<<k<<endl;
	}
	return 0;
}
