#include<bits/stdc++.h>
using namespace std;
/*全局变量*/

/*结构体*/

/*函数*/
int s1(int a[],int v,int n){
	for(int i=0;i<n;i++){
		if(a[i]==v) return i+1;
	}
	return -1;
}
int s2(int a[],int v,int min,int max){
	int mid=min+(v-a[min])/(a[max]-a[min])*(max-min);
	if(a[mid]==v) return mid+1;
	if(a[mid]>v) return s2(a,v,min,mid-1);
	if(a[mid]<v) return s2(a,v,mid+1,max);
}
/*调用函数*/
void fun_1(){
	int a[]={1,2,3,4,5,6,7};
	cout<<s1(a,5,7); 
}
void fun_2(){
	int a[]={1,2,3,4,5,6,7,8,9};
	cout<<s2(a,4,0,8);
}
void fun_3(){
	int n;
	double sum=0;
	cin>>n;
	for(int i=0,x;i<n;i++){
		cin>>x;
		sum+=x;
	}
	sum=sum/n;
	//sum=round(sum*1000)/1000;
	printf("%.2lf",sum);
}
void fun_4(){
	int m,n;
	cin>>m>>n;
	int a[m]; 
	for(int i=0;i<m;i++){
		cin>>a[i];
	}
	int sum=0,j=0;
	for(int i=1;i<m;i++){
		if(a[j]>=i) sum+=i;
		if(a[j]==m-1) continue;
	}
	cout<<sum;
}
/*主函数*/int main(){
	//freopen("number_1.in","r",stdin);
	//freopen("number_1.out","w",stdout);
	
	//fun_1();
	//fun_2();
	//fun_3();
	//fun_4();
	return 0;
}
