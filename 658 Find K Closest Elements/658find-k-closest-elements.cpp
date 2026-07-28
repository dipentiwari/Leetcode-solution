class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int n=arr.size();
        bool flag=false;
        vector<int> ans(k);
        int mid=-1;
        if(x<arr[0]){
            for(int i=0;i<k;i++){
                ans[i]=arr[i];
            }
            return ans;
        }
        if(x>arr[n-1]){
            int i=n-1;
            int j=k-1;
            while(j>=0){
                ans[j]=arr[i];
                i--;j--;
            }
            return ans;
        } 
        int t=0;       
        int low=0,high=n-1;
        while(low<=high){
            mid=low+(high-low)/2;
            if(x==arr[mid]){
                flag=true;
                ans[t]=arr[mid];
                t++;
                break;
            }
            else if(x>arr[mid]) low=mid+1;
            else high=mid-1;
        }
        int lb=high;
        int ub=low;
        if(flag==true){
            lb=mid-1;
            ub=mid+1;
        }
        while(t<k && lb>=0 && ub<n){
            int d1=abs(x-arr[lb]);
            int d2=abs(x-arr[ub]);
            if(d1<=d2){
                ans[t]=arr[lb];
                lb--;
            }
            else{
                ans[t]=arr[ub];
                ub++;
                
            }
            t++;
        }
        if(lb<0){
            while(t<k){
                ans[t]=arr[ub];
                t++;
                ub++;
            }
        }
        if(ub>n-1){
            while(t<k){
                ans[t]=arr[lb];
                t++;
                lb--;
            }
        }
        sort(ans.begin(),ans.end());
        return ans;

    }
};