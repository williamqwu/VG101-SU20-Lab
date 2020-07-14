//
// Created by Dell on 2020/7/3.
//

#ifndef LAB8NEW_DOUBLE_LIST_H
#define LAB8NEW_DOUBLE_LIST_H
typedef struct node{
    int data;
    // the next node and the previous node
    struct node *next;
    struct node *prev;
}node_t;
void push(node_t **head_ref,int num);
void insertAfter(node_t* prev_node, int num);
void append(node_t ** head_ref, int new_data);
void printList(node_t* node);
void deleteNode(node_t ** head_ref, node_t * del);
void freeList(node_t **head_ref);
#endif //LAB8NEW_DOUBLE_LIST_H
