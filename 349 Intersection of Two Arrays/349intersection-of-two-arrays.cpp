class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
           unordered_set<int>st1(begin(nums1),end(nums1));

           unordered_set<int>set_result;

           for(int &p:nums2){
            if(st1.find(p)!=st1.end())
            {
                 set_result.insert(p);
                   }                
           }
           vector<int>result(begin(set_result),end(set_result));
           return result;


    }
};