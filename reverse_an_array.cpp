// Author: Harsh Varmora
// Purpose: Reverse an array
// Date: 11 January,2022

#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void reverse(int arr[], int size){
    int start = 0;
    int end = size - 1;

    while(start <= end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main(){
    int arr[6] = {3, 2, 5, 6, 1, 9};
    int arr_2[3] = {0, 1, 2};

    reverse(arr, 6);
    reverse(arr_2, 3);

    printArray(arr, 6);
    printArray(arr_2, 3);

    
    return 0;
}