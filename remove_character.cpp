// Author: Harsh Varmora
// Problem Link: 
// Date: 15 November,2021

#include<bits/stdc++.h>
using namespace std;


class Solution {
  public:
    string removeChars(string string1, string string2) {
        for(int i = 0; i < string1.length(); i++){
            for(int j = 0; j < string2.length(); j++){
                if(string1[i] == string2[j]){
                    string1[i] = '\0';
                }
                else{
                    continue;
                }
            }
        }

        
        return string1;
        
    }
};


int main() {
    int t;
    cin >> t;
    while (t--) {
        string string1,string2;
        cin >> string1; 
        cin >> string2;
        Solution ob;
        cout << ob.removeChars(string1,string2) << endl;
    }


    return 0;
}