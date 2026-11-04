class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        int n=arr.size();
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[arr[i]]=i+1;
        }

        for(int i=0;i<n;i++){
            int x=target-arr[i];
            if(mp.find(x)!=mp.end()){
                return {i+1,mp[x]};
            }
        }
        return {0,0};
    }
};