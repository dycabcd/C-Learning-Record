#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cout<<"ÇëÊäÈëÒ»¸ö×Ö·û´®:";
	cin>>s;
	int n = s.size();
	for(int i=0;i<n;i++) cout<<s[i]<<endl;
	for(int i=0;i<n-1;i++) cout<<s[i]<<s[i+1]<<endl;
	for(int i=0;i<n-2;i++) cout<<s[i]<<s[i+1]<<s[i+2]<<endl;  
	return 0;
}
