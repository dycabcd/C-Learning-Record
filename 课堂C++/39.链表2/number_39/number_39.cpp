#include<bits/stdc++.h>
using namespace std;
struct ListNode{
	int val;
	ListNode *next;
	ListNode (int x):val(x),next(NULL){}
	ListNode (int x,ListNode *next):val(x),next(NULL){}
};
typedef struct ListNode L;
void add(L *f,L *s){
	f->val=10;
	f->next=s;
}
class Solu{
	public:
		L* re(L* head,int val){
			while(head != nullptr && head->val==val){
				L* temp=head;
				head=head->next;
				delete temp;
			}
			L* curr=head;
			while(curr!=NULL && curr->next!=NULL){
				if(curr->next->val==val){
					L* temp=curr->next;
					curr->next=curr->next->next;
					delete temp;
				}
				else curr=curr->next;
			}
			return head;
		}
};
int main(){
	L *head=new L(10);
	head->val=100;
	int a,b,c,d,e,f,g;
	L *N1=new L(20);
	head->next=N1;
	cout<<head->val;
	cout<<&head <<" "<<&N1;
	L *N2=new L(30);
	L *N3=new L(30);
	L *N4=new L(30);
	add(N1,N2);
	add(N2,N3);
	add(N3,N4);
	cout<<&N1<<" "<<&N2<<" "<<&N3<<" "<<endl;d
	return 0;
}
