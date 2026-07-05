#include<bits/stdc++.h>
#include "CPU.h"
using namespace std;

CPU::CPU(const char *brand,const char *version){
	this->brand = brand;
	this->version = version;
	cout<<__FUNCTION__<<endl;
}
CPU::~CPU(){
	cout<<__FUNCTION__<<endl;
}

int main(){
	CPU c=CPU("intel","i9");
}
