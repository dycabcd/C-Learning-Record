#include<bits/stdc++.h>
using namespace std;
vector<int> v(10);
int n;
int main(){
	cin>>n;
	for(int i=0;i<n;i++) cin>>v[i];
	float a=0,b=0,c=0,d=0;
	for(int i=0;i<n;i++){
		if(0<=v[i] && v[i]<=18) a++;
		if(19<=v[i] && v[i]<=35) b++;
		if(36<=v[i] && v[i]<=60) c++;
		if(v[i]>=61) d++;
	}
	float a1,b1,c1,d1;
	a1=(a/n)*100;
	b1=(b/n)*100;
	c1=(c/n)*100;
	d1=(d/n)*100;
	printf("%.2f",a1);
	cout<<"%"<<endl;
	printf("%.2f",b1);
	cout<<"%"<<endl;
	printf("%.2f",c1);
	cout<<"%"<<endl;
	printf("%.2f",d1);
	cout<<"%"<<endl;
	return 0;
}
