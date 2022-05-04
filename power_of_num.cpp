// Author: Harsh Varmora
// Purpose: Calculating Power of numbers a ^ b
// Date: 6 January,2022

#include<bits/stdc++.h>
using namespace std;

int power(int num1, int num2){
    int ans = 1;

    for(int i = 1; i <= num2; i++){
        ans *= num1;
    }

    return ans;
}

int main(){
    int a, b;

    cin>>a>>b;

    int result = power(a, b);

    cout<<"Answer: "<<result<<endl;

    return 0;
}