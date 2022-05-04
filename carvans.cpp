// Author: Harsh Varmora
// Problem Link: https://www.codechef.com/LRNDSA01/problems/CARVANS
// Date: 26 November,2021

#include <iostream>
using namespace std;

int main() {
	int t, n, s;
	
	cin>>t;
	
	while(t--){
	    int ans = 0, prev = 0;
	    cin>>n;
	    for(int i = 0; i < n; i++){
	        cin>>s;
	        
	        if(i == 0){
	            ans++;
	            prev = s;
	        }
	        else if(s <= prev){
	            ans++;
	            prev = s;
	        }
	    }
	    cout<<ans<<endl;
	}
	
	
	return 0;
}
