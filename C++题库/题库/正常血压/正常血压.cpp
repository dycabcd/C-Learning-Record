#include<bits/stdc++.h>
using namespace std;
int n;
int main(){
	cin>>n;
	int s=0;
	for(int i=0,x,y;i<n;i++){
		cin>>x>>y;
		if((x>=90 && x<=140)&&(y>=60 && y<=90)) s++;
		else s=0;
	}
	cout<<s;
	return 0;
}
