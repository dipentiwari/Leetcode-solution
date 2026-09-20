class Solution {
public:
    int reverseDegree(string s) {
        int n=s.size();
        int total=0;
        for(int i=0;i<n;i++){
            int val=122-(int)(s[i])+1;
            int ans=val*(i+1);
            total+=ans;
        }
        return total;

    }
};