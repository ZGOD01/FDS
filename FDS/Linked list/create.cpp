#include<bits/stdc++.h>

using namespace std;

struct node{
	int data;
	node*next;

	node(int d=0){
		data=d;
		next=NULL;

	}

};

int main(){

	node*head=new node(10);
	head->next=new node(20);
	head->next=new node(50);

	
	return 0;
}