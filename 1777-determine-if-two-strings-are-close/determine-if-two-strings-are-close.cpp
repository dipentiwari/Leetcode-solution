class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.length()!=word2.length()) return false;
        unordered_map<char,int> mp1;
        unordered_map<char,int> mp2;
        for(auto ele:word1){
            mp1[ele]++;
        }
        for(auto ele:word2){
            mp2[ele]++;
        }

        for(auto x:mp1){
            char ch=x.first;
            if(mp2.find(ch)==mp2.end()) return false;
        }

        unordered_map<int,int> h1,h2;
        for(auto ele:mp1){
            int freq=ele.second;   
            h1[freq]++;
        }

        for(auto ele:mp2){
            int freq=ele.second;
            h2[freq]++;
        }

        for(auto ele:h1){
            int key=ele.first;
            if(h2.find(key)==h2.end()) return false;
            if(h2[key]!=h1[key]) return false;
        }
        return true;
    }
};