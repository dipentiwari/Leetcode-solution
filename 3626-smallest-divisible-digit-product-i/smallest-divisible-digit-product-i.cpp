class Solution {
public:
    int smallestNumber(int n, int t) {
        int tem=n;
        int ans=1;
        while(tem>=n){
            int temp=tem;
            int val=temp%10;
            temp/=10;
            if(temp!=0) ans=temp%10;
            int curr=val*ans;
            if(curr%t==0 && tem>=t ) return tem;
            else tem++;
        }
        return 22;
    }
};