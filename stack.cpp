#include<bits/stdc++.h>
using namespace std;
struct node
{
	int val;
	node *next;
	node *pre;
	node() //constructor
	{
		val=0;
		next=NULL;
		pre=NULL;
	}
};
node *top,*bottom;
int sz=0;
void push(int value)
{
	node *temp=new node();
	temp->val=value;
	if(bottom==NULL){
		top=temp;
		bottom=temp;
	}
	else{
		top->next=temp;
		temp->pre=top;
		top=temp;
	}
	sz++;
}
void pop()
{
	if(top==NULL){ cout<<"UNDERFLOW!!"; return; }
	else{
		sz--;
		node *temp=top;
		top=top->pre;
		if(top==NULL){ return; }
		top->next=NULL;
		free(temp);
	}
}
int size()
{
	return sz;
}
int top_val()
{
	if(top==NULL){ cout<<"UNDERFLOW!!"; return 0; }
	return top->val;
}
int main(){
	top=NULL;
	bottom=NULL;
	int n;
	cin>>n;
	int x;
	for(int i=0;i<n;i++){
		cin>>x;
		push(x);
	}
	while(sz!=0){
		cout<<top_val()<<endl;
		cout<<"SIZE"<<" "<<size()<<endl;
		pop();
	}
}
