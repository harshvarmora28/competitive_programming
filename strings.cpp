// Author: Harsh Varmora
// Problem Link: https://www.hackerrank.com/challenges/c-tutorial-strings/problem
// Date: 13 November,2021

#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1;
    string str2;
    
    cin>>str1;
    cin>>str2;
    
    cout<<str1.size()<<" "<<str2.size()<<endl;
    cout<<str1 + str2<<endl;
    swap(str1[0], str2[0]);
    cout<<str1<<" "<<str2;
    
  
    return 0;
}