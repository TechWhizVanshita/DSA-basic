#include <stdio.h>
#include <stdlib.h>
#define MAX 5

int front = -1;
int rear = -1;

int cQueue[MAX];
void enqueue();
void dequeue();
void display();

int main()
{
    int choice;

    while (1)
    {
        // 		printf("Queue\t\t\t\t\n\n");
        printf("\n\n1.Enqueue\n2.Dequeue\n3.Display\n0.Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 0:
            exit(1);
            break;
        default:
            printf("Wrong choice,press only 0,1,2,3");
        }
    }
    return 0;
}

void enqueue()
{
    int element;

    if ((rear + 1) % MAX == front)
    {
        printf("Circular Queue is full\n");
    }

    else
    {
        if (front == -1)
        {
            front = 0;
        }
        printf("Enter element: ");
        scanf("%d", &element);

        rear = (rear + 1) % MAX;
        cQueue[rear] = element;
    }
}

void dequeue()
{
    int x;
    if (front == -1)
    {
        printf("Queue is empty\n");
    }
    else
    {
        x = cQueue[front];
        printf("Dequeued element = %d\n", x);

        if (front == rear)
        {
            front = rear = -1;
        }
        else
        {
            front = ((front + 1) % MAX);
        }
    }
}

void display()
{
    int i;
    if (front == -1)
    {
        printf("Queue is empty\n");
    }
    else
    {
        for (i = front; i != rear; i = (i + 1) % MAX)
        {
            printf("%d ", cQueue[i]);
        }
        printf("%d", cQueue[i]);
    }
}