// Author: Harsh Varmora
// Problem Link: https://www.hackerrank.com/challenges/fizzbuzz/problem
// Date: 10 November,2021

#include<iostream>
using namespace std;

int main(void) {
  long long int n;
  cin >> n;
  if (n%2) cout << 0;
  else cout << (n/2 -1)/2;
  return 0;
}