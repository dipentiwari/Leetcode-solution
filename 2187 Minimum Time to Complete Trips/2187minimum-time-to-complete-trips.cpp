class Solution {
public:
    bool check(long long dis,vector<int>& time, int totalTrips){
        long long n=time.size();
        long long trips=0;
        for(int i=0;i<n;i++){
            trips+=dis/(long long)time[i];
        }
        if(trips<(long long)totalTrips) return false;
        else return true;
    }
    long long minimumTime(vector<int>& time, int totalTrips) {
        long long n=time.size();
        long long low=1;
        long long mx=0;
        for(int i=0;i<n;i++){
            mx=max(mx,(long long)time[i]);
        }
        long long high=(long long)mx*(long long)totalTrips;
        long long ans=-1;
        while(low<=high){
            long long mid=low+(high-low)/2;
            if(check(mid,time,totalTrips)==true){
                ans=mid;
                high=mid-1;
            }
            else low=mid+1;
        }
        return ans;
    }
};