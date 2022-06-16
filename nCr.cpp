// Author: Harsh Varmora
// Purpose: Problem which gives nCr
// Date: 6 January,2022

#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
    int fact = 1;

    for(int i = 1; i <= n; i++){
        fact *= i;
    }

    return fact;
}

int nCr(int n, int r){
    int num = factorial(n);

    int denom = factorial(r) * factorial(n - r);

    return num/denom;
}

int main(){
    int n, r;

    cin>>n>>r;

    cout<<n<<"C"<<r<<" is "<<nCr(n, r)<<endl;

    return 0;
}
