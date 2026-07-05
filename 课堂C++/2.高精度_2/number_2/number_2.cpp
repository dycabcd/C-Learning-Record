#include<bits/stdc++.h>
using namespace std;
/*全局变量*/

/*结构体*/


/*函数*/
int num_plus(int a[],int b[]){
	int i,k;
	k=a[0]>b[0]?a[0]:b[0];
	for(i=1;i<=k;i++){
		a[i+1]+=(a[i]+b[i])/10;
		a[i]=(a[i]+b[i])%10;
	}
	if(a[k+1]>0) a[0]=k+1;
	else a[0]=k;
	return 0;
}
/*调用函数*/
void fun_1(){
	int a[9] = {1,2,3,4,5,6,7,8,9};
	cout<<a[8]<<endl;
	memset(a,0,sizeof(a));
	cout<<a[8];
	system("pause");
}
void fun_2(){
	int n;
	cin>>n;
	int a[n+1];
	string s1;
	cin>>s1;
	memset(a,0,sizeof(a));
	a[0]=s1.length();
	for(int i=1;i<=a[0];i++) a[i]=s1[a[0]-i]-'0';
	cin.clear();
	for(int i=1;i<=a[0];i++) cout<<a[i]<<" ";
}
void fun_3(){
	int a[20]={10,1,2,3,4,5,6,7,8,9,1};
	int b[20]={10,1,2,3,4,5,6,7,8,9,1};
	num_plus(a,b);
	for(int i=1;i<20;i++){
		if(a[i]!=0) cout<<a[i]<<" ";
	}
}
/*主函数*/ int main(){
	freopen("number_2.in","r",stdin);
	freopen("number_2.out","w",stdout);
	
	//fun_1();
	//fun_2();//10\n abcdefj
	//fun_3();
	return 0;
}
