#include<bits/stdc++.h>
using namespace std;
int year[13]={29,31,28,31,30,31,30,31,31,30,31,30,31};
int y78(int x){
	if((x%4==0)||(x%100==0 && x%400==0)) return 1;
	else return 0;
}
int main(){
	int y,m;
	cin>>y>>m;
	if(y78(y)==1 && m==2) cout<<year[0];
	else{
		cout<<year[m];
	}
	return 0;
}
