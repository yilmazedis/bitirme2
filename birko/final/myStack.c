//https://www.geeksforgeeks.org/stack-data-structure-introduction-program/
// C program for linked list implementation of stack 
#include <stdio.h> 
#include <stdlib.h> 
#include <limits.h>
#include "myStack.h"
  
struct StackNode* newNode(int data) 
{ 
    struct StackNode* stackNode = (struct StackNode*) malloc(sizeof(struct StackNode)); 
    stackNode->data = data; 
    stackNode->next = NULL; 
    return stackNode; 
} 
  
int isEmpty(struct StackNode *root) 
{ 
    return !root; 
} 
  
void push(struct StackNode** root, int data) 
{ 
    struct StackNode* stackNode = newNode(data); 
    stackNode->next = *root; 
    *root = stackNode; 
    printf("%d pushed to stack\n", data); 
} 
  
int pop(struct StackNode** root) 
{ 
    if (isEmpty(*root)) 
        return INT_MIN; 
    struct StackNode* temp = *root; 
    *root = (*root)->next; 
    int popped = temp->data; 
    free(temp); 
  
    return popped; 
} 
  
int peek(struct StackNode* root) 
{ 
    if (isEmpty(root)) 
        return INT_MIN; 
    return root->data; 
} 
  