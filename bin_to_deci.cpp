// Author: Harsh Varmora
// Purpose: Binary to Decimal Conversion
// Date: 28 December,2021

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int ans = 0, i = 0;

    cin>>n;

    while(n != 0){
        int lastDigit = n % 10;

        if(lastDigit == 1){
            ans += pow(2, i);
        }

        n /= 10;
        i++;
    }
    cout<<ans<<endl;

    return 0;
}