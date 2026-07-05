#include<bits/stdc++.h>
using namespace std;
string s;
int Maxl=0,Minl=0;
string Maxs,Mins;
int main(){
	getline(cin,s);
	int len=s.size();
	int l=0;
	for(int i=0;i<len;i++){
		l++;
		if(s[i]==' '||s[i]==','){
			if(l>Maxl){
				Maxl=l;
				
			}
			if(l<Minl) Minl=l;
		}
	}
}
//strlen 求长度
//getline 获取字符串(包含空格)   格式(cin,字符串)
