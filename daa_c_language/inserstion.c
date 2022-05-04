#include<stdio.h>
#include<stdlib.h>
void inserstionsort(int *arr, int size){
    int key;
    int j;
    for(int i=1;i<=size-1;i++){
        key=arr[i];
        j=i-1;

        while(j>=0&&arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
    

}
void display(int *arr ,int size)
{
    for (int i = 0; i < size; i++)
        printf("%d ",arr[i]);
}
int main(){
    int length;
    printf("enter the number of players: ");
    scanf("%d", &length);
    int *arr = (int *)malloc(length*sizeof(int));
    // int *arr = (int *)malloc(length*sizeof(int));
    // int arr[length];
    printf("enter the score of players: \n");
    
    for(int i=0;i<length;i++){
        scanf("%d", &arr[i]);
    }
    printf("Given score of the players are:  \n");
    display(arr, length);
    inserstionsort(arr,length);

    printf("\nPlayer's score in accending order is : \n");
    display(arr, length);
    return 0;
}