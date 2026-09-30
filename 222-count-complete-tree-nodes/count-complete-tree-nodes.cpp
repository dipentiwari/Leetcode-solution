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
  
    int countNodes(TreeNode* root) {
        int lh=0,rh=0;
        TreeNode* lt=root;
        TreeNode* rt=root;
        if(root==NULL) return 0;
        while(lt!=NULL){
            lh++;
            lt=lt->left;
        }
        while(rt!=NULL){
            rh++;
            rt=rt->right;
        }
        if(lh==rh){
            return (1<<lh)-1;
        }
        else{
            return 1+countNodes(root->left)+countNodes(root->right);
        }
        
    }
};