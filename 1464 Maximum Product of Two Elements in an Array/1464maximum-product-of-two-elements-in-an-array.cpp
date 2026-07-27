class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int val=0;
        int m=0;
    //     for(int i=0;i<n-1;i++){
    //         for(int j=1;i<n;j++){
    //             m=(nums[i]-1)*(nums[j]-1);
    //             if(m>val) 
    //             val=m;
    //         }
    //     }
    //     return m;
    // }

    sort(nums.begin(),nums.end());
    val=(nums[n-1]-1)*(nums[n-2]-1);
    return val;
    }
};