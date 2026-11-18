class Solution {
public:
    bool threeFibonacciSum(int n) {
        long long dp[3];
        if(n<=1) return false;
        dp[0]=0;
        dp[1]=1;
        for(int i=1;i<=n;i++){
            dp[2]=dp[0]+dp[1];
            long long sum=(long long)dp[0]+(long long)dp[1]+(long long)dp[2];
            if(sum==n) return true;
            if(sum>n) return false;
            dp[0]=dp[1];
            dp[1]=dp[2];
        }
        return false;
    }
};