#include<bits/stdc++.h>

using namespace std;


struct node{
    struct node*prev ;
    int data;
    struct node*next;
};

struct node* addtoEmpty(struct node*head , int data){
    struct node*temp=(struct  node*)malloc(sizeof(struct node));
    temp->prev=NULL;
    temp->data=data;
    temp->next=NULL;
    head=temp;
    return head;
};


int main(){
    struct node*head=NULL;
    head=addtoEmpty(head,45);
    cout<<head->data;
    return 0;
}