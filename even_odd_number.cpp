// Author: Harsh Varmora
// Purpose: Identifying whether a given number is odd or even
// Date: 6 January,2022

#include<bits/stdc++.h>
using namespace std;

bool isEven(int num){
    //odd
    if(num & 1){
        return 0;
    }
    else{
        return 1;
    }
}

int main(){
    int a;

    cin>>a;

    if(isEven(a)){
        cout<<"Even Number!"<<endl;
    }
    else{
        cout<<"Odd Number!"<<endl;
    }

    cin>>a;

    

    return 0;
}