#include<stdio.h>
#include<stdlib.h>
typedef struct Node{
    int info;
    struct Node *next;
}node;
node *head = NULL;
void createList(){
    if(head==NULL){
        int n;
        printf("Enter the number of Nodes in Linked List:");
        scanf("%d", &n);
        if(n!=0){
            int data;
            node *newNode;
            node *temp;
            newNode = (node *)malloc(sizeof(node*));
            head = newNode;
            temp = head;
            printf("Enter the element of Node in LL: ");
            scanf("%d", &data);
            head->info = data;
            for(int i=1; i<n; i++){
                newNode = (node* )malloc(sizeof(node*));
                temp->next = newNode;
                printf("\nEnter the element of Node in LL: ");
                scanf("%d", &data);
                newNode->info = data;
                temp = temp->next;

            }
            temp->next = NULL;
            printf("\nLinked list is created: ");
        }
        else{
            printf("\nLinked list is already created: ");
        }
    }
}
int peekNode(node *head){
    if(head==NULL)
        return 0;
    else{
        node *curr = head;
        int num = curr->next->info;
        while(curr->next->next!=NULL){
            if(num>curr->info && num>curr->next->next->info)
            {
                return num;
            }
            else{
                curr = curr->next;
                num = curr->next->info;
            }
        }
        return 0;
    }
}
void traverse(node *head){
    if(head==NULL)
        return ;
    else{
        int cnt = 0;
        node *curr = head;
        while(curr!=NULL){
            printf("\ndata at node number %d := %d ",cnt++, curr->info);
            curr = curr->next;
        }
    }
}
int main(){
    createList();
    traverse(head);
    printf("\n%d", peekNode(head));
    return 0;


}