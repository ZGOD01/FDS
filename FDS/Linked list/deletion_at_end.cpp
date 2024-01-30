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

node* del_last(node *head) {
    if (head == NULL) {
        cout << "List is already empty : ";
    } else if (head->next == NULL) {
        free(head);
        head = NULL;
    } else {
        node *temp = head;
        node *temp2 = head;
        while (temp->next != NULL) {
            temp2 = temp;
            temp = temp->next;
        }
        temp2->next = NULL;
        free(temp);
        temp = NULL;
    }
    return head;
}

int main() {
    node *head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);

    cout << "Original Linked list: ";
    traverse(head);

    head = del_last(head);

    cout << "Linked list after deleting the last node: ";
    traverse(head);

    return 0;
}
