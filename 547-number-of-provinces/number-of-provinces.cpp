class Solution {
public:
    void DFS(vector<vector<int>>& adjl,vector<int> &visited,int curr){
        visited[curr]=1;
        for(auto x: adjl[curr]){
            if(visited[x]==0){
                DFS(adjl,visited,x);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int count=0;
        int v=isConnected.size();
        vector<vector<int>> adjl(v);
        for(int i=0;i<v;i++){
            for(int j=0;j<v;j++){
                if(i!=j && isConnected[i][j]==1){
                    adjl[i].push_back(j);
                }
            }
        }
        vector<int> visited(v,0);
            for(int i=0;i<v;i++){
                if(visited[i]==0){
                    count++;
                    DFS(adjl,visited,i);
                }
            }
        return count;
    }
};