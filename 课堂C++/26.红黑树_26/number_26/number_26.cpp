#include<bits/stdc++.h>
using namespace std;
#define red 0
#define black 1
typedef char D;
typedef struct node{
	D date;//所有数据
	int color;//颜色
	int key;//键值(用于排序)
	struct node *par;//父节点指针
	struct node *l,*r;//左右子节点指针
};
typedef struct tree{
	node * root;//根节点指针
	node * nil;//叶子节点指针
};
void n(node a,D b,int c,int d,node e,node f,node g){
	a.date=b;
	a.color=c;
	a.key=d;
	a.par=&e;
	a.l=&f;
	a.r=&g;
}
int main(){
	node root,a,b,c,d,e,f;
	n(root,100,1,1,root,a,b);
	n(a,200,0,2,root,c,d);
	n(b,300,1,3,root,e,f);
	cout<<root.date<<" "<<root.color<<" "<<&root.par<<endl;
	cout<<a.date<<" "<<a.color<<" "<<&a.par<<endl;
	cout<<f.date<<" "<<f.color<<" "<<&f.par<<endl;
	return 0;
}
