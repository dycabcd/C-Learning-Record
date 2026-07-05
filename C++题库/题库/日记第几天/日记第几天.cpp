#include<bits/stdc++.h>
using namespace std;
int years[13] = {29,31,28,31,30,31,30,31,31,30,31,30,31};
int year,mouth,day;
int sum=0;
int main(){
	cin >> year >> mouth >> day;
	if(!((year % 4 == 0 && year % 100 !=0) || year % 400 == 0)){
		for(int i = 1;i < mouth;i++) sum += years[i];
		sum += day;
	}
	else{
		for(int i = 1;i < mouth;i++){
			if(i == 2){
				sum+=years[0];
			}
			else{
				sum+=years[i];
			}
		}
		sum += day;
	}
	cout << sum;
	return 0;
}
