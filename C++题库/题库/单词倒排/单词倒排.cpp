#include<bits/stdc++.h>
using namespace std;
string s;
int main()
{
	getline(cin,s);
	string n="";
	string m[10000];
	int k = 0;
	for(int i=0;i<s.size();i++){
		if(s[i]!=' '){
			n+=s[i];
			if(i==s.size()-1){
				m[k]=n;
				k++;
				n="";
			}
		}
		else{
			m[k]=n;
			k++;
			n="";
		}
	}
	for(int i=k-1;i>=0;i--){
		cout<<m[i]<<" ";
	}
	return 0;
}
