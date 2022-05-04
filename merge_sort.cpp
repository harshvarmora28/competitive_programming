// Author: Harsh Varmora
// Purpose: Sorting an array using merge sort recursively
// Date: 2 May,2022

#include<bits/stdc++.h>
using namespace std;

void merge(int *arr, int start, int end){
    int mid = start + (end - start) / 2;
    // Length of the left part of the array
    int len1 = mid - start + 1;
    // Length of the right part of the array
    int len2 = end - mid;

    // Declare two dynamic arrays for copying the left and right part of the original array into the new arrays respectively
    // imp: here we have used dynamic arrays, because we don't know length of the array at the time of declaring
    int *first = new int[len1];
    int *second = new int[len2];

    // Copy left part into new array named first
    int k = start;
    for(int i = 0; i < len1; i++)
        first[i] = arr[k++];
    
    // Copy right part into new array named second
    k = mid + 1;
    for(int i = 0; i < len2; i++)
        second[i] = arr[k++];

    // Merge two sorted array
    int index1 = 0, index2 = 0;
    k = start;
    while(index1 < len1 && index2 < len2){
        if(first[index1] < second[index2])
            arr[k++] = first[index1++];
        else
            arr[k++] = second[index2++];
    }
    while(index1 < len1){
        arr[k++] = first[index1++];
    }
    while(index2 < len2){
        arr[k++] = second[index2++];
    }

    // Delete the space allocated to first and second named arrays
    delete []first;
    delete []second;
}

void mergeSort(int *arr, int start, int end){
    int mid = start + (end - start) / 2;
    if(start >= end)
        return;
    // Sort the left part of the array
    mergeSort(arr, start, mid);
    // Sort the right part of the array
    mergeSort(arr, mid + 1, end);
    // Merge both left and right part into a single array
    merge(arr, start, end);
}

int main(){
    int n;
    cout<<"Enter the length of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: "<<endl;
    
    // Taking input of array elements
    for(int i = 0; i < n; i++)
        cin>>arr[i];
        
    mergeSort(arr, 0, n - 1);

    // Print the sorted array
    for(int i = 0; i < n; i++)
        cout<<arr[i]<<" ";
    cout<<endl;

    return 0;
}