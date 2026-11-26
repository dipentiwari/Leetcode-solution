class Solution {
public:

    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        vector<vector<int>> dp(n,vector<int> (amount+1));
        for(int i=0;i<n;i++){
            for(int j=0;j<amount+1;j++){
                if(i==0){
                    if(j%coins[0]==0) dp[i][j]=j/coins[0];
                    else dp[i][j]=100000;
                }
                else{
                    int nt=0+dp[i-1][j];
                    int take=100000;
                    if(coins[i]<=j)
                    take=1+dp[i][j-coins[i]];
                    dp[i][j]=min(take,nt);
                }
            }
        }
        if(dp[n-1][amount]==100000) return -1;
        else 
        return dp[n-1][amount];
    }
};