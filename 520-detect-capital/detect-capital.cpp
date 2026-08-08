class Solution {
public:
    bool detectCapitalUse(string word) {
        int n=word.size();
        int upper=0;
        int fs=0;
        if(word[0]<=90 && word[0]>=65) fs++;
        for(int i=0;i<n;i++){
            if(word[i]>90 || word[i]<65)
            upper++;

        }
        if(upper==n-1 && fs==1) return true;
        else if(upper==0) return true;
        else if(upper==n) return true;
        else return false;
    }
};