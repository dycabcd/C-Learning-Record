#include<bits/stdc++.h>
using namespace std;
float K,F,C;
int  main(){
	cin>>K;
	C = K-273.15;
	F = C*1.8+32;
	if(F > 212) cout<<"Ì«ÈÈÁË";
	else{
		printf("%.2f",C);
		printf("%.2f",F);
	}
	return 0;
} 
