#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define max 6
int top = -1, stack[max];

int isfulll()
{
    if (top == max - 1)
        return 1;
    else
        return 0;
}
int isempty()
{
    // return top<0;
    if (top < 0)
        return 1;
    else
        return 0;
}

void push()
{
    int n;
    if (isfulll())
        printf("The stack is full");
    else
    {
        printf("Enter the number to be push in stack : ");
        scanf("%d", &n);
        top++;
        stack[top] = n;
        printf("%d is pushed to stack ", n);
    }
}

void pop()
{
    int data;
    if (isempty())
        printf("The stack is empty");
    else
    {
        data = stack[top];
        printf("%d is poped", data);
        top--;
    }
}

void display()
{
    if (isempty())
        printf("The stack is empty");

    else
    {

        for (int i = 0; i < max; i++)
        {
            printf("%d \t", stack[i]);
        }
    }
}

void peek()
{
    int top_data;
    if (isempty())
        printf("The stack is empty");

    else
    {
        top_data = stack[top];
        printf(" The data at top is %d", top_data);
    }
}
int main()
{
    int flag = 1;
    do
    {
        int choice;
        printf("\n 1. push \n 2. pop \n 3. peek \n 4. display");
        printf(" \n Enter the number :");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        default:
            exit(1);
        }
    } while (flag);

    getch();
    return 0;
}
