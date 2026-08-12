class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int n=bits.size();
        if(n==1) return true;
        int i=0;
        while(i<n-1){
            if(bits[i]==1){
                i=i+2;
            }
            else i=i+1;
        }
        if(i==n-1 && bits[n-1]==0) return true;
        else return false;


        
        return true;
    }
};