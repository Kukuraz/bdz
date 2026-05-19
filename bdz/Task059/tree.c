#include <stdio.h>
#include <stdlib.h>
#include "tree.h"

Node* create_node(int key) {
    Node* new_node = (Node*)malloc(sizeof(Node));
    if (!new_node) {
        fprintf(stderr, "Memory allocation failed!\n");
        exit(1);
    }
    new_node->key = key;
    new_node->left = NULL;
    new_node->right = NULL;
    return new_node;
}

Node* insert(Node* root, int key) {
    if (root == NULL) {
        return create_node(key);
    }
    if (key < root->key) {
        root->left = insert(root->left, key);
    } else if (key > root->key) {
        root->right = insert(root->right, key);
    }
    // Дубликаты игнорируем
    return root;
}

Node* search(Node* root, int key) {
    if (root == NULL || root->key == key) {
        return root;
    }
    if (key < root->key) {
        return search(root->left, key);
    } else {
        return search(root->right, key);
    }
}

static Node* find_min(Node* root) {
    while (root && root->left != NULL) {
        root = root->left;
    }
    return root;
}

Node* delete(Node* root, int key) {
    if (root == NULL) return NULL;

    if (key < root->key) {
        root->left = delete(root->left, key);
    } else if (key > root->key) {
        root->right = delete(root->right, key);
    } else {
        // Узел найден
        // Случай 1: нет левого ребенка
        if (root->left == NULL) {
            Node* temp = root->right;
            free(root);
            return temp;
        }
        // Случай 2: нет правого ребенка
        else if (root->right == NULL) {
            Node* temp = root->left;
            free(root);
            return temp;
        }
        // Случай 3: два ребенка
        Node* successor = find_min(root->right);
        root->key = successor->key;
        root->right = delete(root->right, successor->key);
    }
    return root;
}

void inorder(Node* root) {
    if (root == NULL) return;
    inorder(root->left);
    printf("%d ", root->key);
    inorder(root->right);
}

void free_tree(Node* root) {
    if (root == NULL) return;
    free_tree(root->left);
    free_tree(root->right);
    free(root);
}