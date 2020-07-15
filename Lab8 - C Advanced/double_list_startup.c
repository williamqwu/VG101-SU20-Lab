/*
 * Created by cls on 2020/7/3.
 */

#include "double_list.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void push(node_t **head_ref, int num)
{
    // TODO: head reference is the reference to the node head, push one element to the linklist
    // Hint: notice if no element exist in double linked list
}
void deleteNode(node_t **head_ref, node_t *del)
{
    // TODO: Implement function to delete a node in a Doubly Linked List.
    // head_ref --> pointer to head node pointer.
    // del --> pointer to node to be deleted
}
void insertAfter(node_t *prev_node, int num)
{
    // TODO: Insert List node after a given node.
}
void append(node_t **head_ref, int new_data)
{
    // Given a reference (pointer to pointer) to the head of a DLL and an int, appends a new node at the end
}
void printList(node_t *node)
{
    printf("\nVisit Elements in forward direction \n");
    while (node != NULL)
    {
        printf(" %d ", node->data);
        node = node->next;
    }
}
void freeList(node_t **head_ref)
{
    // TODO: Free the list
}