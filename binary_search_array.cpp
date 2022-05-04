// Author: Harsh Varmora
// Purpose: Searching element in an array using binary search algorithm
// Date: 3 January,2022

#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    while(start <= end){

        if(arr[mid] == key){
            return mid;
        }
        // Go to the right part of the array
        else if(key > arr[mid]){
            start = mid + 1;
        }
        // Go to the left part of the array
        else if(key < arr[mid]){
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }

    return -1;
}

int main(){
    int arr1[5] = {1, 3, 5, 10, 17};
    int arr2[4] = {0, 3, 11, 16};

    int ans = binarySearch(arr1, 5, 17);
    // int ans = binarySearch(arr2, 4, 10);

    cout<<"The index of 17 is "<<ans;

    return 0;
}