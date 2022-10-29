#include <stdio.h>
#include <stdlib.h>
#define Size 10

struct queue
{
    int arr[Size];
    int front, rear;
};

struct queue q;

int options()
{
    int choice;
    printf("\n1.Enqueue\t2.Dequeue\t3.Display\t4.Exit\nEnter the choice: ");
    scanf("%d", &choice);
    return choice;
}

void display()
{
    if(q.front == q.rear)
    {
       printf("\nThe Queue is EMPTY\n"); 
       return ;
    }
    printf("\nThe Queue elements are :\n");
    for(int i= q.front ; i<=q.rear ; i++)
    {
        printf("%d\t",q.arr[i]);
    }
}

void enqueue()
{
    if(q.rear == Size-1 ) // or condition for circular queue
    {
        printf("\nThe Queue is FULL\n"); 
        return;
    }
    if(q.front==-1)
    {
        q.front++;
    }
    int data;
    printf("Enter the number to be enqueued : ");
    scanf("%d",&data);
    q.arr[++q.rear]=data;

}

void dequeue()
{
    if(q.front==q.rear)
    {
        printf("Queue is Empty\n");
        return ;
    }
    printf("Dequeued Element is %d\n",q.arr[q.front]);
    q.front++;
}

int main()
{
    q.rear=q.front=-1;
    printf("Welcome to Queue DS Operations in C\n");

    do
    {
        int choice = options();
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