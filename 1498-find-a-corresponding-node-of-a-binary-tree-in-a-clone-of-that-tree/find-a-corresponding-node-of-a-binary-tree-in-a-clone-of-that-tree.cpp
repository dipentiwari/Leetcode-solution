/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* postorder(TreeNode* original, TreeNode* cloned, TreeNode* target){
        if(cloned==NULL) return NULL;

        TreeNode* left = postorder(original->left, cloned->left, target);
        TreeNode* right = postorder(original->right, cloned->right, target);

        if (original == target) return cloned;
        if (left != NULL) return left;
        if (right != NULL) return right;

        return NULL;


    
    }
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        return postorder(original,cloned, target);
    }
};