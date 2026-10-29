class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        vector<int> ans;
        unordered_map<int,int> mp;
        for(int i=0;i<m;i++){
            mp[nums2[i]]=i;
        }
        for(int i=0;i<n;i++){
            bool found=false;
            int x=mp[nums1[i]];
            for(int j=x+1;j<m;j++){
                if(nums2[j]>nums1[i]){
                    ans.push_back(nums2[j]);
                    found=true;
                    break;
                }
            }
            if(!found) ans.push_back(-1);
        }
        return ans;
    }
};