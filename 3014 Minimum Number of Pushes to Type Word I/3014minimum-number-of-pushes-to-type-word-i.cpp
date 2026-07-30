class Solution {
public:
    int minimumPushes(string word) {
        int count=0;
        int s=word.size();
        int n=1;
        for(int i=1;i<=s;i++){
            count=count+n;
            if(i%8==0) n=n+1;

        } 
        return count;
    }
};