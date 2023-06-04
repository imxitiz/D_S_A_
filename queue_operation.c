#include <stdio.h>
#include <stdlib.h>
#define MAX 5

int queue[MAX];
int rear = -1;
int front = -1;
void enqueue(int data);
int dequeue();
int peek();
void display();
int isFull();
int isEmpty();

int main()
{
        int choice, data;
        while (1)
        {
                printf("\n1.enqueue\n");
                printf("2.dequeueete\n");
                printf("3.Display element at the front\n");
                printf("4.Display all elements of the queue\n");
                printf("5.Quit\n");
                printf("\nEnter your choice : ");
                scanf("%d", &choice);

                switch (choice)
                {
                case 1:
                        printf("\nInput the element for adding in queue : ");
                        scanf("%d", &data);
                        enqueue(data);
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
                        exit(1);
                default:
                        printf("\nWrong choice\n");
                }
        }
        return 0;
}

void enqueue(int data)
{
        if (isFull())
        {
                printf("\nQueue full\n");
        }
        else
        {
                if (front == -1)
                        front++;
                rear++;
                queue[rear] = data;
        }
}
int dequeue()
{
        int item;
        if (isEmpty())
        {
                printf("\nQueue empty\n");
        }
        else
        {
                item = queue[front];
                front++;

                printf("\ndequeued element is  %d\n", item);
        }
}

int peek()
{
        if (isEmpty())
        {
                printf("\nQueue empty\n");
        }
        else
        {

                printf("\nElement at the front is %d\n", queue[front]);
        }
}

int isEmpty()
{
        if (front == -1 || front > rear)
                return 1;
        else
                return 0;
}

int isFull()
{
        if (rear == MAX - 1)
                return 1;
        else
                return 0;
}

void display()
{
        int i;
        if (isEmpty())

                printf("\nQueue is empty\n");
        else
        {
                printf("\nQueue is :\n\n");
                for (i = front; i <= rear; i++)
                        printf("%d  ", queue[i]);
                printf("\n\n");
        }
}
