class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int result=0;
        int oddcount=0;
        int previous_count=0;
        int n=nums.size();
        int i=0,j=0;
        while(j<n){
            if(nums[j]%2!=0){
            oddcount++;
            previous_count=0;
            }
            while(oddcount==k){
                previous_count++;
                if(nums[i]%2==1){
                    oddcount--;
                }
                i++;
            }
            result+=previous_count;
            j++;
    }
    return result;
    }
};