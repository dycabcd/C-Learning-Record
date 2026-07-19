#include<bits/stdc++.h>
using namespace std;
int w;
int M[13] = {29,31,28,31,30,31,30,31,31,30,31,30,31};
int main(){
	cin>>w;
	for(int i = 1;i<=12;i++){
		for(int j = 1;j<=M[i];j++){
			if(j == 13 && w == 5) cout<<i<<" ";
			if(w == 8) w = 1;
			w++; 
		}
	}
	return 0;
}
