#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node*next;
    node*head;

    node(int d){
        data=d;
        next=NULL;
    }
};

void traversing(node*head){

    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<< endl;
}

int main(){

    node*head=new node(10);
    head->next=new node(20);
    head->next->next=new node(50);

    traversing(head);
    
    return 0;
}