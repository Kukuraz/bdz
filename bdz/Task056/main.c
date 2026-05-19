#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

Node* reverse(Node* head) {
    Node* prev = NULL;
    Node* cur  = head;
    while (cur != NULL) {
        Node* next = cur->next;
        cur->next  = prev;
        prev       = cur;
        cur        = next;
    }
    return prev;
}