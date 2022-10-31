#include <stdio.h>
#include <malloc.h>

struct queue
{
    int data;
    struct queue *next;
};

struct queue *head = NULL;

int options()
{
    int choice;
    printf("\n1.Enqueue\t2.Dequeue\t3.Display\t4.Exit\nEnter the choice: ");
    scanf("%d", &choice);
    return choice;
}

struct queue *enqueue()
{
    struct queue *newnode, *helper;
    int number;
    printf("Enter the number to be inserted : ");
    scanf("%d", &number);
    newnode = (struct queue *)malloc(sizeof(struct queue));
    if (head == NULL)
    {
        head = newnode;
        newnode->data = number;
        newnode->next = NULL;
        return head;
    }
    helper = head;
    while (helper->next != NULL)
    {
        helper = helper->next;
    }
    helper->next = newnode;
    newnode->data = number;
    newnode->next = NULL;
    return head;
}

struct queue* dequeue()
{
    if(head==NULL)
    {
        printf("Queue is Empty\n");
        return head;
    }

    struct queue *helper =head;

    head=head->next;
    printf("The dequeued element is : %d\n",helper->data);
    free(helper);
    return head;
}

void display()
{
    if (head == NULL)
    {
        printf("The queue is empty");
        return;
    }

    printf("The elements in queue are : \n");

    struct queue *helper = head;
    while (helper != NULL)
    {
        printf("%d ", helper->data);
        helper = helper->next;
    }
}

int main()
{

    printf("Welcome to Queue DS Operations in C\n");

    do
    {
        int choice = options();
        switch (choice)
        {
        case 1:
            head = enqueue();
            break;

        case 2:
            head = dequeue();
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