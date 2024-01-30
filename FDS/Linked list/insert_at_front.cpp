#include<bits/stdc++.h>

using namespace std;

struct node {
    int data;
    node* next;

    node(int d = 0) {
        data = d;
        next = NULL;
    }
};

void traverse(node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
}

node* insert_at_front(node* head, int data) {
    node* newnode = new node(data);
    newnode->next = head;
    return newnode;
}

int main() {
    node* head = new node(10);
    head->next = new node(20);
    head->next->next = new node(50);

    cout << "Original linked list : ";
    traverse(head);

    cout << endl;

    int newData = 60;
    cout << "After insertion at front : ";
    head = insert_at_front(head, newData);
    traverse(head);

    return 0;
}
