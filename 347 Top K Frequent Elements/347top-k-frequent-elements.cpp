// class Solution
// {
//     public:
// vector<int> topKFrequent(vector<int>& nums, int k) {
//     unordered_map<int, int> freqMap;
//     for (int num : nums)
//     {
//         freqMap[num]++;
//     }
//     vector<pair<int, int>> freqVec(freqMap.begin(), freqMap.end());

//     sort(freqVec.begin(), freqVec.end(), [](pair<int, int>& a, pair<int, int>& b)
//     {
//         return b.second < a.second;  // descending order
//     });
//     vector<int> result;
//     for (int i = 0; i < k; ++i) {
//         result.push_back(freqVec[i].first);
//     }

//     return result;
// }
// };


// //Approach-1  Using MAP AND MIN HEAP
// class Solution
// {   public:
//     typedef pair<int,int>p;
//     vector<int> topKFrequent(vector<int>&nums,int k)
//     {    unordered_map<int,int>mp;
//         for(int &num:nums)
//         {
//             mp[num]++;
//         }
//         priority_queue<p,vector<p>,greater<p>>pq;
//         for(auto &it:mp)
//         {   int value =it.first;
//             int freq=it.second;
//             pq.push({freq,value});
//             if(pq.size()>k)
//             {
//                 pq.pop();
//             }
//         }
//         vector<int>result;
//         while(!pq.empty())
//         {
//             result.push_back(pq.top().second);
//             pq.pop();
//         }
//         return result;
//     }
// };



//Approach-2 (Using Bucket Sort) - TC : O(n) - We visit all elements of nums only once.
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> mp;
        for(int &num : nums) {
            mp[num]++;
        }
        vector<vector<int>> bucket(n+1);
        for(auto &it : mp) {
            int element = it.first;
            int freq    = it.second;
            bucket[freq].push_back(element);
        }
        vector<int> result;
        for(int i = n; i >= 0; i--) {
            if(bucket[i].size() == 0) continue;
            int size = bucket.size();
            while(bucket[i].size() > 0 && k > 0) {
                result.push_back(bucket[i].back());
                bucket[i].pop_back();
                k--;
            }
           
        }
       
        return result;
    }
};


