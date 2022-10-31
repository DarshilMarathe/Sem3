#include <stdio.h>

void insertarray(int arr[], int size)
{
    printf("Enter the elements in array :\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void insertionsort(int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int key=arr[i];
        int j=i;
        while(j>0 && key<=arr[j-1])
        {
            arr[j]=arr[j-1];
            j--;
        }
        arr[j]=key;
    }
}

void displayarray(int arr[], int size)
{
    printf("The elements in array are:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    printf("Welcome to Insertion Sort Program:\n");

    int size;
    printf("Enter the size of array:");
    scanf("%d", &size);
    int arr[size];

    insertarray(arr, size);

    insertionsort(arr, size);

    displayarray(arr, size);

    return 0;
}