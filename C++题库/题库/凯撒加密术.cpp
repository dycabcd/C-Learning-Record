#include<bits/stdc++.h>
using namespace std;
string s;
int main(){
	getline(cin,s);
	int len=s.size();
	for(int i=0;i<len;i++){
		if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')){
			if(s[i]=='Z' || s[i]=='z'){
				s[i]-=25;
			}
			else{
				s[i]+=1;
			}
		}
	}
	cout<<s;
	return 0;
}
