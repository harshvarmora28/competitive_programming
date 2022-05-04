// Author: Harsh Varmora
// Purpose: Star Pattern 19
// Date: 25 December,2021

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;

    cin>>n;

    for(int i = 1; i <= n; i++){
        for(int j = n - i; j >= 1; j--){
            cout<<" ";
        }
        for(int k = 1; k <= i; k++){
            cout<<k;
        }
        int value = i;
        for(int l = 1; l <= i - 1; l++){
            cout<<value - 1;
            value--;
        }
        cout<<endl;
    }

    return 0;
}