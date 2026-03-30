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
    int move(TreeNode* root, int &result){
        if(root == NULL)
            return 0;
        int left = move(root->left, result);
        int right = move(root->right, result);
        result = max(result, left + right);
        return 1 + max(left, right);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int result = 0;
        move(root, result);
        return result;
    }
};
