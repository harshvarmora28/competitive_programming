#include <stdio.h>
#include<stdlib.h>
int partition(int *arr, int low, int high)
{
    int pivot = arr[low];
    int i = low + 1;
    int j = high;
    int temp;

    do
    {
        while (arr[i] <= pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }
        if (i < j)
        {
            temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
        }
    } while (i < j);

    temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;
 return j;
}

void quicksort(int *arr, int low, int high)
{
    if (low < high)
    {

        int partition_index;
        partition_index = partition(arr, low, high);
        quicksort(arr, low, partition_index - 1);
        quicksort(arr, partition_index + 1, high);
    }
}
void display(int *arr, int size)
{
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
}

int main()
{
    int length;
    printf("enter the number of players: ");
    scanf("%d", &length);
    int *arr = (int *)malloc(length * sizeof(int));
    // int *arr = (int *)malloc(length*sizeof(int));

    printf("enter the score of players: \n");

    for (int i = 0; i < length; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Given score of the players are:  \n");
    display(arr, length);
    quicksort(arr, 0, length - 1);
    printf("\nPlayer's score in accending order is : \n");
    display(arr,length);
}