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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> v;
        if(root==NULL) return v;
        queue<TreeNode*> q;
        q.push(root);
        int maxleft=0;
        while(q.size()>0){
            int n=q.size();
            int rightmost=0;
            for(int i=0;i<n;i++){
                TreeNode* node=q.front();
                q.pop();
                if(i==n-1)
                rightmost=node->val;
                if(node->left!=NULL) q.push(node->left);
                if(node->right!=NULL) q.push(node->right);
            }
            maxleft=rightmost;
            v.push_back(maxleft);
        }
        return v;
    }
    
};