// Author: Harsh Varmora
// Problem Link: https://www.hackerearth.com/practice/data-structures/arrays/multi-dimensional/practice-problems/algorithm/roy-and-symmetric-logos-1/
// Date: 23 November,2021

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n;
    
    cin>>t;
    while(t--){
        cin>>n;
        string arr[n];

        for(int i = 0; i < n; i++){
            cin>>arr[i];
        }

        bool rowf = true, colf = true;

        for(int i = 0; i < n; i++){
            bool flag = true;
            for(int j = 0; j < n/2; j++){
                if(arr[i][j] != arr[i][n-1-j]){
                    flag = false;
                    break;
                }
            }

            if(!flag){
                rowf = false;
                break;
            }
        }

        for(int i = 0; i < n; i++){
            bool flag = true;
            for(int j = 0; j < n/2; j++){
                if(arr[j][i] != arr[n-1-j][i]){
                    flag = false;
                    break;
                }
            }

            if(!flag){
                colf = false;
                break;
            }
        }

        if(rowf && colf){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}
