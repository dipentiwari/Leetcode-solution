class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int> mp;
        for(auto ele:nums){
            mp[ele]++;
        }
        int temp=k;
        for(int i=0;i<n;i++){
            if(mp.find(k)==mp.end()){
                return k;
            }
            k=k+temp;
        }
        return k;
        
        

    }
};