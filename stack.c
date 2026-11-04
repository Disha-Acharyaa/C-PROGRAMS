
#include <stdio.h>
#define MAX 5

int queue[MAX];
int front = -1, rear = -1;

// Enqueue operation
void enqueue() {
    int item;

    if (rear == MAX - 1) {
        printf("Queue Overflow!\n");
    } else {
        printf("Enter element to insert: ");
        scanf("%d", &item);

        if (front == -1)
            front = 0;

        rear++;
        queue[rear] = item;

        printf("Element inserted successfully.\n");
    }
}

// Dequeue operation
void dequeue() {
    if (front == -1 || front > rear) {
        printf("Queue Underflow!\n");
    } else {
        printf("Deleted element: %d\n", queue[front]);
        front++;

        if (front > rear) {
            front = rear = -1;
        }
    }
}

// Peek operation
void peek() {
    if (front == -1) {
        printf("Queue is empty!\n");
    } else {
        printf("Front element: %d\n", queue[front]);
    }
}

// Display operation
void display() {
    int i;

    if (front == -1) {
        printf("Queue is empty!\n");
    } else {
        printf("Queue elements are:\n");

        for (i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }

        printf("\n");
    }
}

int main() {
    int choice;

    do {
        printf("\n--- QUEUE OPERATIONS ---\n");
        printf("1. Enqueue (Insertion)\n");
        printf("2. Dequeue (Deletion)\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                enqueue();
                break;

            case 2:
                dequeue();
                break;

            case 3:
                peek();
                break;

            case 4:
                display();
                break;

            case 5:
                printf("Exiting program.\n");
                break;

            default:
                printf("Invalid choice!\n");
        }
    } while (choice != 5);

    return 0;
}
