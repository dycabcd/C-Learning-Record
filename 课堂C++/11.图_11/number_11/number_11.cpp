#include<bits/stdc++.h>
using namespace std;
/*常量*/

/*结构体*/
struct Node{
	int val;
	Node(int x):val(x){}//构造函数
};
typedef struct Node N;
N A=N(1);
N B=N(2);
N C=N(3);
N D=N(4);
/*类*/

/*全局变量*/

/*函数*/

/*调用函数*/
void fun_1(){
	cout<<endl;
	
	int a[4][4] = {0};
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			if(!(i==j)){
				a[i][j]=1;
			}
		}
	}
	
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	
	A.val = 100;
	B.val = 200;
	C.val = 400;
	D.val = 800;
	
	char b[12][2];
	char c='B';
	for(int i=0;i<3;i++){
		b[i][0] = 'A';
		b[i][1] = c;
		c++;
	}
	
	b[3][0] = 'B';
	b[3][1] = 'A';
	
	b[4][0] = 'B';
	b[4][1] = 'C';
	
	b[5][0] = 'B';
	b[5][1] = 'D';
	
	
	b[6][0] = 'C';
	b[6][1] = 'B';
	
	b[7][0] = 'C';
	b[7][1] = 'A';
	
	b[8][0] = 'C';
	b[8][1] = 'D';
	
	
	b[9][0] = 'D';
	b[9][1] = 'A';
	
	b[10][0] = 'D';
	b[10][1] = 'B';
	
	b[11][0] = 'D';
	b[11][1] = 'C';
	for(int i=0;i<=11;i++){
		cout<<b[i][0]<<" "<<b[i][1]<<endl;
		if(b[1][0]=='A' || b[1][0]=='B' || b[1][0]=='C' || b[1][0]=='D') cout<<endl;
	}
	
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
