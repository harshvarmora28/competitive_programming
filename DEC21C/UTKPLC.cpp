// Author: Harsh Varmora
// Problem Link: https://www.codechef.com/DEC21C/problems/UTKPLC
// Date: 6 December,2021

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    char first, second, third, x, y;

    while(t--){
        cin>>first>>second>>third;
        cin>>x>>y;
        
        if(x == first && y == second){
            cout<<x<<endl;
        }
        else if(x == first && y == third){
            cout<<x<<endl;
        }
        else if(x == second && y == first){
            cout<<y<<endl;
        }
        else if(x == second && y == third){
            cout<<x<<endl;
        }
        else if(x == third && y == first){
            cout<<y<<endl;
        }
        else if(x == third && y == second){
            cout<<y<<endl;
        }
    }


    return 0;
}