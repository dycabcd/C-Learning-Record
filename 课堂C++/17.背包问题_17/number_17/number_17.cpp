#include<bits/stdc++.h>
using namespace std;
/*常量*/
const int N=1010;
/*结构体*/

/*类*/

/*全局变量*/
int n,m,v[N],w[N],f[N][N];
/*函数*/

/*调用函数*/
void fun_1(){
	cout<<endl;
	
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>v[i]>>w[i];
	for(int i=1;i<=n;i++){
		for(int j=0;j<=0;j++){
			f[i][j]=f[i-1][j];
			if(j>=v[i]) f[i][j]=max(f[i][j],f[i-1][j-v[i]]+w[i]);
		}
	}
	cout<<f[n][m];
	
	cout<<endl;
}
void fun(){
	system("pause");
	fun_1();
	
	system("pause");
}
/*主函数*/ int main(){
	//freopen(".in","r",stdin);
	//freopen(".out","w",stdout);
	
	fun();
	return 0;
}
