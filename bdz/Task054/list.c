#include <stdio.h>
#include <stdlib.h>
#include "list.h"

Node* create_node(int value) {
    Node* node = malloc(sizeof(Node));
    node->data = value;
    node->next = NULL;
    node->prev = NULL;
    return node;
}

void push_back(Node** head, int value) {
    Node* node = create_node(value);
    if (*head == NULL) {
        *head = node;
        return;
    }
    Node* cur = *head;
    while (cur->next != NULL)
        cur = cur->next;
    cur->next = node;
    node->prev = cur;
}

void insert_at(Node** head, int value, int index) {
    Node* node = create_node(value);

    if (index == 0) {
        node->next = *head;
        if (*head != NULL)
            (*head)->prev = node;
        *head = node;
        return;
    }


    Node* cur = *head;
    for (int i = 0; i < index - 1 && cur != NULL; i++)
        cur = cur->next;

    if (cur == NULL) { free(node); return; }


    node->next = cur->next;
    node->prev = cur;
    if (cur->next != NULL)
        cur->next->prev = node;
    cur->next = node;
}

void delete_value(Node** head, int value) {

    Node* cur = *head;
    while (cur != NULL && cur->data != value)
        cur = cur->next;

    if (cur == NULL) return;


    if (cur->prev != NULL)
        cur->prev->next = cur->next;
    else
        *head = cur->next;

    if (cur->next != NULL)
        cur->next->prev = cur->prev;

    free(cur);
}

Node* find(Node* head, int value) {
    while (head != NULL) {
        if (head->data == value) return head;
        head = head->next;
    }
    return NULL;
}

void free_list(Node* head) {
    while (head != NULL) {
        Node* tmp = head;
        head = head->next;
        free(tmp);
    }
}

void print_list(Node* head) {
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

void print_list_reverse(Node* head) {
    if (head == NULL) return;
    while (head->next != NULL)
        head = head->next;
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->prev;
    }
    printf("\n");
}