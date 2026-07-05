#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
int dx[]={-1,0,1,0},dy[]={0,1,0,-1};
unordered_map<string,int> d;
queue<string> q;

int bfs(string strat){
	string end="123804765";
	q.push(strat);
	d[strat]=0;
	while(q.size()){
		auto s=q.front();
		q.pop();
		if(s==end){
			return d[s];
		}
		int k=s.find('0');
		int x=k/3;
		int y=k%3;
		for(int i=0;i<4;i++){
			int a=x+dx[i];
			int b=y+dy[i];
			if(a<0 || a>=3 || b<0 || b>=3){
				continue;
			}
			int distance=d[s];
			swap(s[k],s[3*a+b]);
			if(!d.count(s)){
				d[s]=distance+1;
				q.push(s);
			}
			swap(s[k],s[3*a+b]);
		}
	}
	return -1;
}
int main(){
	string strat;
	for(int i=0;i<9;i++){
		char ch;
		cin>>ch;
		strat+=ch;
	}
	cout<<bfs(strat)<<endl;
	return 0;
}
