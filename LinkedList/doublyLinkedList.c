#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    struct node *prev;
    int info;
    struct node *next;
}node;
node *head = NULL;
node *tail = NULL;
void creatDoublyList(node **head, node **tail){
    int n;
    printf("Enter the number of nodes in doubly Linked List: ");
    scanf("%d", &n);
    node *temp, newNode;
    newNode = (node*)malloc(sizeof(node *));
}