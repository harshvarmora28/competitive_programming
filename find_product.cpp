// Author: Harsh Varmora
// Problem Link: https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/find-product/
// Date: 10 November,2021

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    long int arr[1000];
    int product=1;

    for(int i = 0; i < n; i++){
        cin>>arr[i];
        product = (product * arr[i]) % (1000000007);
    }

    cout<<product;

    return 0;
}