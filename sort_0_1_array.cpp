// Author: Harsh Varmora
// Purpose: Sorting an array with 0's and 1's with two pointer approach
// Date: 31 January,2022

#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void sortOne(int arr[], int size){
    int left = 0, right = size - 1;

    while(left <= right){
        while(arr[left] == 0){
            left++;
        }

        while(arr[right] == 1){
            right--;
        }

        if(left < right){
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }

}

int main(){
    int arr[8] = {1, 1, 0, 0, 0, 0, 1, 0};

    sortOne(arr, 8);
    printArray(arr, 8);

    return 0;
}