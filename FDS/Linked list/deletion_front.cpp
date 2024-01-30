#include<bits/stdc++.h>
using namespace std;

struct node {
    int data;
    node *next;

    node(int d = 0) {
        data = d;
        next = NULL;
    }
};

void traverse(node *head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

node* del_first(node *head) {
    if (head == NULL) {
        cout << "List is already empty : ";
    } else {
        node *temp = head;
        head = head->next;
        free(temp);
    }
    return head;
}

int main() {
    node *head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);

    cout << "Original Linked list: ";
    traverse(head);

    head = del_first(head);

    cout << "Linked list after deleting the first node: ";
    traverse(head);

    return 0;

    
}
