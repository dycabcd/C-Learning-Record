#include<bits/stdc++.h>
using namespace std;
int a[10],b[10],day,dey,xay;
int main(){
	for(int i=0;i<10;i++) cin>>a[i];
	for(int i=0;i<10;i++) cin>>b[i];
	for(int i=0;i<10;i++){
		if(a[i]>b[i]) day++;
		else if(a[i]<b[i]) xay++;
		else dey++;
	}
	cout<<day<<" "<<dey<<" "<<xay<<endl;
	if(day>xay && day>dey) cout<<"b";
	else cout<<"a";
	return 0;
}
