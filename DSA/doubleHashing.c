#include <stdio.h>
#include <stdlib.h>


int options()
{
    int choice;
    printf("\n1.Insert \t2.Display \t3.Exit  \nEnter the choice: ");
    scanf("%d", &choice);
    return choice;
}

void display(int arr[], int m)
{
    for (int i = 0; i < m; i++)
    {
        printf("%d\t", i);
    }
    printf("\n");

    for (int i = 0; i < m; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}
 
void insert(int arr[], int m)
{
    int num;
    printf("enter number to insert:");
    scanf("%d", &num);
    int h_index = num % m;
    
    if (arr[h_index] == -1)
    {
        arr[h_index] = num;
        return;
    }

    for (int j = 0; j < m; j++)
    {
        int h_index2 = (h_index + j * (1 + ((num / m) % (m - 1)))) % m;
        if (arr[h_index2] == -1)
        {
            arr[h_index2] = num;
            return;
        }
    }

    printf("Cannot insert \n");
}

int main()
{

    int m;
    printf("Array Size:");
    scanf("%d", &m);
    int arr[m];

    for (int i = 0; i < m; i++)
    {
        arr[i] = -1;
    }

    int val;
    printf("Welcome to Double Hashing DS Operations\n");

    do
    {
        int choice = options();

        switch (choice)
        {
        case 1:
            insert(arr, m);
            break;

        case 2:
            display(arr, m);
            break;

        case 3:
            exit(0);
            break;

        default:
            printf("INVALID INPUT\n");
            break;
        }
    } while (1);

    return 0;
}