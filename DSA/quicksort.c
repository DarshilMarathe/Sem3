#include <stdio.h>

int partition(int arr[], int low, int high)
{
    int p = arr[low];
    int l = low +1, h = high;
    int swap;
    while (l < h)
    {
        // 12, 34, 5, 3, 2, 21, 0
        while (l < high && arr[l] < p)
        {
            l++;
        }
        while (h > low && arr[h] > p)
        {
            h--;
        }
        if (l < h)
        {
            // swap;
            swap = arr[l];
            arr[l] = arr[h];
            arr[h] = swap;
        }
    }
    arr[low] = arr[h];
    arr[h] = p;
    return h;
}


void quicksort(int arr[], int low, int high)
{
    if (low < high)
    {
        int p = partition(arr, low, high);
        quicksort(arr, low, p - 1);
        quicksort(arr, p + 1, high);
    }
}


void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{

    int arr[] = {12, 34, 5, 3, 2, 21, 0};
    int size = 7;
    int low = 0;
    int high = 6;

    quicksort(arr, low, size - 1);
    display(arr, size);

    return 0;
}