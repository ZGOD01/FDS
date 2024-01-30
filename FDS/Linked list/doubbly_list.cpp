#include<bits/stdc++.h>

using namespace std;


struct node{
    struct node*prev ;
    int data;
    struct node*next;

    
};


int main(){
    struct node*head=(struct  node*)malloc(sizeof(struct node));
    head->prev=NULL;
    head->data=12;
    head->next=NULL;
    return 0;
}