class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        unordered_map<int,int> mp;

        for(auto m:matches){
            int winner=m[0];
            int loser=m[1];     
            if(mp.find(winner)==mp.end()){
                mp[winner]=0;
            }
            mp[loser]++;
        }
        vector<int> zero;
        vector<int> one;

        for(auto id:mp){
            if(id.second==0)
            zero.push_back(id.first);
            if(id.second==1)
            one.push_back(id.first);
        }
        sort(zero.begin(),zero.end());
        sort(one.begin(),one.end());

        return {zero,one};

        
        
    }
};