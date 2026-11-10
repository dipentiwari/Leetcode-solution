class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=haystack.size();
        int m=needle.size();
        if(haystack.size()<needle.size()) return -1;
        for(int i=0;i<n-m+1;i++){
            string ans=haystack.substr(i,m);
            if(ans==needle) return i;
        }
        return -1;
    }
};