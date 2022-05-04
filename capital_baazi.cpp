// Author: Harsh Varmora
// Problem Link: https://www.hackerearth.com/problem/algorithm/capitalbaazi/
// Date: 30 November,2021

#include<bits/stdc++.h>
using namespace std;

int main(){
	string str;

	getline(cin, str);

	for(int i = 0; i < str.size(); i++){
		if(str[i] == ' '){
			cout<<endl;
		}
		else{
			putchar(toupper(str[i]));
		}
	}

	return 0;
}