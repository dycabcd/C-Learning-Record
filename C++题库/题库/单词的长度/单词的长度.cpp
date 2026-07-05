#include<bits/stdc++.h>
using namespace std;
char c[1001];
int n,s;
int main(){
	gets(c);
	n=strlen(c);
	for(int i=0;i<n;i++){
		if(c[i]==' '){
			if(s>=0){
				printf("%d,",s);
				s=0;
			}
		}
		else s++;
	}
	return 0;
}
