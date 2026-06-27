class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        int tne=n*m;
        int count=0;

        int minr=0,minc=0;
        int maxr=n-1,maxc=m-1;
        vector<int> ans;
        while(minr<=maxr && minc<=maxc){
            for(int i=minc;i<=maxc && count<tne;i++){
                ans.push_back(matrix[minr][i]);
            count++;
            }
            minr++;
          

            //down
            for(int i=minr;i<=maxr && count<tne;i++){
                ans.push_back(matrix[i][maxc]);
            count++;
        }
        maxc--;
        

        //left
        for(int i=maxc;i>=minc && count<tne;i--){
                ans.push_back(matrix[maxr][i]);
                count++;
        }
        maxr--;
        

        //up
        for(int i=maxr;i>=minr && count<tne;i--){
                ans.push_back(matrix[i][minc]);
                count++;
        }
        minc++;

    }
    return ans;
    }
};