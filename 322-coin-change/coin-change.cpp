class Solution {
public:
    int solve(int i,vector<int> &coins,int amount,vector<vector<int>> &dp){
        if(i==0){
            if(amount%coins[0]==0) return dp[0][amount]= amount/coins[0];
            else return dp[0][amount] = 100000;
        }
        if(dp[i][amount]!=-1) return dp[i][amount];
        int nt=solve(i-1,coins,amount,dp);
        int take=INT_MAX;
        if(coins[i]<=amount){
            take=1+solve(i,coins,amount-coins[i],dp);
        }
        return dp[i][amount]=min(take,nt);
        
    }
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        vector<vector<int>> dp(n,vector<int> (amount+1,-1));
        long x=solve(n-1,coins,amount,dp);
        if(x==100000) return -1;
        else return x;
    }
};