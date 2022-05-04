// Author: Harsh Varmora
// Purpose: Sorting an array using quick sort recursively
// Date: 3 May,2022

#include<bits/stdc++.h>
using namespace std;

int partition(int arr[], int start, int end){
    // pivot: take one element as pivot, then count all the elements lesser than pivot, then update pivotIndex to start + count
    int pivot = arr[start];
    // count: the number of elements smaller than pivot in the right side of the pivot
    int count = 0;
    // updating the count variable with its original value
    for(int i = start + 1; i <= end; i++)
        if(arr[i] <= pivot)
            count++;
    // Place the pivot at its correct position
    int pivotIndex = start + count;
    swap(arr[pivotIndex], arr[start]);
    // Now, check if left part of array contains any element greater than pivot or right part of array contains any element lesser than pivot, then swap them
    int i = start, j = end;
    // Terminate the loop when i and j equals pivot
    while(i < pivotIndex && j > pivotIndex){
        while(arr[i] < pivot)
            i++;
        while(arr[j] > pivot)
            j--;
        // Swap them
        if(i < pivotIndex && j > pivotIndex)
            swap(arr[i++], arr[j--]);
    }    
    return pivotIndex;
}

void quickSort(int arr[], int start, int end){
    // Base case: if zero elements or only one element is present in the array, then we can say that the array is already sorted
    if(start >= end)
        return;
    // Partition
    int p = partition(arr, start, end);
    // Sort the left part of the array
    quickSort(arr, start, p - 1);
    // Sort the right part of the array
    quickSort(arr, p + 1, end);
}

int main(){
    int n;
    cout<<"Enter the length of an array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of an array: ";
    
    // Taking input of array elements
    for(int i = 0; i < n; i++)
        cin>>arr[i];

    quickSort(arr, 0, n - 1);

    // Printing an sorted array
    for(int i = 0; i < n; i++)
        cout<<arr[i]<<" ";
    cout<<endl;

    return 0;
}