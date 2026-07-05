#include<bits/stdc++.h>
using namespace std;
int l(int x){
	int len=0;
	while(x!=0){
		len++;
		x/=10;
	}
	return len;
}
int a(int x){ //个位
	return x%10;
}
int b(int x){ //十位
	return x/10%10;
}
int c(int x){ //百位
	return x/100%10;
}
int main(){
	int m,n;
	cin>>m>>n;
	cout<<m<<endl;
	cout<<n<<endl;
	int arr[4],sum=0;
	for(int i=0;i<l(n);i++){
		if(i==0) arr[i]=a(n);
		else if(i==1) arr[i]=b(n);
		else if(i==2) arr[i]=c(n);
		else if(i==3) arr[i]=1;
	}
	for(int i=0,j=1;i<l(n);i++,j*=10){
		sum+=m*arr[i]*j;
		cout<<m*arr[i]<<endl;
	}
	cout<<sum;
	return  0;
}
