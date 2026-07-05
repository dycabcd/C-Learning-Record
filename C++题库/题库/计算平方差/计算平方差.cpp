#include<bits/stdc++.h>
using namespace std;
int n;
bool arr[300];
int tmp(int x){
	int a,b,c;
	a=x%10;
	x=x/10;
	b=x%10;
	x=x/10;
	c=x%10;
	x=x/10;
	if(a==b || b==c || a==c) return 1;
	return 0;
}
int main(){
	cin>>n;
	for(float i=100;i<=300;i++){
		if((sqrt(i)-sqrt(int(i))==0)&&tmp(i)==1){
			arr[i]==1;
		}	
		else{
			arr[i]==0;
		}
	}
	for()
	return 0;
}
