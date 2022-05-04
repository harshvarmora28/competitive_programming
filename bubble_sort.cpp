// Author: Harsh Varmora
// Purpose: Sorting an array using bubble sort algorithm
// Date: 4 May,2022

#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int n, int *arr){
    // For round 1 to n - 1
    for(int i = 1; i < n; i++)
        // Process elements till (n - i)th index
        for(int j = 0; j < n - i; j++)
            if(arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
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

    bubbleSort(n, arr);

    // Printing the sorted array
    for(int i = 0; i < n; i++)
        cout<<arr[i]<<" ";
    cout<<endl;

    return 0;
}