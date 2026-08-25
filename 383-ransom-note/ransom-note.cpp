class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int n=ransomNote.size();
        unordered_map<char,int> mp;
        for(auto ele:magazine){
            mp[ele]++;
        }
        for(auto ele:ransomNote){
            if(mp[ele]==0) return false;
            mp[ele]--;
        }
         return true;
        
        
    }
};