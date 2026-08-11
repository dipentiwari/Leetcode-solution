class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int n=nums.size();
        vector<int> temp = nums;
        int count=0;
        int sum=0;
        if(n==1) return nums[0]+1;
        bool flag=-1;
        for(int i=1;i<n;i++){
            if(nums[i]!=nums[i-1]+1){
                count=i-1;
                flag=1;
                break;
                }
                count=i;
            }
            if(count==n-1){
                for(int j=0;j<n;j++){
                    sum+=nums[j];

                }
                return sum;
            }
            int x=0;
            if(count==0 && flag==1){
                sum=nums[0];
                while(x<n){
                    sort(temp.begin(), temp.end());
                    if(sum==temp[x]) sum+=1;
                    x++;
                }
                return sum;
            }
            else{
            for(int i=0;i<=count;i++){
                sum+=nums[i];
            }
            }
            int i=0;
            sort(nums.begin(),nums.end());
            while(i<n){
                if(sum==nums[i])
                sum++;
                i++;
            }
            return sum;

            

        

    }
};