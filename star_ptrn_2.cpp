// Author: Harsh Varmora
// Purpose: Start Pattern 2
// Date: 23 December,2021

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;

    cin>>n;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cout<<n - j + 1;
        }
        cout<<endl;
    }

    return 0;
}