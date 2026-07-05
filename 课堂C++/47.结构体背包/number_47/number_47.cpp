#include<bits/stdc++.h>
using namespace std;
struct bag{
	int weight;
	int value;
	float bi;
	float rate;
}bags[50];
bool compare(const bag &bag1,const bag &bag2){
	return bag1.bi>bag2.bi;
}
int main(){
	int sum=0,n;
	int j;
	float M;
	cout<<"输入背包容量和材料数量:"<<endl;
	cin>>M>>n;
	for(int i=0;i<n;i++){
		cin>>bags[i].weight>>bags[i].value;
		bags[i].bi=(float)bags[i].value/bags[i].weight;
		bags[i].rate=0;
	}
	sort(bags,bags+n,compare);
	for(j=0;j<n;j++){
		if(bags[j].weight<=M){
			bags[j].rate=1;
			sum+=bags[j].weight;
			M-=bags[j].weight;
			cout<<"重："<<bags[j].weight<<"价值："<<bags[j].value<<"的物品被放入了背包"<<endl;
			cout<<"放入比例："<<bags[j].rate<<endl;
		}
		else break;
	}
	if(j<n){
		bags[j].rate=M/bags[j].weight;
		sum+=bags[j].rate*bags[j].weight;
		cout<<"重："<<bags[j].weight<<"价值："<<bags[j].value<<"被放入了背包"<<endl;
		cout<<"放入比例："<<bags[j].rate<<endl;
	} 
	return 0;
}
