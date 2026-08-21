class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>zero;
        vector<int>first;
        zero.push_back(nums[0]);
        first.push_back(nums[1]);
        int x=zero.size();
        int y=first.size();
        int a=2;
        while(a<n){
            if(zero[x-1]>first[y-1]){
            zero.push_back(nums[a]);
            x++;
            }
            else if(zero[x-1]<first[y-1]){
            first.push_back(nums[a]);
            y++;
            }
            a++;
        }
     
        vector<int> ans;
        for(int i=0;i<x;i++){
            ans.push_back(zero[i]);
        }

        for(int i=0;i<y;i++){
            ans.push_back(first[i]);
        }
        return ans;
    }
};