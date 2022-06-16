// Author: Harsh Varmora
// Purpose: Star Pattern 11
// Date: 23 December,2021

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    char value = 'A';

    cin>>n;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cout<<value<<" ";
            value++;
        }
        cout<<endl;
    }    

    return 0;
}