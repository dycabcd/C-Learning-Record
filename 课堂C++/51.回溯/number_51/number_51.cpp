#include<bits/stdc++.h>
#define N 100
using namespace std;
int sum=0;     
void print(char bord[N][N],int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(bord[i][j]=='Q') printf("  Q");
			else printf("  *");
		}
		printf("\n");
	}	
}
bool isselect(char bord[N][N],int row,int colum,int n){
	for(int j=0;j<row;j++){
		if(bord[j][colum]=='Q'){
			return false;
		}
	}
	
	for(int i=row,j=colum;i>=0&&j>=0;i--,j--){
		if(bord[i][j]=='Q'){
			return false;
		}
	}
	
	for(int i=row,j=colum;i>=0&&j<n;i--,j++){
		if(bord[i][j]=='Q'){
			return false;
		}
	}
	return true;
}
void Backtrack(char bord[N][N],int n,int row){
	if(row>=n){
		print(bord,n);
		sum++;
		printf("\n");
		return ;
	}else{
		for(int colum;colum<n;colum++){
			if(isselect(bord,row,colum,n)){
				bord[row][colum]='Q';
				Backtrack(bord,n,row+1);
				bord[row][colum]='*';
			}
		}
	}
}
int main(){
	int n;
	printf("请输入皇后个数:\n");
	scanf("%d",&n);
	char bord[N][N]={'*'};
	printf("皇后摆放形式如下:\n");
	Backtrack(bord,n,0);
	printf("%d皇后问题共有%d种摆放方式",n,sum);
	return 0;
}
