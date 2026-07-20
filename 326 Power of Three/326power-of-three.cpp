class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n<=0) return false;
        if(n==1) return true;
        long long val=1;
        while(val<n){
            val=val*3;
            if(n==val){
                return true;
                break;
            }
        }
        return false;
    }
};