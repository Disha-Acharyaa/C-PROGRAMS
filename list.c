
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

struct node *head = NULL;

// Function to create a new node
struct node* getnode()
{
    struct node *newnode;

    newnode = (struct node*)malloc(sizeof(struct node));

    if (newnode == NULL)
    {
        printf("Memory allocation failed\n");
        exit(1);
    }

    printf("Enter data: ");
    scanf("%d", &newnode->data);

    newnode->link = NULL;

    return newnode;
}

// Insert at front
void insert_front()
{
    struct node *newnode;

    newnode = getnode();

    newnode->link = head;
    head = newnode;

    printf("Node inserted at front\n");
}

// Insert at rear
void insert_rear()
{
    struct node *newnode, *temp;

    newnode = getnode();

    if (head == NULL)
    {
        head = newnode;
    }
    else
    {
        temp = head;

        while (temp->link != NULL)
        {
            temp = temp->link;
        }

        temp->link = newnode;
    }

    printf("Node inserted at rear\n");
}

// Delete at front
void delete_front()
{
    struct node *temp;

    if (head == NULL)
    {
        printf("List is empty\n");
    }
    else
    {
        temp = head;
        head = head->link;

        printf("Deleted element: %d\n", temp->data);

        free(temp);
    }
}

// Delete at rear
void delete_rear()
{
    struct node *temp, *prev;

    if (head == NULL)
    {
        printf("List is empty\n");
    }
    else if (head->link == NULL)
    {
        printf("Deleted element: %d\n", head->data);

        free(head);
        head = NULL;
    }
    else
    {
        temp = head;

        while (temp->link != NULL)
        {
            prev = temp;
            temp = temp->link;
        }

        printf("Deleted element: %d\n", temp->data);

        prev->link = NULL;
        free(temp);
    }
}

// Display linked list
void display()
{
    struct node *temp;

    if (head == NULL)
    {
        printf("List is empty\n");
    }
    else
    {
        temp = head;

        printf("Linked List: ");

        while (temp != NULL)
        {
            printf("%d -> ", temp->data);
            temp = temp->link;
        }

        printf("NULL\n");
    }
}

// Main function
int main()
{
    int choice;

    while (1)
    {
        printf("\n--- LINKED LIST MENU ---\n");
        printf("1. Insert at Front\n");
        printf("2. Insert at Rear\n");
        printf("3. Delete at Front\n");
        printf("4. Delete at Rear\n");
        printf("5. Display\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                insert_front();
                break;

            case 2:
                insert_rear();
                break;

            case 3:
                delete_front();
                break;

            case 4:
                delete_rear();
                break;

            case 5:
                display();
                break;

            case 6:
                exit(0);

            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}
