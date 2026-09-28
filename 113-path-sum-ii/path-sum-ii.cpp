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
    void traverse(TreeNode* root,vector<vector<int>> &ans,vector<int> v,int sum){
        if(root==NULL) return;
        if(root->left==NULL && root->right==NULL){
            if(sum==root->val){
                v.push_back(root->val);
                ans.push_back(v);
            }
            return;
        }
        v.push_back(root->val);
        traverse(root->left,ans,v,sum-root->val);
        traverse(root->right,ans,v,sum-root->val);
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> ans;
        vector<int> v;
        traverse(root,ans,v,targetSum);
        return ans;
    }
};