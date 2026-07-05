#include<bits/stdc++.h>
using namespace std;
void com(int n,int r,int *a,int *b,int B){
	int i,j,sum=0;
	static int cnt=0;//记录种类
	if(r!=0){
		for(j=n;j>=r;j--){
			b[r-1]=j-1;
			com(j-1,r-1,a,b,B);
		}
	}
	else{
		i=0,sum=0;
		for(i=0;i<B;i++){
			sum+=a[b[i]];
			printf("%d  ",a[b[i]]);
		}
		cnt++;
		printf("sum=%d , cnt=%d\n",sum,cnt);
	}
}
void fun1(){
	int a[]={1,2,3,4,5,6};
	int b[2];
	com(sizeof(a)/sizeof(a[0]),2,a,b,2);
}
int main(){
	fun1();
	cout<<endl;
	return 0;
}
