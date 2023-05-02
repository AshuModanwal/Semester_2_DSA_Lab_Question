#include<stdio.h>
#include<conio.h>
#include<process.h>
typedef struct typenode{
    int val;
    struct typenode *next;
}node;
node *create(node *p)
{
    p = (node *)malloc(sizeof(node));
    printf("Enter the data: "); 
    scanf("%d", &p->val); 
    p->next = (node *) NULL;
    return (p);
}
void reverseLL(node *p){
    if(p->next!=NULL)
    reverseLL(p->next);
    printf("%d", p->val);
}
void *traverse(node *p){
    while(p!=NULL){
        printf("%d ", p->val);
        p = p->next;
    }
    return;
}
int main(){
    node *head;
    head = (node *)NULL;
    create(head);
    create(head);
    create(head);
    create(head);
    traverse(head);
    // reverseLL(p);
    return 0;
}