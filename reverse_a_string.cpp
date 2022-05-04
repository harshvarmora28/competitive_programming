// Author: Harsh Varmora
// Problem Link: https://practice.geeksforgeeks.org/problems/reverse-a-string/1#
// Date: 13 November,2021


#include<bits/stdc++.h>
using namespace std;


string reverseWord(string str);


int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	string s;
	cin >> s;
	
	cout << reverseWord(s) << endl;
	}
	return 0;
	
}
// } Driver Code Ends


//User function Template for C++

string reverseWord(string str){
  string str_rev;
  
  for(int i = str.size() - 1; i >= 0; i--){
      str_rev.push_back(str[i]);
  }
  cout<<str_rev;
  return str_rev;
};