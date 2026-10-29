class Solution {
public:
    int minPathSum(vector<vector<int>>& arr) {
        int m=arr.size();
        int n=arr[0].size();
        int dp[m][n];
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i==0 && j==0) dp[i][j]=arr[i][j];
                else if(i==0) dp[i][j]=arr[i][j]+dp[i][j-1];
                else if(j==0) dp[i][j]=arr[i][j]+dp[i-1][j];
                else{
                    dp[i][j]=arr[i][j]+min(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        return dp[m-1][n-1];
    }
};