#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 +10;
typedef pair<int,int> PII;
int n; 
vector<PII> a;
vector<PII> ans ; 
int main() 
{
    cin>>n; 
    for(int i = 0;i<n;i++) 
    {
        int x,y; 
        cin>>x>>y;  
        a.push_back({x,y});
    }
    sort(a.begin(),a.end()); 
    int st = -1e9-1,ed = -1e9-1;    //st,ed要比最小值小，否则可能会出现错误
    for(int i = 0;i<n;i++){
		if(ed < a[i].first){
			if(st != -1e9-1){
				ans.push_back({st,ed});
			}
			st = a[i].first;ed = a[i].second;
		}
		else
		ed = max(ed,a[i].second);
	}
	if(st != -1e9-1) ans.push_back({st,ed});
	cout<<ans.size()<<endl;
	return 0;
}//
