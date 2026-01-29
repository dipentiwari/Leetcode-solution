class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int n=nums.size();
        if(n<3){
            int mx=nums[0];
            for(int i=1;i<n;i++){
                if(mx<nums[i])
                mx=nums[i];
            }
            return mx;
        }

        long long max=LLONG_MIN;
        long long smax=LLONG_MIN;
        long long thirdMax=LLONG_MIN;
        for(int i=0;i<n;i++){
            if(max<nums[i])
            max=nums[i];
        }
        for(int i=0;i<n;i++){
        if(nums[i]!=max && (smax<nums[i]))
        smax=nums[i];
        }
        for(int i=0;i<n;i++){
        if(nums[i]!=max && (nums[i]!=smax) && (thirdMax<nums[i]))
        thirdMax=nums[i];
        }

         if (thirdMax == LLONG_MIN)
            return max;
       

        return thirdMax;
    }  
};