class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int i=0;
        int j=0;
        int len=0;
        int minln=INT_MAX;
        int sum=0;
        while(j<n){
            sum+=nums[j];
            while(sum>=target){
                len=j-i+1;
                sum-=nums[i];
                i++;
                minln=min(minln,len);

            }
            j++;

        }
        if(minln==INT_MAX) return 0;
        return minln;
    }
};