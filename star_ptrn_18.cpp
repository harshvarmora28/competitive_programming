// Author: Harsh Varmora
// Purpose: Star Pattern 18
// Date: 24 December,2021

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;

    cin>>n;

    for(int i = 1; i <= n; i++){
        for(int j = i - 1; j >= 1; j--){
            cout<<" ";
        }
        for(int k = n - i + 1; k >= 1; k--){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}