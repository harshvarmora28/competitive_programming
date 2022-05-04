// Author: Harsh Varmora
// Purpose: Checking whether a given number is prime or not
// Date: 6 January,2022

#include<bits/stdc++.h>
using namespace std;

bool isPrime(int num){
    for(int i = 2; i < num; i++){
        if(num % i == 0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int n;

    cin>>n;

    if(isPrime(n)){
        cout<<n<<" is a prime number";
    }
    else{
        cout<<n<<" is not a prime number";
    }

    return 0;
}