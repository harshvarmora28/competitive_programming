// Author: Harsh Varmora
// Problem Link: https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/mojtaba-prepares-contest-29b2a044/
// Date: 21 November,2021

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, g, p, n, arr[10][2], sum1, sum2, ans;

    cin>>t;
    while(t--){
        sum1 = sum2 = 0;

        cin>>g>>p;
        cin>>n;

        for(int i = 0; i < n; i++){
            for(int j = 0; j < 2; j++){
                cin>>arr[i][j];
            }
        }

        for(int i = 0; i < n; i++){
            if(arr[i][0] == 1){
                sum1 += g;
            }
            if(arr[i][1] == 1){
                sum1 += p;
            }
        }

        for(int i = 0; i < n; i++){
            if(arr[i][0] == 1){
                sum2 += p;
            }
            if(arr[i][1] == 1){
                sum2 += g;
            }
        }

        ans = sum1 > sum2 ? sum2 : sum1;
        cout<<ans<<endl;
    }

    return 0;
}

