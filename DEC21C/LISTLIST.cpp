// Author: Harsh Varmora
// Problem Link: https://www.codechef.com/DEC21C/problems/LISTLIST
// Date: 6 December,2021

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    
    cin>>t;

    while(t--){
        int n, high = -1;

        cin>>n;
        map<int, int> count;
        
        for(int i = 0; i < n; i++){
            int temp;
            cin>>temp;
            count[temp]++;
        }

        for(auto x: count){
            if(high < x.second){
                high = x.second;
            }
        }

        if(high == n){
            cout<<"0"<<endl;
        }
        else if(high <= 1 && n >= 2){
            cout<<"-1"<<endl;
        }
        else{
            cout<<(n - high + 1)<<endl;
        }
    }

    return 0;
}