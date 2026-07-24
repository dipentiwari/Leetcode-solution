class Solution {
public:
    int reverse(int x) { 
       
        long long num=0;
        while(x!=0){
            int rem=x%10;
            if(num*10<INT_MIN || num*10>INT_MAX) return 0;
            num=rem+num*10;
            x=x/10;
        } 
        return num;
    }
};