#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node root;

struct Node* createNode(int data) {
    struct Node* new_node;
    new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}

int main() {
    root.data = 0;
    
    struct Node *cur = &root;
    for(int i = 1; i < 10; i++) {
        cur->next = createNode(i);
        cur = cur->next;
    }

    for(struct Node *cur = &root; cur != NULL; cur = cur->next) {
        printf("%d ", cur->data);
    }
    printf("\n");
}