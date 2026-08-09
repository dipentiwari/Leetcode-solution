class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int k=minutes;
        vector<int> arr= customers;
        int n=arr.size();
        int prevloss=0;
        for(int i=0;i<k;i++){
            if(grumpy[i]==1)
            prevloss+=arr[i];
        }
        int maxloss=prevloss;
        int idx=0;
        int i=1,j=k;
        while(j<n){
            int curr=prevloss;
            if(grumpy[j]==1) curr+=arr[j];
            if(grumpy[i-1]==1) curr-=arr[i-1];
            if(maxloss<curr){
            maxloss=curr;
            idx=i;
            }
            prevloss=curr;
            i++,j++;
        }
        for(int i=idx;i<idx+k;i++){
            grumpy[i]=0;
        }
        int sum=0;
        for(int i=0;i<n;i++){
            if(grumpy[i]==0) sum+=arr[i];
        }
        return sum;
    }
};