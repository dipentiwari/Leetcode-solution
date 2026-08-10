class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n=nums.size();
        int k=1;
        int i=0,j=0,flips=0;
        int ln=INT_MIN,mln=INT_MIN;
        while(j<n){
            if(nums[j]==1) j++;
            else{//nums[j]==0
            if(flips<k){
                flips++;
                j++;
            }
            else{//flips==1
            ln=j-i;
            mln=max(ln,mln);
            while(nums[i]==1) i++;
            i++;
            j++;
            }
            }
        }
        ln=j-i;
        mln=max(ln,mln);
        
        return mln-1;

    }
};