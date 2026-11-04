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
    int mx=INT_MIN;
    int fun(TreeNode* root){
        if(root==NULL) return 0;
        int left=max(fun(root->left),0);
        int right=max(fun(root->right),0);
        int total=root->val+left+right;
        mx=max(total,mx);   
        return root->val+max(left,right);    
    }
    int maxPathSum(TreeNode* root) {
        fun(root);
        return mx;
    }
};