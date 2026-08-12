class Solution {
public:
    bool isPowerOfTwo(int n) {
        // if(n<=0) return false;
        // if(n==1 || n==2) return true;
        // while(n%2==0){
        //     n/=2;
        //     if(n==2) return true;
        // }
        // return false;
        for(int i=0;i<31;i++){
            if(1<<i==n) return true;
            
        }
        return false;
    }
};