#include <stdio.h>
#include <stdlib.h>

typedef struct LinkedList
{
    int info;
    struct LinkedList *link;
} node;

node *head = NULL;

// Function to create a linked list
void createList()
{
    if (head == NULL)
    {
        int n;
        printf("\nEnter the number of nodes:");
        scanf("%d", &n);
        if (n != 0)
        {
            int data;
            node *newNode;
            node *temp;
            newNode = malloc(sizeof(node));
            head = newNode;
            temp = head;
            printf("\nEnter numberto be inserted:");
            scanf("%d", &data);
            head->info = data;

            for (int i = 1; i < n; i++)
            {
                newNode = malloc(sizeof(node));
                temp->link = newNode;
                printf("\nEnter the number to be inserted:");
                scanf("%d", &data);
                newNode->info = data;
                temp = temp->link;
            }
            temp->link = NULL;
        }
        printf("\nThe list is created.");
    }
    else
    {
        printf("\nThe list is already created.");
    }
}

// Function to traverse the linked list

void Travesre()
{
    node *temp;

    // List is empty
    if (head == NULL)
    {
        printf("\nList is empty");
    }
    else
    {
        temp = head;
        while (temp != NULL)
        {
            printf("Data= %d\n", temp->info);
            temp = temp->link;
        }
    }
}

// Function to insert at the beginning of the LL

void insertAtFront()
{
    int data;
    node *temp;
    temp = malloc(sizeof(node));
    printf("\nEnter number to be inserted:");
    scanf("%d", &data);
    temp->info = data;

    temp->link = head;
    head = temp;
}

// Function to insert at the end of the Linked List

void InsertAtEnd()
{
    int data;
    node *temp;
    node *head;
    temp = malloc(sizeof(node));
    printf("\nEnter number to be inserted:");
    scanf("%d", &data);

    temp->link = 0;
    temp->info = data;
    head = head;
    while (head->link != NULL)
    {
        head = head->link;
    }
    head->link = temp;
}

// Function to insert at any specified position in the Linked List

void InsertAtPosition()
{
    node *temp, *newNode;
    int pos, data, i = 1;
    newNode = malloc(sizeof(node));
    printf("\nEnter position and data to be inserted:");
    scanf("%d %d", &pos, &data);

    temp = head;
    newNode->info = data;
    newNode->link = 0;

    while (i < pos - 1)
    {
        temp = temp->link;
        i++;
    }
    newNode->link = temp->link;
    temp->link = newNode;
}

// Function to delete from the beginning of the linked list

void deleteFirst()
{
    node *temp;
    if (head == NULL)
    {
        printf("\nList is empty");
    }
    else
    {
        temp = head;
        head = head->link;
        free(temp);
    }
}

// Function to delete from the end of the LL

void deleteEnd()
{
    node *temp, *prevNode;

    if (head == NULL)
    {
        printf("\nList is empty");
    }
    else
    {
        temp = head;
        while (temp->link != 0)
        {
            prevNode = temp;
            temp = temp->link;
        }

        free(temp);
        prevNode->link = 0;
    }
}

// Function to delete from the specified location

void deletePosition()
{
    node *temp, *position;
    int i = 1, pos;

    if (head == NULL)
    {
        printf("\nList is empty");
    }
    else
    {
        printf("\nEnter index:");
        scanf("%d", &pos);

        position = malloc(sizeof(node));
        temp = head;

        while (i < pos - 1)
        {
            temp = temp->link;
            i++;
        }
        position = temp->link;
        temp->link = position->link;

        free(position);
    }
}
// Function to reverse the LL
void reverseLL()
{
    node *t1, *t2, *temp;
    t1 = t2 = NULL;

    if (head == NULL)
    {
        printf("\nList is empty");
    }
    else
    {
        while (head != NULL)
        {
            t2 = head->link;
            head->link = t1;
            t1 = head;
            head = t2;
        }
        head = t1;

        temp = head;

        printf("Reverse linked list is:");

        while (temp != NULL)
        {
            printf("%d", temp->info);
            temp = temp->link;
        }
    }
}

// Function to search an element in linked list

void search()
{
    int found = -1;
    node *temp = head;
    if (head == NULL)
    {
        printf("\nLinked List is empty");
    }
    else
    {
        printf("\nEnter the element you want to search:");
        int key;
        scanf("%d", &key);

        while (temp != NULL)
        {
            if (temp->info == key)
            {
                found = 1;
                break;
            }
            else
            {
                temp = temp->link;
            }

            if (found == 1)
            {
                printf("Yes, %d is present in the linked list", key);
            }
            else
            {
                printf("No,%d is not present in the LL", key);
            }
        }
    }
}

int main()
{
    createList();
    int choice;
    while (1)
    {
        printf("\n Press 1 to see linked list\n");
        printf("\n Press 2 to insert at the beginning in linked list\n");
        printf("\n Press 3 to insert at the end in linked list\n");
        printf("\n Press 4 to insert at the position in linked list\n");
        printf("\n Press 5 to delete the first element of linked list\n");
        printf("\n Press 6 to delete the last element linked list\n");
        printf("\n Press 7 to delete from the position of linked list\n");
        printf("\n Press 8 to reverse the linked list\n");
        printf("\n Press 9 to search an element in linked list\n");
        printf("\n Press 10 to exit\n");
        printf("\n Enter the choice:\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            Travesre();
            break;
        case 2:
            insertAtFront();
            break;
        case 3:
            InsertAtEnd();
            break;
        case 4:
            InsertAtPosition();
            break;
        case 5:
            deleteFirst();
            break;
        case 6:
            deleteEnd();
            break;
        case 7:
            deletePosition();
            break;
        case 8:
            reverseLL();
            break;
        case 9:
            search();
            break;
        case 10:
            exit(1);
            break;
        default:
            printf("Incorrect choice\n");
        }
    }
    return 0;
}