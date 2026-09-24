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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> avg;
        if(root==NULL) return avg;
        queue<TreeNode*> q;
        q.push(root);
        
        while(q.size()>0){
            double value=0;
            int n=q.size();
            for(int i=0;i<n;i++){
                TreeNode* node=q.front();
                q.pop();
                value=node->val+value;
                if(node->left!=NULL) q.push(node->left);
                if(node->right!=NULL) q.push(node->right);                
            }
            double ans=value/n;
            avg.push_back(ans);
            
        }
        return avg;
    }
};