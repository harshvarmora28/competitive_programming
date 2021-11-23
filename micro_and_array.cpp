// Author: Harsh Varmora
// Problem Link: https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/micro-and-array-update/
// Date: 23 November,2021

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n, k, res, ans;
    cin>>t;

    while(t--){
        cin>>n>>k;
        int arr[n];

        for(int i = 0; i < n; i++){
            cin>>arr[i];
        }

        res = arr[0];
        for(int i = 1; i < n; i++){
            res = min(res, arr[i]);
        }

		if(k > res){
			ans = k - res;
		}
		else{
			ans = 0;
		}
        cout<<ans<<endl;
    }


    return 0;
}