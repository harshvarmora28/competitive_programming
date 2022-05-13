// Author: Harsh Varmora
// Purpose: Printing the address of the array element
// Date: 13 May,2022

#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[10];
    // cout<<"Address of the first element of the array is "<<arr;
    // int *ptr = &arr[0];
    // This will print the size of the whole array
    // cout<<sizeof(arr)<<endl;
    // This will print the size of the first element of the array
    // cout<<sizeof(ptr)<<endl;

    int arr2[10] = {23, 34, 64};
    int *ptr2 = &arr2[0];
    // It will give an error because we cannot change the value in symbol table
    // arr2 = arr2 + 1;
    cout<<ptr2<<endl;
    ptr2 = ptr2 + 1;
    cout<<ptr2<<endl;
    cout<<*ptr2<<endl;
    cout<<&ptr2<<endl;


    return 0;
}