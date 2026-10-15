class Solution {
public:
    int sumCounts(vector<int>& nums) {
       int n=nums.size();
       
       vector<vector<int>> ans;
       
       for(int i=0;i<n;i++){
        vector<int> temp;
        for(int j=i;j<n;j++){
            temp.push_back(nums[j]);
            ans.push_back(temp);
        }
       } 
       int sum=0;
      
       for(int i=0;i<ans.size();i++){
        unordered_map<int,int> mp;
        for(auto x:ans[i]){
            mp[x]++;
        }
        int n=mp.size();
        sum+=(n*n);
        
       }
       return sum;
    }
};