class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int n=nums.size();
        int temp=k;
        while(true){
            bool flag=false;
            for(int i=0;i<n;i++){
                if(k==nums[i]){
                    flag=true;
                    break;
                }

            }
            if(flag==false){
                return k;
            }
            k+=temp;

        }
        return k;

    }
};