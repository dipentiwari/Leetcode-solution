class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0;
        int mul=1;
        int ans=0;
        
        int temp=n;
        while(n>0){
            int val=n%10;
            sum+=val;
            mul*=val;
            n/=10;
        }
        ans=mul+sum;
        if(temp%ans==0){
            return true;
        }
        return false;
        }
};