#include <stdio.h>
#include <stdlib.h>
#define MAX 5

int front, rear = -1;

int queue[MAX];
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
	if (rear == MAX - 1)
	{
		printf("Queue is full");
	}
	else
	{
		if (front == -1)
		{
			front = 0;
		}
		rear = rear + 1;
		printf("Enter element: ");
		scanf("%d", &element);
		queue[rear] = element;
	}
}

void dequeue()
{
	int x;
	if (front == -1 || front == rear + 1)
	{
		printf("Queue is empty");
	}
	else
	{
		x = queue[front];
		printf("Dequeued element=%d", queue[front]);
		front = front + 1;
	}
}

void display()
{
	int i;
	if (front == -1 || front == rear + 1)
	{
		printf("Queue is empty");
	}
	else
	{
		for (i = front; i <= rear; i++)
		{
			printf("%d\n", queue[i]);
		}
	}
}
