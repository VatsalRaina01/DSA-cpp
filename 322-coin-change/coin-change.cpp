class Solution {
public:

    int solve(vector<int>& coins, int amount,int n,vector<vector<int>> &dp){
        if(amount==0) return 0;

        if(n==0) return INT_MAX-1;

        if(dp[amount][n]!=-1){
            return dp[amount][n];
        }
        if((amount-coins[n-1])>=0){
            return dp[amount][n]=min(solve(coins,amount-coins[n-1],n,dp)+1,solve(coins,amount,n-1,dp));
        }else{
           return dp[amount][n]=solve(coins,amount,n-1,dp);
        }
        return 0;
        }
    
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        vector<vector<int>> dp(amount+1,vector<int>(n+1,-1));
        int s=solve(coins,amount,n,dp);
        if(s==INT_MAX-1){
            return -1;
        }else{
            return s;
        }
    }
};