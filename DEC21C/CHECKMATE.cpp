// Author: Harsh Varmora
// Problem Link: https://www.codechef.com/DEC21C/problems/CHECKMATE
// Date: 7 December,2021

#include<bits/stdc++.h>
using namespace std; 

int main() {
	int t;
	cin>>t;

	while(t--){
        // xking = x axis of king's position
        // yking = y axis of king's position

        // x1 = x axis of first rook's position
        // y1 = y axis of first rook's position

        // x2 = x axis of second rook's position
        // y2 = y axis of second rook's position

	    int xking, yking;
	    cin>>xking>>yking;

	    int x1, y1;
	    cin>>x1>>y1;
        
	    int x2, y2;
	    cin>>x2>>y2;
	    
	    string ans = "NO";
	    
        // We can kill a king in one step only and only if king is on the end column and end row in the board
        if(!(xking == 1 || xking == 8 || yking == 1 || yking == 8)){
            ans = "NO"; // hence, if king is not on the end row and end column, simply ans is "NO"
        }
        // If king is in the end row and end column
        else{
            if (xking == 1){
                if((x1 == 2 || x2 == 2) && (y1 != y2)){ // we will keep one rook in adjacent column so king can't move in that column, and we will attack king's coulumn with the help of other rook present in another column then adjacent column
                    if(abs(y1 - yking) > 1 && abs(y2 - yking) > 1){ // here abs(y1 - yking) > 1, which means king is 1 or more step far from rooks, so the king will not be able to kill the rooks
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
            
            // here we have used if bec king can be in 1st row and 1st column at the same time, and also in 8th row and 8th column at the same time
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