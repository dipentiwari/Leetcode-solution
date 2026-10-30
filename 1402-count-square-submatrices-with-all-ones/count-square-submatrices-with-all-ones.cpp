class Solution {
public:
    int countSquares(vector<vector<int>>& arr) {
        int m=arr.size();
        int count=0;
        int n=arr[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(arr[i][j]==0) continue;
                if(i>0 && j>0){
                    arr[i][j]+=min(min(arr[i-1][j],arr[i][j-1]),arr[i-1][j-1]);
                }
                count+=arr[i][j];
            }
        }
        return count;
    }
};