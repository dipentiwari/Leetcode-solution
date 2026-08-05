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
    }
};