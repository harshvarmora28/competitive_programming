// Author: Harsh Varmora
// Purpose: Star Pattern 15
// Date: 24 December,2021

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;

    cin>>n;

    for(int i = 1; i <= n; i++){
        char value = 'A' + n - i;
        for(int j = 1; j <= i; j++){
            cout<<value<<" ";
            value++;
        }
        cout<<endl;
    }

    return 0;
}