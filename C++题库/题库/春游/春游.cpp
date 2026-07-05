#include<bits/stdc++.h>
using namespace std;
int N,M;
int main(){
	cin>>N>>M;
	int name[M];
	for(int i=0;i<M;i++) cin>>name[i];
	for(int i=0;i<M;i++){
		for(int j=i+1;j<M;j++){
			if(name[i]==name[j]){
				name[j]=-1;
			}
		}
	}
	int k1=0;
	int arr[1005];
	for(int i=0;i<M;i++){
		if(name[i]!=-1){
			arr[k1]=name[i];
			k1++;
		}
	}
	int brr[N],crr[N];
	for(int i=0;i<N;i++) brr[i]=i;
	sort(arr,arr+k1);
	bool s=true;
	for(int i=0,k=0;i<N;i++){
		if(arr[i]!=brr[i]){
			crr[k]=brr[i];
			k++;
			s=false;
		}
	}
	sort(crr,crr+k1);
	if(s==true) cout<<N;
	else{
		for(int i=0;i<k1-1;i++) cout<<crr[i]<<" ";
	}
	return 0;
}
