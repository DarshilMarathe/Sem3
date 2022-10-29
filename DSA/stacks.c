#include <stdio.h>
#include <stdlib.h>
#define Size 10

struct stk
{
    int arr[Size];
    int top;
};

struct stk s;

int options()
{
    int choice;
    printf("\n1.Push\t2.Pop\t3.display\t4.Exit\nEnter the choice: ");
    scanf("%d", &choice);
    return choice;
}

void push()
{
    if (s.top == Size - 1)
    {
        printf("OVERFLOW - Cant be inserted\n");
        return;
    }
    int number;
    printf("\nEnter the Number:");
    scanf("%d", &number);
    s.arr[++s.top] = number;
}

void pop()
{
    if (s.top == -1)
    {
        printf("The stack is already Empty\n");
        return;
    }
    printf("The popped element is %d\n", s.arr[s.top]);
    s.top--;
}

void display()
{
    if (s.top == -1)
    {
        printf("Stack is EMPTY\n");
        return;
    }
    printf("The Elements in stack are:\n");
    for (int i = s.top; i >= 0; i--)
    {
        printf("%d\t", s.arr[i]);
    }
}

int main()
{
    s.top = -1;
    printf("Welcome to Stack DS Operations in C\n");

    do
    {
        int choice = options();
        switch (choice)
        {
        case 1:
            push();
            break;

        case 2:
            pop();
            break;

        case 3:
            display();
            break;

        case 4:
            printf("EXITED");
            exit(0);
            break;

        default:
            printf("Invalid Input\n");
            break;
        }
    } while (1);

    return 0;
}