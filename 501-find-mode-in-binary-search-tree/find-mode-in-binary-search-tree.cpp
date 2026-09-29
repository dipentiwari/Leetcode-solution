class Solution {
public:
    void inorder(TreeNode* root, vector<int>& v) {
        if(root == NULL) return;

        inorder(root->left, v);
        v.push_back(root->val);
        inorder(root->right, v);
    }

    vector<int> findMode(TreeNode* root) {
        vector<int> v;
        inorder(root, v);
        int n = v.size();
        if(n == 1) return v;
        int mx=1;
        int count = 1;
        vector<int> ans;
        for(int i = 1; i < n; i++) {
            if(v[i] == v[i - 1]) {
                count++;
            }
            else {
                count = 1;
            }
            if(mx<=count) mx=count;
        }
        if(mx==1) return v;
        if(v.size()==2 && mx==1) return v; 
        int vol=1;
        for(int i=0;i<n-1;i++){
            if(v[i]==v[i+1]){
            vol++;
            if(vol==mx) ans.push_back(v[i]);
            }
            else vol=1;
        }

        

        return ans;
    }
};