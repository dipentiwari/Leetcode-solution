class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n=nums.size();
        vector<int> val;
        int mn=*min_element(nums.begin(), nums.end());
        int mx=*max_element(nums.begin(), nums.end());
        vector<int> ans(mx+1,0);
        for(int i=0;i<n;i++){
            if(ans[nums[i]]==0) ans[nums[i]]=1;
        }
        for(int i=mn+1;i<mx;i++){
            if(ans[i]==0) val.push_back(i);
        }
        return val;
    }
};