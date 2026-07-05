#include<bits/stdc++.h>
using namespace std;

int main(){
	int arr[5] = {1,3,5,7,9};
	for(int j=5;j>0;j--){
		for(int i=0;i<j;i++){
			for(int k=i;k<j;k++)
				cout<<arr[k];
			cout<<" ";
		}
	} 
	return 0;
}
