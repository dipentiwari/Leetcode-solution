class Solution {
public:
    int minPathSum(vector<vector<int>>& arr) {
        int m=arr.size();
        int n=arr[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i==0 && j==0) arr[i][j]=arr[i][j];
                else if(i==0) arr[i][j]=arr[i][j]+arr[i][j-1];
                else if(j==0) arr[i][j]=arr[i][j]+arr[i-1][j];
                else{
                    arr[i][j]=arr[i][j]+min(arr[i-1][j],arr[i][j-1]);
                }
            }
        }
        return arr[m-1][n-1];
    }
};