// Author: Harsh Varmora
// Purpose: Star Pattern 3
// Date: 23 December,2021

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int count = 1;

    cin>>n;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;   
    }

    return 0;
}