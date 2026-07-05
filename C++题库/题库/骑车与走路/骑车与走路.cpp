#include<bits/stdc++.h>
using namespace std;
float b,w;
int n;
int main(){
	cin>>n;
	b=n/3+27+23;
	w=n/1.2;
	if(b<w) cout<<"bike";
	else if(w<b) cout<<"walk";
	else cout<<"all";
	return 0;
}
