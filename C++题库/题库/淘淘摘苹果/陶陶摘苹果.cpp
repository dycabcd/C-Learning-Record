#include<bits/stdc++.h>
using namespace std;
int n;
int main(){
	int arr[10];
	for(int i=0;i<10;i++) cin>>arr[i];
	cin>>n;
	n+=30;
	int s=0;
	for(int i=0;i<10;i++){
		if(n>=arr[i]) s++;
	}
	cout<<s;
	return 0;
}
