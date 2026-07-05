#include<bits/stdc++.h>
using namespace std;
typedef struct BiNode{
	int data;
	struct BiNode *lchild,*rchild;
}BiNode,*Bitree;
typedef struct BiNode B;
void visit(B *Node){ //访问节点
	printf("%d",Node->data);
}
void Pre(B *T){
	if(T != NULL){
		visit(T);
		Pre(T->lchild);
		Pre(T->rchild);
	}
}
void sc(int a,B *n,B *left,B *right){
	n->data=a;
	n->lchild=left;
	n->rchild=right;
}
int main(){
	int pre[]={1,2,4,7,3,5,6,8};
	B *n1,*n2,*n3,*n4,*n5,*n6,*n7,*n8;
	sc(1,n1,n2,n3);
	sc(2,n2,n4,n5);
	sc(3,n3,n6,n7);
	sc(4,n4,n8,NULL);
	sc(5,n5,NULL,NULL);
	sc(6,n6,NULL,NULL);
	sc(7,n7,NULL,NULL);
	sc(8,n8,NULL,NULL);
	Pre(n1);
	Pre(n2);
	Pre(n3);
	Pre(n4);
	Pre(n5);
	Pre(n6);
	Pre(n7);
	Pre(n8);
	return 0;
}
