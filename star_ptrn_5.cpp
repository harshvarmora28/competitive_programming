// Author: Harsh Varmora
// Purpose: Star Pattern 5
// Date: 23 December,2021

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;

    cin>>n;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }

    return 0;
}