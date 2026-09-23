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
    vector<int> nums;
    void inorder(TreeNode* root){
        if(root==NULL) return;
        inorder(root->left);
        nums.push_back(root->val);
        inorder(root->right);
       // nums.push_back(root->val);
    }
    TreeNode* Build(int low,int high){
        if(low>high)
        return NULL;
            int mid=low+(high-low)/2;
            TreeNode* root1=new TreeNode(nums[mid]);
            root1->left=Build(low,mid-1);
            root1->right=Build(mid+1,high);
        
        return root1;
    }
    TreeNode* balanceBST(TreeNode* root) {
        if(root==NULL) return NULL;
        inorder(root);
        int n=nums.size();
      return  Build(0,n-1);
       // return root;
    }
};