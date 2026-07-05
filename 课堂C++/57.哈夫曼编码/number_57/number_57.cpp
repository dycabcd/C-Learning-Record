#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;
typedef struct Node{
	char name[8];
	int weight;
	int left;
	int right;
	int parent;
}Node,*Huffman;
int n;
char leaf_name[5000][4];
int leaf_weight[5000];
char huf[5000][2][30];
int hu=0;
void Readweight();
void compare(Huffman ps,int n1,int *s1,int *s2);
void Create(Huffman ps);
void code_read();
void compress();
void decompress(Huffman ps);

int main(){
	Readweight();
	Huffman ps=(Huffman) malloc((2*n+1)*sizeof(Node));
	/*/Create(ps);
	code_read();
	compress();
	decompress(ps);
	free(ps);*/
	return 0;
}
void Readweight(){
	FILE *filel;
	filel=fopen("权重.txt","r");
	if(filel == NULL){
		printf("权重文件打开失败");
		exit(1); 
	}
	char line[50];
	while(fgets(line,sizeof(line),filel)!=NULL){
		n++;
		char *taken=strtok(line,":\n");
		strtok(leaf_name[n],taken);
		taken=strtok(NULL,":\n");
		leaf_weight[n]=atoi(taken);
	}
	fclose(filel);
	printf("权重文件读取成功\n");
}
