#include <stdio.h>
#include <process.h>
#include <stdlib.h>
typedef struct LinkedList
{
    int data;
    struct LinkedList *next;
} node; 
void CreateEmptyList(node **head)
{
    *head = NULL;
    return;
}
// ========== Inserting element in Linked list operation =================//
void insertAtBegin(node **head, int item)
{
    node *temp = (node *)malloc(sizeof(node));
    temp->data = item;
    if (head == NULL)
    {
        temp->next = NULL;
        *head = temp;
    }
    else
    {
        temp->next = *head;
        *head = temp;
    }
    return;
}
void insertAtEnd(node *head, int item)
{
    node *temp;
    temp = (node *)malloc(sizeof(node));
    temp->data = item;
    if (head == NULL)
        insertAtBegin(&head, item);
    else
    {
        while (head->next != NULL)
            head = head->next;
        head->next = temp;
        head->next->next = NULL;
        return;
    }
}
void insertAfterElement(node *head, int index, int item)
{
    node *temp = (node *)malloc(sizeof(node));
    temp->data = item;
    node *curr = head;
    if (head == NULL)
        insertAtBegin(&head, item);
    else
    {
        while (index>0)
        {
            curr = curr->next;
            index--;
        }
        temp->next = curr->next;
        curr->next = temp;
        return;
    }
}
int searchLinked(node *head, int item){
    int cnt = 1;
    while(head!=NULL)
    {
        if(head->data == item)
            return cnt;
        cnt++;
        head=head->next;
    }
    return -1;
}
// ================== deleting element in Linkde List operation ========== //
void deleteAtBegin(node **head){
    node *temp;
    temp = *head;
    *head = temp->next;
    return;
}
void deleteAtEnd(node **head){
    node *curr;
    curr = *head;
    if(curr->next==NULL)
        *head  = NULL;
    while(curr->next->next!=NULL)
    {
        curr = curr->next;

    }
    curr->next = NULL;
    return;

}
void deleteEntireList(node **head)
{
    *head = NULL;

}
void traverseLinkedList(node *head)
{
    if(head==NULL)
        printf("list has been deleted.");
    while (head != NULL)
    {
        printf("%d ", head->data);
        head = head->next;
    }
    return;
}
int main()
{
    node *head;
    CreateEmptyList(&head);
    insertAtBegin(&head, 5);
    insertAtBegin(&head, 10);
    insertAtEnd(head, 90);
    insertAfterElement(head, 0, 20);
    traverseLinkedList(head);
    printf("\nfound at (-1 means does not found): %d\n", searchLinked(head, 40));
    deleteAtBegin(&head);
    deleteAtEnd(&head);
    deleteEntireList(&head);
    traverseLinkedList(head);


    return 0;
}
