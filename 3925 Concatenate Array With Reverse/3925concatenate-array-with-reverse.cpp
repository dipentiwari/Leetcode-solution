class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
    int n=nums.size();
    int m=2*n;
    vector<int>ans(m);

    for(int i=0;i<n;i++){
        int j=n-i-1;
        ans[i]=nums[i];
        ans[i+n]=nums[j];
        

        
    }
    
    return ans;
    
    }
    
    
};