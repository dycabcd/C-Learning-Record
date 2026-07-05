#include<bits/stdc++.h>
using namespace std;
/*常量*/

/*结构体*/
struct tree{
	char E;
	int left;//左子树
	int right;//右子树
}T1[10],T2[10];
typedef struct tree t;
/*类*/

/*全局变量*/

/*函数*/
int bd(struct tree T[]){
	int N,root=-1;
	char cl,cr;
	cin>>N;
	if(N){
		vector<int> c(N,0);
		for(int i=0;i<N;i++){
			getchar();
			cin>>T[i].E>>cl>>cr;
		}
	}
	root = T[0].E;
	return root;
}
int Iso(int R1,int R2){
	if((R1==-1 && R2!=-1)||(R1!=-1 && R2==-1)) return 0;
	else if(T1[R1].E!=T2[R2].E) return 0;
	else return 1;
}
/*调用函数*/
void fun_1(){
	char r;
	r=bd(T1);
	cout<<"根结点:"<<r;
	
	cout<<endl;
}
void fun_2(){	
	int r1,r2;
	r1=bd(T1);
	r2=bd(T2);
	if(Iso(r1,r2)) cout<<"yes";
	else cout<<"no";
	
	cout<<endl;
}
void fun(){
	system("pause");
	fun_1();
	
	system("pause");
	system("pause");
	fun_2();
	
	system("pause");
}
/*主函数*/ int main(){
	//freopen(".in","r",stdin);
	//freopen(".out","w",stdout);
	
	fun();
	/*fun_1
	5
	A 1 2
	B 3 4
	C 5 6
	D 7 8
	E 9 10
	*/
	/*fun_2
	3
	A 1 2
	B 3 4
	C 5 6
	3
	A 1 2
	C 5 6
	B 3 4
	*/
	return 0;
}
