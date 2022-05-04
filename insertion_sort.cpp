// Author: Harsh Varmora
// Purpose: Sorting an array using insertion sort
// Date: 3 May,2022

#include<bits/stdc++.h>
using namespace std;

void insertionSort(int n, int *arr){
    // First element is always sorted, thus (n - 1) rounds will be traversed
    for(int i = 1; i < n; i++){
        int temp = arr[i];
        int j;
        for(j = i - 1; j >= 0; j--){
            if(temp < arr[j])
                // Right shift the left part
                arr[j + 1] = arr[j];
            else
                // Nothing: already sorted
                break;
        }
        arr[j + 1] = temp;
    }
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

    insertionSort(n, arr);

    // Printing the sorted array
    for(int i = 0; i < n; i++)
        cout<<arr[i]<<" ";
    cout<<endl;

    return 0;
}