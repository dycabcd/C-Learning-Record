#include<bits/stdc++.h>
using namespace std;
/*常量*/
const int MAX=101;
/*结构体*/

/*类*/

/*全局变量*/
int D[MAX][MAX];
int maxSum[MAX][MAX];
int n;
/*函数*/
int maxsum(int i,int j){
	if(maxSum[i][j]!=-1)
		return maxSum[i][j];
	if(i==n)
		maxSum[i][j]=D[i][i];
	else{
		int x=maxsum(i+1,j);
		int y=maxsum(i+1,j+1);
		maxSum[i][j]=max(x,y)+D[i][j];
	}
	return maxSum[i][j];
}
/*调用函数*/
void fun_1(){
	cout<<endl;
	
	int i,j;
	cin>>n;
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			cin>>D[i][j];
		}
	}
	cout<<maxsum(1,1)<<endl;
	
	cout<<endl;
}
void fun_2(){
	int D[MAX][MAX];
	int n;
	int *MaxSum;
	int i,j;
	cin>>n;
	for(i=1;i<=n;i++){
		for(j=1;j<=i;++j){
			MaxSum[j]=max(MaxSum[j],MaxSum[j+1]) + D[i][j];
		}
	}
	cout<<MaxSum[i]<<endl;
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
