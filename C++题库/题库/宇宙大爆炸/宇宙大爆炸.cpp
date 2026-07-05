#include<bits/stdc++.h>
using namespace std;
int n;
int main(){
	cin>>n;
	int sum=n*2-1;
	for(int i=0;i<sum;i++){
		for(int j=0;j<sum;j++)cout<<"*";
		cout<<endl;
	}
	return 0;
}
//n*2-1
