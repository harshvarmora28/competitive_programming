// Author: Harsh Varmora
// Problem Link: https://www.codechef.com/DEC21C/problems/CHECKMATE
// Date: 7 December,2021

#include<bits/stdc++.h>
using namespace std; 

int main() {
	int t;
	cin>>t;

	while(t--){
	    int xking, yking;
	    cin>>xking>>yking;

	    int x1, y1;
	    cin>>x1>>y1;
        
	    int x2, y2;
	    cin>>x2>>y2;
	    
	    string ans = "NO";
	    
        if(!(xking == 1 || xking == 8 || yking == 1 || yking == 8)){
            ans = "NO";
        }
        else{
            if (xking == 1){
                if((x1 == 2 || x2 == 2) && (y1 != y2)){
                    if(abs(y1 - yking) > 1 && abs(y2 - yking) > 1){
                        ans = "YES";
                    } 
                }
            }
            else if(xking == 8){
                if((x1 == 7 || x2 == 7) && (y1 != y2)){
                    if(abs(y1 - yking) > 1 && abs(y2 - yking) > 1){
                        ans = "YES";
                    }
                }
            }
            if(yking == 1){
                if ((y1 == 2 || y2 == 2) && (x1 != x2)){
                    if(abs(x1 - xking) > 1 && abs(x2 - xking) > 1){
                        ans = "YES";
                    }
                }
            }
            else if(yking == 8){
                if ((y1 == 7 || y2 == 7) && (x1 != x2)){
                    if(abs(x1 - xking) > 1 && abs(x2 - xking) > 1){
                        ans = "YES";
                    }
                }
            }
        }

	    cout<<ans<<endl;
	}


	return 0;
}