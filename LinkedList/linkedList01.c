#include <stdio.h>
#include <process.h>
#include <conio.h>
typedef struct SimpleLink
{
    int data;
    struct simpleLik *next;

} node;
node *create(node *p)
{
    p = (node *)malloc(sizeof(node));
    printf("Enter the data: "); 
    scanf("%d", &p->data); 
    p->next = (node *) NULL;
    return (p);
}

void revdisplay(node *p){
    int a;
    printf("\n\n");
    node *brr[25];
    int arr[25];
    a = 0;
    while (p != NULL)
    {
        arr[a] = p->data;
        brr[a] = p->next;
        p = p->next;
        a++;
    }
    for (int i = (a - 1); i >= 0; i--)
        printf("[%d,%u]<--", arr[i], brr[i]);
    printf("HEAD");
    printf("\n\n\npress any key to continue......");
    getch();
}
node *insert_begin(node *p)
{
    node *temp;
    temp = (node *)malloc(sizeof(node));
    scanf("%d", &temp->data);
    temp->next = p;
    p = temp;
    return (p);
}

node *insert_end(node *p)
{
    node *temp, *q;
    q = p;
    temp = (node *)malloc(sizeof(node));
    printf("\n Enter the inserted data: ");
    scanf("%d", &temp->data);
    while (p->next != NULL)
        p = p->next;
    p->next = temp;
    temp->next = (node *)NULL;
    return (q);
}
node *insert_after(node *p)
{
    node *temp, *q;
    int x;
    q = p;
    printf("\nEnter the data (after which you enter the data ):");
    scanf("%d", &x);
    while (p->data != x)
        p = p->next;
    temp = (node *)malloc(sizeof(node));
    printf("\nEnter the inserted data: ");
    scanf("%d", &temp->data);
    temp->next = p->next;
    p->next = temp;
    return (q);
}
int count(node *p)
{
    int i = 0;
    while (p != NULL)
    {
        p = p->next;
        i++;
    }
    return i;
}
node *insert_at_spe_pos(node *p)
{
    node *temp, *q, *r;
    int x, a, i = 1;
    a = count(p);
    q = p;
    printf("\nEnter the position you want to insert the data: ");
    scanf("%d", &x);
    if (x > (a + 1))
    {
        printf("\n not able to insert the data at that position.");
        getch();
    }
    else
    {
        if (x == 1)
        {
            temp = (node *)malloc(sizeof(node));
            printf("\n enter the inserted data: ");
            scanf("%d", &temp->data);
            temp->next = p;
            q = temp;
        }
        else
        {
            while (i != x)
            {
                r = p;
                p = p->next;
                i++;
            }
            temp = (node *)malloc(sizeof(node));
            printf("\n enter the inserted data ");
            scanf("%d", &temp->data);
            temp->next = p;
            r->next = temp;
        }
    }
    return (q);
}
node *delend(node *p)
{
    node *q, *r;
    r = p;
    q = p;
    if (p->next == NULL)
        r = (node *)NULL;
    else
    {
        while (p->next != NULL)
        {
            q = p;
            p = p->next;
        }
        q->next = (node *)NULL;
    }
    free(p);
    return (r);
}
node *del_speci_ele(node *p)
{
    node *q, *r;
    int x;
    q = p;
    r = q;
    printf("\n Enter the data to remove: ");
    scanf("%d", &x);
    while (q->data != x)
    {
        r = q;
        q = q->next;
    }
    if (q == r)
        p = p->next;
    else
        r->next = q->next;
    free(q);
    return (p);
}
node *delBegin(node *p)
{
    node *q;
    q = p;
    p = p->next;
    free(q);
    return (p);
}
node *delete_after(node *p)
{
    node *temp, *q;
    int x;
    q = p;
    printf("\n Enter the data after which you want to declare: ");
    scanf("%d", &x);
    while (p->data != x)
        p = p->next;
    temp = p->next;
    p->next = temp->next;
    free(temp);
    return (q);
}
node *delete_at_spe_pos(node *p)
{
    node *temp, *q, *r;
    int x, a, i = 1;
    a = count(p);
    q = p;
    printf("\nEnter the position at which you want to remove data: ");
    scanf("%d", &x);
    if (x > (a))
    {
        printf("Not able to delete the data at such postion: ");
        getch();
    }
    else
    {
        if (x == 1)
        {
            q = q->next;
            free(p);
        }
        else
        {
            while (i != x)
            {
                r = p;
                p = p->next;
                i++;
            }
            r->next = p->next;
            free(p);
        }
    }
    return (q);
}
node *reverse(node *p)
{
    node *q, *r;
    q = (node *)NULL;
    while (p != NULL)
    {
        r = q;
        q = p;
        p = p->next;
        q->next = r;
    }
    return (q);
}
void display(node *p)
{
    printf("\n\n");
    while (p != NULL)
    {
        printf("[%d, %u]-->", p->data, p->next);
        p = p->next;
    }
    printf("NULL");
    printf("\n\n\npress any key to continue.. ");
    getch();
}

void screen(node *head)
{
    clrscr();
    int ch, a;
    printf("\t\t\t SINGLE LINEAR LINKED LIST");
    printf("\n\t\t\t********");
    printf("\n\n OPTIONS ARE--:");
    printf("\n~~~~~~~~~~~");
    printf("\n\n 0-Exit");
    printf("\n\n 1-Create first node");
    printf("\n\n 2-Insert at begining");
    printf("\n 3-Insert at end");
    printf("\n 4-Insert after element");
    printf("\n 5-Insert at specific position");
    printf("\n\n 6-Delete at end");
    printf("\n 7-Delete at begining");
    printf("\n 8-Delete after element");
    printf("\n 9-Delete specific element");
    printf("\n10-Delete element fromspecific position");
    printf("\n\n11-Traverse in order (Display) ");
    printf("\n12-Traverse in reverse order (Display) ");
    printf("\n\n13-Count no. of node");
    printf("\n\n14-Reversed linked list");
    printf("\n-------------------");
    printf("\n\nEnter the choice: ");
    scanf("%d", &ch);
    printf("\n----");
    switch (ch)
    {
    case 0:
        exit(0);
    case 1:
        head = create(head);
        // display(head);
        break;
    case 2:
        head = insert_Begin(head);
        break;
    case 3:
        head = insert_end(head);
        break;
    case 4:
        head = insert_after(head);
        break;
    case 5:
        head = insert_at_spe_pos(head);
        break;
    case 6:
        head = delend(head);
        break;
    case 7:
        head = delBegin(head);
        break;
    case 8:
        head = delete_after(head);
        break;
    case 9:
        head = del_speci_ele(head);
        break;
    case 10:
        head = delete_at_spe_pos(head);
        break;
    case 11:
        display(head);
        break;
    case 12:
        revdisplay(head);
        break;
    case 13:
        a = count(head);
        printf("The no. of node in list-:% d ", a);
        printf("\n\n\npress any key tocontinue...");
        getch();
        break;
    case 14:
        head =  reverse(head);
        break;
    default:
        printf("\n\n\nPlease enter the right choice....");
        getch();
        break;
    }
    screen(head);
}

void main()
{
    clrscr();
    node *head;
    // int a, ch;
    head = (node *)NULL;
    screen(head);
    getche();
}
