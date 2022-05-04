#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void merge(int *arr,int low,int mid,int high){
    int i,j,k;
    int l1=mid-low+1;
    int l2=high-mid;
    int FirstHalf[l1];
    int SecondHalf[l2];

    for(i=0;i<l1;i++){
        FirstHalf[i]=arr[low+i];
    }
    for(j=0;j<l2;j++){
        SecondHalf[j]=arr[mid+1+j];
    }
    i=0;
    j=0;
    k=low;
    while(i<l1&&j<l2){
        if(FirstHalf[i]<=SecondHalf[j]){
            arr[k]=FirstHalf[i];
            i++;
        }
        else{
            arr[k]=SecondHalf[j];
            j++;
        }
        k++;
     }
     while (i < l1) {
        arr[k] = FirstHalf[i];
        i++;
        k++;
    }
    while (j < l2) {
        arr[k] = SecondHalf[j];
        j++;
        k++;
    }

}

void mergesort(int *arr,int low,int high){
    if(low<high){

        int mid=(low+high) /2;

        mergesort(arr,low,mid);
        mergesort(arr,mid+1,high);
        
        merge(arr,low,mid,high);


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

    printf("enter the score of players: \n");
    
    for(int i=0;i<length;i++){
        scanf("%d", &arr[i]);
    }
    printf("Given score of the players are:  \n");
    display(arr, length);

    mergesort(arr, 0, length - 1);

    printf("\nPlayer's score in accending order is : \n");
    display(arr, length);
    return 0;

}
