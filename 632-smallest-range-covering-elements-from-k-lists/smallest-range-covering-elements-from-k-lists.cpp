class Solution {
public:
    typedef pair<int,pair<int,int>> pip;
    vector<int> smallestRange(vector<vector<int>>& nums) {
        priority_queue<pip,vector<pip>,greater<pip>> heap;
        int mx=INT_MIN;
        for(int i=0;i<nums.size();i++){
            mx=max(mx,nums[i][0]);
            heap.push({nums[i][0],{i,0}});
        }
        int mn=heap.top().first;
        int start=mn,end=mx;
        while(true){
            int row=heap.top().second.first;
            int col=heap.top().second.second;
            heap.pop();
            if(col==nums[row].size()-1) break;
            heap.push({nums[row][col+1],{row,col+1}}); 
            mx=max(mx,nums[row][col+1]);
            mn=heap.top().first;
            if(mx-mn<end-start){
                end=mx;
                start=mn;
            }
        }
        return {start,end};

        
    }
};