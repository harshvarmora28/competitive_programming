#include<stdio.h>
#include<stdlib.h>
void bubblesort(int *arr,int length){
    int temp;
    for(int i=0;i<=length-1;i++){
        for(int j=0;j<length-1-i;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }

    }

}

 void display(int *arr ,int size){
    for (int i = 0; i < size; i++)
        printf("%d ",arr[i]);
    }

int main(){
   
    int length;
    printf("enter the number of players: ");
    scanf("%d", &length);
    int *arr = (int *)malloc(length*sizeof(int));
    // int *arr = (int *)malloc(length*sizeof(int));

    printf("enter the score of players: \n");
    
    for(int i=0;i<length;i++){
        scanf("%d", &arr[i]);
    }
    printf("Given score of the players are:  \n");
    display(arr, length);
    bubblesort(arr,length);

    printf("\nPlayer's score in accending order is : \n");
    display(arr, length);
    return 0;
}