#include<bits/stdc++.h>
using namespace std;
int y;
int year(int x){
	int o=0;
	while(x!=0){
		o+=x%10;
		x=x/10;
	}
	return o;
}
int main(){
	cin>>y;
	for(int i=y+1;;i++){
		if(year(i)==20){
			cout<<i;
			break;
		}
	}
	return 0;
}
