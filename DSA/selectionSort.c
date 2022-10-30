#include <stdio.h>

void insertarray(int arr[], int size)
{
    printf("Enter the elements in array :\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
}


void selectionsort(int arr[], int size)
{
    int temp;
    for(int i= 0 ; i<size ; i++)
    {
        int min_index = i;
        
        for(int j=i+1 ; j<size ; j++)
        {
            if(arr[j]<arr[min_index])
            {
                min_index=j;
            }
        }

        temp=arr[min_index];
        arr[min_index]=arr[i];
        arr[i]=temp;
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
    printf("Welcome to Selection Sort Program:\n");

    int size;
    printf("Enter the size of array:");
    scanf("%d", &size);
    int arr[size];

    insertarray(arr, size);

    selectionsort(arr, size);

    displayarray(arr, size);

    return 0;
}