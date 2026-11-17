class Solution {
public:
    bool prefectnum(int n){
        int sq=(int) sqrt(n);
        return sq*sq==n;
    }
    int minsq(int n,vector<int> &dp){
        if(prefectnum(n)) return 1;
        if(dp[n]!=-1) return dp[n];
        int mn=INT_MAX;
        for(int i=1;i*i<=n;i++){
            int count=minsq((i*i),dp)+minsq(n-(i*i),dp);
            mn=min(mn,count);
         } 
        return dp[n]=mn;
    }
    int numSquares(int n) {
        vector<int> dp(n+1,-1);
        return minsq(n,dp);
    }
};