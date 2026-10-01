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
    bool isEvenOddTree(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        int level=0;
        while(q.size()>0){
            int n=q.size();
            int prev;
            if(level%2==0){
                prev=INT_MIN;
            }
            if(level%2!=0){
                prev=INT_MAX;
            }
            for(int i=0;i<n;i++){
                TreeNode* node=q.front();
                q.pop();
                int val=node->val;
                if(level%2==0){
                    if(val%2==0) return false;
                    if(val<=prev) return false;
                }
                else{
                    if(val%2!=0) return false;
                    if(val>=prev) return false;
                }
                prev=val;
                if(node->left!=NULL) q.push(node->left);
                if(node->right!=NULL) q.push(node->right);
            }
                level++;
        }
        return true;
        
    }
};