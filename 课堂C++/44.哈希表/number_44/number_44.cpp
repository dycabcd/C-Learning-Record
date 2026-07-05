#include<bits/stdc++.h>
using namespace std;
enum State{
	A,
	B,
	C
};
int main(){
	int n;
	int a=10,b=100,c=1000;
	vector<int>v1,v2,v3;
	for(int i=0;i<10;i++){
		cin>>n;
		if(n>=0 && n<=a){
			cout<<"第一类数据:"<<n<<endl;
			v1.push_back(n);
		}
		if(n>a && n<=b){
			cout<<"第二类数据:"<<n<<endl;
			v2.push_back(n);
		}
		if(n>b && n<=c){
			cout<<"第三类数据:"<<n<<endl;
			v3.push_back(n);
		}
	}
	cout<<"第一类数据占比为"<<v1.size()/10.0*100<<"%"<<endl;
	cout<<"第二类数据占比为"<<v2.size()/10.0*100<<"%"<<endl;
	cout<<"第三类数据占比为"<<v3.size()/10.0*100<<"%"<<endl;
	
	for(int i=0;i<v1.size();i++){
		float t=v1[i];
		v1[i]+=i;
		if(v1[i]==t) cout<<"价格未变";
		if(v1[i]>t) cout<<"涨了,涨幅为:"<<(v1[i]-t)/float(t)*100<<"%"<<endl;
		if(v1[i]<t) cout<<"跌了,跌幅为:"<<(v1[i]-t)/float(t)*100<<"%"<<endl;
	}
	return 0;
}
