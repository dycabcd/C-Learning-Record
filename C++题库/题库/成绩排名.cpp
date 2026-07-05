#include<bits/stdc++.h>
using namespace std;
struct number{
	int Chinese;
	int maths;
	int English;
};
typedef struct number N;
int n;
int main(){
	cin>>n;
	N arr[n];
	int s1[n],s2[n],s3[n];
	for(int i=0;i<n;i++){
		cin>>arr[i].Chinese>>arr[i].maths>>arr[i].English;
		s1[i]=arr[i].Chinese+arr[i].maths+arr[i].English;
		s2[i]=arr[i].Chinese+arr[i].maths;
		s3[i]=arr[i].Chinese>arr[i].maths?arr[i].Chinese:arr[i].maths;
	}
	for(int k=1;k<n;k++){
		int Max  =-1;
		int pm[n]={0};
		for(int i=0;i<n;i++){
			if(pm[i]!=k-1){
				if(s1[i]>Max) Max=s1[i];				
			}
		}
		for(int i=0;i<n;i++){
			if(s1[i]==Max) pm[i]=k;
			else pm[i]=n;
		}
	}
	return 0;
}
