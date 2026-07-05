#include<bits/stdc++.h>
using namespace std;
/*常量*/

/*结构体*/
struct Node{ //结点类型
	
	int date;//存储数据
	Node *l;//左指针
	Node *r;//右指针
	Node(const int &date):date(date),l(NULL),r(NULL){}//初始化
};
typedef struct Node N;
/*类*/

/*全局变量*/

/*函数*/
N * Tree(int *arr,int size,int invaild,int index){
	N *root=NULL;
	if(index < size && arr[index] != invaild){
		root = new N(arr[index]);
		root->l = Tree(arr,size,invaild,++index);
		root->r = Tree(arr,size,invaild,++index);
	}
	return root;
}

void pos(Node* root){
	if(root){
		pos(root->l);
		pos(root->r);
		cout<<root->date<<"-";
	}
}
/*调用函数*/
void fun_1(){
	cout<<endl;
	
	int array[15] = {1,2,1,3,'#','#',4,5,'#',6,'#',7,'#','#',8};
	int index =0;
	Node * root =Tree(array,15,'#',index);
	pos(root);
	
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
