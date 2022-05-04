// Author: Harsh Varmora
// Problem Link: https://www.codechef.com/DEC21C/problems/VANDH
// Date: 6 December,2021

#include<bits/stdc++.h>
using namespace std;

void func(){
    int n, m; // where, n = hills, m = valleys
    cin>>n>>m;

    string x = "";
    string y = "";

    for(int i = 0; i < min(n, m); i++){
        x += "01";
        y += "10";
    }
    
    if(n == m){
        x += "01";
        cout<<x.size()<<endl;
        cout<<x<<endl;
    }
    else{
        int k = max(n, m);

        // if n (hills) are more
        if(k == n){
            int c = n - m;

            for(int i = 0; i < c; i++){
                x += "010"; // this way we can print more hills in shorter length
            }

            cout<<x.size()<<endl;
            cout<<x<<endl;
        }

        // if m (valleys) are more
        if(k == m){
            int c = m - n;

            for(int i = 0; i < c; i++){
                y += "101"; // this way we can print more valleys in shorter length
            }

            cout<<y.size()<<endl;
            cout<<y<<endl;
        }
    }
}

int main(){
    int t;
    cin>>t;

    while(t--){
        func();
    }
    
    return 0;
}