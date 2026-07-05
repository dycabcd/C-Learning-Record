#include<bits/stdc++.h>
#include<fstream>
using namespace std;
/*常量*/

/*结构体*/

/*类*/

/*全局变量*/

/*函数*/

/*调用函数*/
void fun_1(){
	cout<<endl;
	ofstream ofs;//输入文件流
	ofs.open("C://Users//Administrator//Desktop//abc.txt",ios::out);
	ofs<<"你好"<<endl;
	ofs<<"我是"<<endl;
	ofs<<"外星人"<<endl;
	ofs.close();//关闭文件
	
	ifstream ifs;//输入文件流
	ifs.open("C://Users//Administrator//Desktop//abc.txt",ios::in);
	char chr[1024];
	while(ifs >> chr){
		cout<<chr<<endl;
	}
	ifs.close();//关闭文件
	
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
