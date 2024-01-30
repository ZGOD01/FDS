#include<bits/stdc++.h>
#define MAX 30

using namespace std;

struct Q {
    int R, F;
    int data[MAX];
};

void initialize(Q* P) {
    P->R = -1;
    P->F = -1;
}

int empty(Q* P) {
    if (P->R == -1)
        return 1;
    return 0;
}

int full(Q* P) {
    if (P->R == MAX - 1)
        return 1;
    return 0;
}

int main() {
    Q q;
    initialize(&q);
    return 0;
}
