class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size();
        int len=INT_MIN,maxlen=INT_MIN;
        int i=0,j=0,flips=0;
        while(j<n){
            if(nums[j]==1){
                j++;
            }
            else{//nums[i]==0
                if(flips<k){
                    flips++;
                    j++;
                }
                else{//flip==k
                len=j-i;
                maxlen=max(len,maxlen);
                while(nums[i]==1) i++;
                i++;
                j++;
                }
            }
        }
        len=j-i;
        maxlen=max(maxlen,len);
        return maxlen;
    }
};