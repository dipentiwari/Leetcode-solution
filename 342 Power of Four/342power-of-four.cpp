class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n<=0) return false;
        if(n==1 ) return true;
        // for(int i=1;i<n;i++){
        //     long long val=pow(4,i);
        //     if(val<=n){
        //     if(n==val){
        //     return true;
        //     break;
        //     }

        //     }
        // }

        long long val=1;
        int i=1;
        while(val<n){
            val=val*4;
            if(n==val){
                return true;
                break;
            }
        }
        return false;
    }
};