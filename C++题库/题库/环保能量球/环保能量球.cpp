#include<bits/stdc++.h>
using namespace std;
int t;
int main(){
	cin>>t;
	int arr[t][2],brr[t];
	for(int i = 0;i<t;i++){  
		for(int j=0;j<2;j++){
			cin>>arr[i][j];			//第一个是n,第二个是x 
		}
	}
	for(int i = 0;i<t;i++){
		brr[i] = arr[i][0]/arr[i][1];
		brr[i] += arr[i][0];
	} 
	for(int i = 0;i<t;i++) cout<< brr[i]<<endl;
	return 0;
}
