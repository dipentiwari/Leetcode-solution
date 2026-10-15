class Solution {
public:
    void DFS(vector<vector<int>>& rooms,vector<int> &visited,int curr){
        visited[curr]=1;
        for(auto x: rooms[curr]){
            if(visited[x]==0){
                DFS(rooms,visited,x);
            }
        }
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n=rooms.size();
        vector<int> visited(n,0);
        DFS(rooms,visited,0);
        for(int i=0;i<n;i++){
            if(visited[i]==0) return false;
        }
        return true;
    }
};