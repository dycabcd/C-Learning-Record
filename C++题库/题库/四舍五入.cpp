#include<bits/stdc++.h>
using namespace std;
int n;
int main(){
	cin>>n;
	int arr[n];
	for(int i = 0;i<n;i++){
		cin>>arr[i];
		if((arr[i]%10) > 0 && (arr[i]%10) < 4 ){
			arr[i] = arr[i] - (arr[i]%10);
		}
		else if((arr[i]%10) >= 5 && (arr[i]%10) <= 9 ){
			arr[i] = arr[i] - (arr[i]%10);
			arr[i] = arr[i] + 10;
		}
	}
	for(int i = 0;i<n;i++){
		cout<<arr[i]<<endl;
	}
	return 0;
}
