class Solution {
public:
    int mySqrt(int x) {
        int low=0;
        int high=x;
        while(low<=high){
            int mid=low+((high-low)/2);
            long long a=(long long)mid;
            long long y=(long long)x;
            if( a*a==y){
                return mid;
            }
            else if(a*a <y) low=mid+1;
            else high=mid-1;
        }
        return high ;
    }
};