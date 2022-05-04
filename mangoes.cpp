// Author: Harsh Varmora
// Problem Link: https://www.hackerearth.com/problem/algorithm/mangoes/
// Date: 7 November,2021

#include<iostream>
using namespace std;

int main(){
    int w;
    
    cin>>w;

    if(w%2==0 && w>2){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }


    return 0;
}