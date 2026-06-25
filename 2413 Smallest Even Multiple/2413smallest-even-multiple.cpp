class Solution {
public:
    int smallestEvenMultiple(int n) {
        int mul=0;
            if(n==1){
                mul=2;
            }
        for(int i=1;i<=n;i++){
            int val=n*i;
            if(val%2==0){
                mul=val;
                 break;
            }

        }
        return mul;
    }
};