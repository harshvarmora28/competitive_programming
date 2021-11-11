// Author: Harsh Varmora
// Problem Link: https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/friends-relationship-1/
// Date: 11 November,2021

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    int n;

    cin>>t;

    while(t--){
        
    cin>>n;

    for(int i = 1; i <= n; i++){
        for(int j = 0; j < i; j++){
            cout<<"*";
        }
        for(int f = n; f > (2*i)-i; f--){
            cout<<"#";
        }
        for(int f = n; f > (2*i)-i; f--){
            cout<<"#";
        }
        for(int j = 0; j < i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
    return 0;
}