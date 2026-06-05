class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int max=height[0];
        int prev[n];
        for(int i=0;i<n;i++){
            prev[i]=max;
            if(max<height[i]) max=height[i];
        }
        int next[n];
        max=height[n-1];
        for(int i=n-1;i>=0;i--){
            next[i]=max;
            if(max<height[i]) max=height[i];
        }

        int mini[n];
        for(int i=0;i<n;i++){
            mini[i]=min(prev[i],next[i]);
        }
        int water=0;
        for(int i=0;i<n-1;i++){
            if(height[i]<mini[i])
            water=water+(mini[i]-height[i]);
        }
        return water;
    }
};