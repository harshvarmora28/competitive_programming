#include <bits/stdc++.h>
using namespace std;
int coins[]={1,2,3,4,5};
int dp[1000]={0};



int mincoins(int sum, int total_coins){
    for(int i=0;i<=sum;i++){
        dp[i]=INT_MAX;
    }
dp[0]=0;
for (int i = 0; i <= sum; i++)
{
    for (int j = 0; j <= total_coins; j++)
    {
        if(coins[j]<=i){
            dp[i]=min(dp[i], 1+dp[i-coins[j]]);
        }
    }
    
}
return dp[sum];

}



int main() {
    // make change of 50
    // int sum = 43;
    int x;
    cout << "enter the number: ";
    cin >> x;

    // total coins given initially, which are defined above in the function
    int total_coins = 5;
  
  cout << "minimum coins required is ";
  cout << mincoins(x,total_coins);
}

