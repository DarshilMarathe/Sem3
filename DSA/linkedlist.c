#include <stdio.h>
#include <malloc.h>

struct ll_node
{
    int data;
    struct ll_node *next;
};

struct ll_node *head = NULL;

int options()
{
    int choice;
    printf("\n1.Insert Node\t2.Delete Node\t3.Display\t4.Exit\nEnter the choice: ");
    scanf("%d", &choice);
    return choice;
}

void insert()
{
    struct ll_node *newnode, *helper, *temp;
    newnode = (struct ll_node *)malloc(sizeof(struct ll_node));

    int number;
    printf("Enter the number to be inserted : ");
    scanf("%d", &number);

    if (head == NULL)
    {
        head = newnode;
        newnode->data = number;
        newnode->next = NULL;
        return;
    }

    if (head->data >= number)
    {
        helper = head;
        head = newnode;
        newnode->data = number;
        newnode->next = helper;
        return;
    }

    helper = head;
    while ((helper->next != NULL) && helper->next->data <= number)
    {
        helper = helper->next;
    }
    newnode->next = helper->next;
    helper->next = newnode;
    newnode->data = number;
}

void deletenode()
{
    if (head == NULL)
    {
        printf("List is Empty\n");
        return;
    }

    struct ll_node *helper, *temp;
    int number;
    printf("Enter the Number to be Deleted:");
    scanf("%d", &number);

    if (number == head->data)
    {
        helper = head;
        head = head->next;
        free(helper);
        return;
    }

    helper = head;
    while (helper->next != NULL && helper->next->data != number)
    {
        helper = helper->next;
    }
    if (helper->next == NULL)
    {
        printf("Element not found\n");
    }
    temp = helper->next;
    helper->next = helper->next->next;
    free(temp);
}

void display()
{
    if (head == NULL)
    {
        printf("Linked list is EMPTY\n");
        return;
    }
    struct ll_node *helper;
    helper = head;
    printf("Elements in the linked list are :\n");
    while (helper != NULL)
    {
        printf("%d\t", helper->data);
        helper = helper->next;
    }
}

int main()
{
    printf("Welcome to Linked List DS Operations\n");

    do
    {
        int choice = options();

        switch (choice)
        {
        case 1:
            insert();
            break;

        case 2:
            deletenode();
            break;

        case 3:
            display();
            break;

        case 4:
            exit(0);
            break;

        default:
            printf("INVALID INPUT\n");
            break;
        }
    } while (1);
}