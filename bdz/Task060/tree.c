#include <stdio.h>
#include <stdlib.h>
#include "tree.h"

int height(Node* n) {
    return (n == NULL) ? 0 : n->height;
}


static int max(int a, int b) {
    return (a > b) ? a : b;
}

Node* create_node(int key) {
    Node* new_node = (Node*)malloc(sizeof(Node));
    if (!new_node) {
        fprintf(stderr, "Memory allocation failed!\n");
        exit(1);
    }
    new_node->key = key;
    new_node->left = NULL;
    new_node->right = NULL;
    new_node->height = 1;  // Новый узел — лист
    return new_node;
}
Node* right_rotate(Node* y) {
    Node* x = y->left;
    Node* T2 = x->right;
    
    x->right = y;
    y->left = T2;
    
    y->height = max(height(y->left), height(y->right)) + 1;
    x->height = max(height(x->left), height(x->right)) + 1;
    
    return x;
}


Node* left_rotate(Node* x) {
    Node* y = x->right;
    Node* T2 = y->left;
    
    y->left = x;
    x->right = T2;
    
    x->height = max(height(x->left), height(x->right)) + 1;
    y->height = max(height(y->left), height(y->right)) + 1;
    
    return y;
}

int get_balance(Node* n) {
    ///
}

Node* search(Node* root, int key) {
    ///
}

Node* insert(Node* node, int key) {
   ///
}

tatic Node* find_min(Node* node) {
    while (node && node->left != NULL) {
        node = node->left;
    }
    return node;
}

Node* delete(Node* root, int key) {
   ///
}

void inorder(Node* root) {
 ///
}

void free_tree(Node* root) {
 ///
}