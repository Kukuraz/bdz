#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

static Node* reverse(Node* head) {
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

int is_palindrome(Node* head) {
    if (head == NULL || head->next == NULL)
        return 1;

    Node* slow = head;
    Node* fast = head;
    while (fast->next != NULL && fast->next->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }

    Node* second_half = reverse(slow->next);

    Node* left  = head;
    Node* right = second_half;
    int   result = 1;
    while (right != NULL) {
        if (left->data != right->data) {
            result = 0;
            break;
        }
        left  = left->next;
        right = right->next;
    }

    slow->next = reverse(second_half);

    return result;
}