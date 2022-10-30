#include <stdio.h>
#include <malloc.h>

struct stack
{
    int data;
    struct stack *next;
};

struct stack *top = NULL;

int options()
{
    int choice;
    printf("\n1.Push\t2.Pop\t3.Display\t4.Exit\nEnter the choice: ");
    scanf("%d", &choice);
    return choice;
}

struct stack *push()
{
    struct stack *newnode;
    newnode = (struct stack *)malloc(sizeof(struct stack));

    int number;
    printf("Enter the value to be inserted: ");
    scanf("%d", &number);

    if (top == NULL)
    {
        top = newnode;
        top->data = number;
        top->next = NULL;
        return top;
    }

    newnode->next = top;
    top = newnode;
    newnode->data = number;
    return top;
}

struct stack *pop()
{
    if (top == NULL)
    {
        printf("Stack is Empty\n");
        return top;
    }

    struct stack *helper;
    helper = top;
    top = top->next;
    printf("Popped elements is %d\n", helper->data);
    free(helper);
    return top;
}

void display()
{
    if (top == NULL)
    {
        printf("Stack is Empty");
        return;
    }
    struct stack *helper = top;
    while (helper != NULL)
    {
        printf("%d ", helper->data);
        helper = helper->next;
    }
}

int main()
{
    printf("Welcome to Stack using Linked List Operations in C\n");

    do
    {
        int choice = options();
        switch (choice)
        {
        case 1:
            top = push();
            break;

        case 2:
            top = pop();
            break;

        case 3:
            display();
            break;

        case 4:
            printf("EXITTED");
            exit(0);
            break;

        default:
            printf("Invalid Input\n");
            break;
        }
    } while (1);

    return 0;
}