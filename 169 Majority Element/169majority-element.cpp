class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // PW
        int n=nums.size();
        sort(nums.begin(),nums.end());
        return nums[n/2];


















    //     APPROACH 1: BRUTE FORCE
    //     int n=nums.size();    
    //     for(int i=0;i<n;i++){
    //         int count=0;
    //         for(int j=0;j<n;j++){
    //             if(nums[j]==nums[i]){
    //                 count++;
    //             }
    //         }
    //         if(count>n/2){
    //             return nums[i];
    //         }    
    //     }
    //     return -1;


    // APPROACH 2: SORTING 
    // sort(nums.begin(),nums.end());
    // return nums[(int)nums.size()/2];
    
    
    // APPROACH 3: UNORDERED MAP
    // int n=nums.size();
    // unordered_map<int,int>m;
    // for(auto a: nums){
    //     m[a]++;
    //     if(m[a]>n/2)
    //     return a;
    // }
    // return -1;


    // APPROACH 4: BOYOR MOORE VOTING 
    // int n=nums.size();
    // int count =0;
    // int maj=NULL;
    // for(int i=0;i<n;i++){
    //     if(count==0){
    //         count=1;
    //         maj=nums[i];
    //     }
    //     else if(nums[i]==maj){
    //         count++;
    //     }
    //     else{
    //         count--;
    //     }
    // }
    //     return maj;


    
    }
};