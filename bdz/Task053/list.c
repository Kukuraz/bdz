
#include <stdio.h>
#include <stdlib.h>
#include "list.h"

Node* create_node(int value) {
    Node* node = (Node*)malloc(sizeof(Node));
    node -> data = value;
    node -> next = NULL;
    return node;
}

void push_back(Node** head, int value) {
    Node* new_node = create_node(value);
    if(*head == NULL){
        *head = new_node;
        return 0;
    }
    Node* cur =  *head;
    while(cur -> next != NULL){
        cur = cur -> next;
        cur -> next = new_node;

    }  
    
    // if (*head == NULL) {
    //     *head = new_node;
    //     return;
    // }
    // Node* curr = *head;
    // while (curr->next != NULL)
    //     curr = curr->next;
    // curr->next = new_node;
}

void insert_at(Node** head, int value, int index) {
    Node* new_node = create_node(value);
    if (index == 0) {
        new_node->next = *head;
        *head = new_node;
        return;
    }
    Node* curr = *head;
    for (int i = 0; i < index - 1 && curr != NULL; i++)
        curr = curr->next;
    if (curr == NULL) {
        free(new_node);
        return;
    }
    new_node->next = curr->next;
    curr->next = new_node;
}

void delete_value(Node** head, int value) {
    if (*head == NULL) return;
    if ((*head)->data == value) {
        Node* tmp = *head;
        *head = (*head)->next;
        free(tmp);
        return;
    }
    Node* curr = *head;
    while (curr->next != NULL && curr->next->data != value)
        curr = curr->next;
    if (curr->next == NULL) return;
    Node* tmp = curr->next;
    curr->next = tmp->next;
    free(tmp);
}

Node* find(Node* head, int value) {
    while (head != NULL) {
        if (head->data == value) return head;
        head = head->next;
    }
    return NULL;
}

void print_list(Node* head) {
    while (head != NULL) {
        printf("%d", head->data);
        if (head->next != NULL) printf(" -> ");
        head = head->next;
    }
    printf("\n");
}

void free_list(Node* head) {
    while (head != NULL) {
        Node* tmp = head;
        head = head->next;
        free(tmp);
    }
}