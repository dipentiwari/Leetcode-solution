/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int levels(TreeNode* root){
        if(root==NULL) return 0;
        return 1+ max(levels(root->left),levels(root->right));
    }
    void traverse(TreeNode* root,int curr,int value,vector<int> &v){
        if(root==NULL) return;
        if(curr==value){
            v.push_back(root->val);
        }
        traverse(root->left,curr+1,value,v);
        traverse(root->right,curr+1,value,v);
    }
    void lvl(TreeNode* root,vector<vector<int>> &ans){
        if(root==NULL) return;
        int n=levels(root);
        for(int i=1;i<=n;i++){
            vector<int> v;
            traverse(root,1,i,v);
            if(i%2==0) reverse(v.begin(),v.end());
            ans.push_back(v);
        }
    }
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root==NULL) return ans;
        lvl(root,ans);
        return ans;
    }
};