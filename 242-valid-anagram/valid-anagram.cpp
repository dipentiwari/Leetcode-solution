class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) return false;
        unordered_map<char,int> mp1;
        unordered_map<char,int> mp2;
        for(int i=0;i<s.length();i++){
            mp1[s[i]]++;
        }
        for(int i=0;i<t.length();i++){
            mp2[t[i]]++;
        }
        for(auto x: mp1){
            char ch=x.first;
            int freq=x.second;
            if(mp2.find(ch)!=mp2.end()){
                int freq2=  mp2[ch];
                if(freq!=freq2) return false;
            }
            else return false;
        }
        return true;
    }
};