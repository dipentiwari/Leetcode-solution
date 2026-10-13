class Solution {
public: 
    typedef pair<int,vector<int>> pp;
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pp> pq;
        for(auto v:points){
            int x=v[0],y=v[1];
            int dis=x*x+y*y;
            pair<int,vector<int>> p={dis,v};
            pq.push(p);
            if(pq.size()>k) pq.pop();
        }
        vector<vector<int>> ans;
        while(pq.size()>0){
            vector<int> ele=pq.top().second;
            ans.push_back(ele);
            pq.pop();
        }
        return ans;
    }
};