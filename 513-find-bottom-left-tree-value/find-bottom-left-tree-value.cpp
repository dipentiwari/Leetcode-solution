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
    int findBottomLeftValue(TreeNode* root) {

        queue<TreeNode*> q;
        q.push(root);
        int maxleft=0;
        while(q.size()>0){
            int n=q.size();
            int leftmost=0;
            for(int i=0;i<n;i++){
                TreeNode* node=q.front();
                q.pop();
                if(i==0)
                leftmost=node->val;
                if(node->left!=NULL) q.push(node->left);
                if(node->right!=NULL) q.push(node->right);
            }
            maxleft=leftmost;
            
        }
        return maxleft;
    }
};