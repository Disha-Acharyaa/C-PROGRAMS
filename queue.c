
#include<stdio.h>
#include<stdlib.h>
#define MAX 5

int front = -1;
int rear = -1;

int main()
{
    int queue_overflow();
    int queue_underflow();
    int queue_empty();
    void queue_insert(int queue[], int value);
    int queue_delete(int queue[]);
    void queue_display(int queue[]);

    int queue[MAX], choice, x, value;

    do
    {
        printf("Enter 1-INSERT \n 2-DELETE \n");
        printf("3-DISPLAY \n Any value to EXIT \n");

        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                if (queue_overflow())
                    printf("Queue Overflow \n");
                else
                {
                    printf("Enter the value to be inserted \n");
                    scanf("%d", &value);
                    queue_insert(queue, value);
                }
                break;

            case 2:
                if (queue_underflow())
                    printf("Queue Underflow \n");
                else
                {
                    x = queue_delete(queue);
                    printf("Deleted element from Queue is %d \n", x);
                }
                break;

            case 3:
                if (queue_empty())
                    printf("Queue is Empty \n");
                else
                {
                    printf("Queue status \n");
                    queue_display(queue);
                }
                break;

            default:
                printf("Invalid input - EXIT \n");
                exit(0);
        }

    } while (choice >=1 && choice <=3);

    return 0;
} 

int queue_overflow()
{
    if (rear == MAX-1)
        return 1;
    else
        return 0;
} 

void queue_insert(int queue[], int value)
{
    rear = rear+1;
    queue[rear] = value;
    return;
} 

int queue_underflow()
{
    if (front == rear)
        return 1;
    else
        return 0;
} 

int queue_delete(int queue[])
{
    int x;
    front = front+1;
    x = queue[front];
    return (x);
}

int queue_empty()
{
    if (front == rear)
        return 1;
    else
        return 0;
} 

void queue_display(int queue[])
{
    int i;
    for(i=front+1; i<=rear; i++)
        printf("%d \t", queue[i]);

    printf("\n");
    return;
} 
