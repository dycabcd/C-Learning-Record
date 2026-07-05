#include<bits/stdc++.h>
using namespace std;
/*常量*/
const int N=100;
/*结构体*/
typedef struct graph *G;
struct graph{
	int vertex[N];
	int weight[N][N]={0};
};
/*类*/

/*全局变量*/

/*函数*/
void Cg(G g,int v1,int v2){
	int t;
	for(int i=1;i<=v1;i++){
		cin >> t;
		g->vertex[i] = t;
	}
	int vex1,vex2;
	double w;
	cout <<"输入"<<endl;
	for(int k=1;k<=v2;k++){
		cin >> vex1 >> vex2>>w;
		g->weight[vex1][vex2] = w;
	}
}
int visitl [N+1];
void BFS(G g,int k){
	deque<int> q;
	cout<<k;
	visitl[k]=1;
	q.push_back(k);
	while(!q.empty()){
		int i=q.front();
		q.pop_front();
		for(int j=i;j<=N;++j){
			if((g->weight[i][j]==1) && (visitl[j]==0)){
				cout<<" "<<g->vertex[j];
				visitl[j]=1;
				q.push_back(j);
			}
		}
	}
}
/*调用函数*/
void fun_1(){
	cout<<endl;
	
	cout<<"输入顶点数&有效边数"<<endl;
	int v,e;
	cin>>v>>e;
	G g=new graph();
	Cg(g,v,e);
	cout<<endl;
	cout<<"BFS:";
	BFS(g,1);
	delete g;
	cout<<endl;
}
void fun(){
	system("pause");
	fun_1();
	
	system("pause");
}
/*主函数*/ int main(){
	//freopen("number_12.in","r",stdin);
	//freopen("number_12.out","w",stdout);
	
	fun();
	return 0;
}
//fun_1输入:
/*
10 10
1 2 3 4 5 6 7 8 9 10
1 2 1
2 3 1
3 4 1
4 5 1
5 6 1
6 7 1
7 8 1
8 9 1
9 10 1
10 1 1
*/
//fun_1输出:
/*
1 2 3 4 5 6 7 8 9 10
*/
//fun_1输入:
/*
100 100
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 56 57 58 59 60 61 62 63 64 65 66 67 68 69 70 71 72 73 74 75 76 77 78 79 80 81 82 83 84 85 86 87 88 89 90 91 92 93 94 95 96 97 98 99 100
1 2 1
2 3 1
3 4 1
4 5 1
5 6 1
6 7 1
7 8 1
8 9 1
9 10 1
10 11 1
11 12 1
12 13 1
13 14 1
14 15 1
15 16 1
16 17 1
17 18 1
18 19 1
19 20 1
20 21 1
21 22 1
22 23 1
23 24 1
24 25 1
25 26 1
26 27 1
27 28 1
28 29 1
29 30 1
30 31 1
31 32 1
32 33 1
33 34 1
34 35 1
35 36 1
36 37 1
37 38 1
38 39 1
39 40 1
40 41 1
41 42 1
42 43 1
43 44 1
44 45 1
45 46 1
46 47 1
47 48 1
48 49 1
49 50 1
50 51 1
51 52 1
52 53 1
53 54 1
54 55 1
55 56 1
56 57 1
57 58 1
58 59 1
59 60 1
60 61 1
61 62 1
62 63 1
63 64 1
64 65 1
65 66 1
66 67 1
67 68 1
68 69 1
69 70 1
70 71 1
71 72 1
72 73 1
73 74 1
74 75 1
75 76 1
76 77 1
77 78 1
78 79 1
79 80 1
80 81 1
81 82 1
82 83 1
83 84 1
84 85 1
85 86 1
86 87 1
87 88 1
88 89 1
89 90 1
90 91 1
91 92 1
92 93 1
93 94 1
94 95 1
95 96 1
96 97 1
97 98 1
98 99 1
99 100 1
100 1 1
*/
