#include<bits/stdc++.h>
using namespace std;
int t,n;
int sx,sy,fx,fy;
struct node{
	int x;
	int y;
	int dep;
}Node;
int dx[]={1,1,2,2,-1,-1,-2,-2};
int dy[]={2,-2,1,-1,2,-2,1,-1};
bool vis[305][305];
int sum=0x3f3f3f;
queue<node> q;
void bfs(){
	while(!q.empty()){
		auto tmp=q.front();
		q.pop();
		if(tmp.x==fx&&tmp.y==fy){
			sum=min(sum,tmp.dep);
			return;
		}
		for(int i=0;i<8;i++){
			Node.x=tmp.x+dx[i];
			Node.y=tmp.y+dy[i];
			if(Node.x<0 || Node.y<0 || Node.x>=n || Node.y>=0){
				continue;
			}
			if(vis[Node.x][Node.y]==1){
				continue;
			}
			Node.dep=tmp.dep+1;
			vis[Node.x][Node.y]=1;
			q.push(Node);
		}
	}
	
}
int main(){
	cin>>t;
	while(t--){
		memset(vis,false,sizeof(vis));
		sum=0x3f3f3f;
		cin>>n>>sx>>sy>>fx>>fy;
		vis[sx][sy]=1;
		while(!q.empty()){
			q.pop();
		}
		q.push(node{sx,sy,0});
		bfs();
		cout<<sum<<endl;
	}
	return 0;
}
