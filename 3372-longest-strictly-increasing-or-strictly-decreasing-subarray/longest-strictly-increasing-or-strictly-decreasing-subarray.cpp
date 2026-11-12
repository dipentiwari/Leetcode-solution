class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
       int n=nums.size();
       if(n==1) return 1;
        int inc=1;
        int mxinc=INT_MIN;
        int mxdec=INT_MIN;
       for(int i=1;i<n;i++){
            if(nums[i-1]<nums[i]){
                inc++;
            }
            else inc=1;
            mxinc=max(mxinc,inc);
        }
        int dec=1;
       for(int i=1;i<n;i++){
            if(nums[i-1]>nums[i]){
                dec++;
            }
            else dec=1;
            mxdec=max(mxdec,dec);
        
       }
       int ans=max(mxinc,mxdec);
       return ans;
    }
};