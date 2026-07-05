#include<bits/stdc++.h>
using namespace std;
/*常量*/

/*结构体*/

/*类*/
int arr[] = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
/*全局变量*/

/*函数*/
int find(int x){
	int root = x;
	while(arr[root] >= 0){
		root = arr[x];
	}
	return root;
}
bool insert(int x1,int x2){
	if(find(x1) == find(x2)) return true;
	else return false;
}
/*调用函数*/
void fun_1(){

	//第一组
	arr[0] = -4;
	arr[6] = 0;
	arr[7] = 0;
	arr[8] = 0;

	//第二组
	arr[1] = -3;
	arr[4] = 1;
	arr[9] = 1;

	//第三组
	arr[2] = -3;
	arr[3] = 2;
	arr[5] = 2;
	
	arr[0] = -7;
	arr[1] = 0;
	
	cout<<find(6)<<" "<<insert(6,3);

	cout << endl;
}
void fun() {
	system("pause");
	fun_1();

	system("pause");
}
/*主函数*/ int main() {
	//freopen(".in","r",stdin);
	//freopen(".out","w",stdout);

	fun();
	return 0;
}
