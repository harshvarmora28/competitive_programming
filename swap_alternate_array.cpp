// Author: Harsh Varmora
// Purpose: Swap alternate element of an array
// Date: 30 January,2022

#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void swapAlternate(int arr[], int size){
    for(int i = 0; i < size; i += 2){
        if(i + 1 < size){
            swap(arr[i], arr[i + 1]);
        }
    }
}

int main(){
    int even[6] = {23, 1, 0, 4, 39, 95};
    int odd[5] = {45, 2, 65, 8, 45};

    swapAlternate(even, 6);
    printArray(even, 6);

    swapAlternate(odd, 5);
    printArray(odd, 5);


    return 0;
}