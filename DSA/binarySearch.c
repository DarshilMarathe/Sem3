#include<stdio.h>

int binarysearch(int arr[] , int length , int number)
{
    int low =0 , high = length-1 , middle ;
//check = aayega kya
    while(low<high)
    {
        middle = (low + high)/2;
        if(arr[middle] == number){
            printf("FOund the number at %d",middle);
            return 1;
        }
        else if(arr[middle] < number){
            low= middle + 1;
        }
        else  //(arr[middle] > number)
        {
            high = middle - 1;
        }
    }

    printf("\nValue not found");
    return 0;

}

int main()
{
    int arr[]={4,6,45,76,85,98,103};
    int length= sizeof(arr)/4;


    binarysearch(arr,length , 98);
    

    return 0;
}
