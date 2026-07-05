#include<bits/stdc++.h>
using namespace std;
char a[15][15];
bool b[15][15];
bool t = false;
int n,m;
void dfs(int x,int y){
	if(a[x][y] == 'T'){
		t = true;
		return;
	}
	if(x >= 1 && (a[x - 1][y] == '.' || a[x - 1][y] == 'T') && b[x - 1][y] != true){
		b[x][y] = true;
		dfs(x - 1,y);
		b[x][y] = false;
	}
	if(x <= n && (a[x + 1][y] == '.' || a[x + 1][y] == 'T') && b[x + 1][y] != true){
		b[x][y] = true;
		dfs(x + 1,y);
		b[x][y] = false;
	}
	if(y >= 1 && (a[x][y - 1] == '.' || a[x][y - 1] == 'T') && b[x][y - 1] != true){
		b[x][y] = true;
		dfs(x,y - 1);
		b[x][y] = false;
	}
	if(y <= n && (a[x][y + 1] == '.' || a[x][y + 1] == 'T') && b[x][y + 1] != true){
		b[x][y] = true;
		dfs(x,y + 1);
		b[x][y] = false;
	}
}
int main(){
	cout << "行: ";
	cin >> n;
	cout << endl;
	cout << "列: ";
	cin >> m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin >> a[i][j];
		}
	}
	dfs(1,1);
	if(t) cout<<"找到通路了";
	else cout<<"没有找到";
	return 0;
}
