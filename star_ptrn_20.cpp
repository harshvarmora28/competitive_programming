// Author: Harsh Varmora
// Purpose: Star Pattern 20
// Date: 25 December,2021

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;

    cin>>n;

    for(int i = 1; i <= n; i++){
        int value = 1;
        for(int j = n - i + 1; j >= 1; j--){
            cout<<value;
            value++;
        }
        for(int k = 1; k <= i - 1; k++){
            cout<<"*";
        }
        for(int k = 1; k <= i - 1; k++){
            cout<<"*";
        }
        for(int l = n - i + 1; l >= 1; l--){
            cout<<l;
        }
        cout<<endl;
    }

    return 0;
}