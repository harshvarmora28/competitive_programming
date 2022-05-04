// Author: Harsh Varmora
// Purpose: Mini Calculator using switch case statements
// Date: 6 January,2022

#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b;

    cout<<"Enter the value of a: ";
    cin>>a;

    cout<<"Enter the value of b: ";
    cin>>b;

    char op;

    cout<<"Enter the operation you want to perform: ";
    cin>>op;

    switch (op)
    {
    case '+':
        cout<<(a + b)<<endl;
        break;
    case '-':
        cout<<(a - b)<<endl;
        break;
    case '*':
        cout<<(a * b)<<endl;
        break;
    case '/':
        cout<<(a / b)<<endl;
        break;
    case '%':
        cout<<(a % b)<<endl;
        break;
    
    default:
        cout<<"Please enter a valid operation!"<<endl;
        break;
    }

    return 0;
}