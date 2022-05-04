// Author: Harsh Varmora
// Purpose: To print fibonacci series till given integer
// Date: 2 May,2022

#include<bits/stdc++.h>
using namespace std;

int main(){
    int num1 = 0, num2 = 1, num3, lastNum;
    cout<<"Enter the number of element: ";
    cin>>lastNum;
    cout<<num1<<", "<<num2<<", ";
    for(int i = 2; i < lastNum; i++){
        num3 = num1 + num2;
        cout<<num3<<", ";
        num1 = num2;
        num2 = num3;
    }
    return 0;
}