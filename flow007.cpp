// Author: Harsh Varmora
// Problem Link: https://www.codechef.com/LRNDSA01/problems/FLOW007
// Date: 4 November,2021

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n;

    cin>>t;
    while(t--){
        cin>>n;
        bool leadingZero = true;

        while(n > 0){
            if(n%10==0 && leadingZero){
                n/=10;
                continue;
            }
            leadingZero = false;
            cout<<n%10;
            n/=10;
        }
        cout<<endl;
    }


    return 0;
}