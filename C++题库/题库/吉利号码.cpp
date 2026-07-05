#include<bits/stdc++.h>
using namespace std;
int n,rmb=100,arr[4];
int tmp(int x){
	int l=0,i=0;
	while(x!=0){
		l=x%10;
		arr[i]=l;
		x=x/10;
		i++;
	}
	return 0;
}
bool a(){
	int brr[4];
	for(int i=0;i<4;i++){
		brr[i]=arr[i];
	}
	sort(0,brr[4]);
	int s=0;
	for(int i=0;i<4;i++){
		if(brr[i]==arr[i]) s++;
	}
	if(s==4){
		return true;
	}
	else{
		return false;
	}
}
int main(){
	cin>>n;
	tmp(n);
	for(int i=0;i<4;i++){
		if(arr[i]==8 ||arr[i]==6) rmb+=50;
	}
	if(a()==true) rmb=rmb*3;
	cout<<rmb;
	return 0;
}

