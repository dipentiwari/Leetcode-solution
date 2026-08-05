class Solution {
public:
    int findDuplicate(vector<int>& nums) {
       int n=nums.size();
     int i=0;
     while(i<n){
        int correctidx=nums[i];
        if(nums[i]==nums[correctidx]) return nums[i];
        else swap(nums[i],nums[correctidx]);
     }   
     return 123;


    // int n = nums.size() - 1;
    // int sum = n * (n + 1) / 2;
    // int s = 0;
    // for (int i = 0; i < nums.size(); i++) {

    //     s += nums[i];
    //      }

    //     return s - sum;
    }
};