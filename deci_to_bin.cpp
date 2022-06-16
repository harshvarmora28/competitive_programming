// Author: Harsh Varmora
// Purpose: Decimal to Binary Conversion
// Date: 27 December,2021

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int ans = 0;
    int i = 0;

    cin>>n;

    while(n != 0){
        int bit = n & 1;

        ans = (bit * pow(10, i)) + ans;

        n = n >> 1;
        i++;
    }

    // cout<<"Binary of "<<n<<" is "<<ans;
    cout<<ans;

    return 0;
}