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
        head =head->next;
    }
    cout<<endl;

}

void insert_at_end(int data,node*head){
    node*newnode=new node(data);
    node*ptr=head;

    while(ptr->next!=NULL){
        ptr=ptr->next;
    }
    ptr->next=newnode;
    newnode->next=NULL;

    cout<<"After inserting : ";
    traversing(head);
}

int main(){

    node*head=new node(10);
    head->next=new node(20);
    head->next->next=new node(50);

    cout<<"Original linked list : ";
    traversing(head);

     
    int newData(100);
    insert_at_end(newData,head);

    return 0;
}