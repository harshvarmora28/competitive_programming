// Author: Harsh Varmora
// Purpose: Applying linear search on an array
// Date: 11 January,2022

#include<bits/stdc++.h>
using namespace std;

bool search(int arr[], int size, int key){
    for(int i = 0; i < size; i++){
        if(arr[i] == key){
            return 1;
        }
    }
    return 0;
}

int main(){
    int arr[10] = {2, -3, 23, 12, 94, -34, 2, 1, 0, 57};

    cout<<"Enter the element to search for: ";

    int key;

    cin>>key;

    bool found = search(arr, 10, key);

    if(found){
        cout<<"Key is present!"<<endl;
    }
    else{
        cout<<"Key is absent!"<<endl;
    }


    return 0;
}