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
    //int lt;
    //int rt;
    int diff(TreeNode* root,int mn,int mx){
        if(root==NULL) return mx-mn;
        mn=min(mn,root->val);
        mx=max(mx,root->val);
       int lt=diff(root->left,mn,mx);
       int rt=diff(root->right,mn,mx);
        return max(lt,rt);
    }
    int maxAncestorDiff(TreeNode* root) {
        if(root==NULL) return 0;
        return diff(root,root->val,root->val);
    }
};