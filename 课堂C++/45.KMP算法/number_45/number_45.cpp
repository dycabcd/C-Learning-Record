#include<bits/stdc++.h>
using namespace std;
struct SString{
	char ch[10+1];
	int length;
};
bool InitString(SString& s){
	s.length=0;
	s.ch[0]='#';
	return 0;
}
bool StrAssign(SString& s,char ch[]){
	int len = strlen(ch);
	int Slen = s.length;
	if(Slen + len > 10) return false;
	for(int i = Slen + 1;i < Slen + len + 1;i++){
		s.ch[i]=ch[i-Slen-1];
		s.length++;
	}
	return true;
}

int* get_next(SString T){
	int len=T.length;
	int* next=new int[len+1];
	next[1]=0;
	next[2]=1;
	for(int j=3;j<=len;j++){
		int k=next[j-1];
		while(k!=0){
			if(T.ch[k]==T.ch[j-1]){
				next[j]=k+1;
				break;
			}
			else {
				k=next[k];
			}
		}
		if(k==0){
			next[j]=1;
		}
	}
	return next;
}
int Index_KMP(SString& s,SString T,int next[]){
	int i=1,j=0;
	while(i<=s.length && j<=T.length){
		if(j==0 || s.ch[i] == T.ch[j]){
			i++;
			j++;
		}
		else{
			j = next[j];
		}
	}
	if(j>T.length) return i-T.length;
	else return 0;
}
int main(){
	SString T;
	InitString(T);
	char ch[]="abcabcd";
	StrAssign(T,ch);
	int* next=get_next(T);
	for(int i=1;i<=T.length;i++) cout<<next[i]<<endl;
	SString s;
	system("pause");
	return 0;
}
