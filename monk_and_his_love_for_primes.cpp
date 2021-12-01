// Author: Harsh Varmora
// Problem Link: https://www.hackerearth.com/problem/algorithm/monk-and-his-love-for-primes/
// Date: 1 December,2021

#include<bits/stdc++.h>
using namespace std;

bool isPrime(int num){
    if(num == 1){
        return false;
    }
    for(int i = 2; i <= sqrt(num); i++){
        if(num % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    string str;
    int x = 0;

    cin>>str;

    for(int i = 0; i < str.size(); i++){
        if(str[i] >= 65 && str[i] <= 90){
            x += (int)str[i] + 32;
        }
        else if(str[i] >= 97 && str[i] <= 122){
            x -= (int)str[i] - 32;
        }
    }

    if(x < 0){
        x = abs(x);
    }

    cout<<isPrime(x)<<endl;

    return 0;
}