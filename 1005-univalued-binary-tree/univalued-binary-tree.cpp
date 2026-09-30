class Solution {
public:
    bool flag=true;
    
    void valid(TreeNode* root,TreeNode* &prev){
        if(root==NULL) return;
        valid(root->left,prev);
            if(root->val!=prev->val){
                flag=false;
                return;
            }
        
        valid(root->right,prev);
    }
    bool isUnivalTree(TreeNode* root) {
        if(root==NULL)
        TreeNode* prev=root;
        valid(root,root);
        return flag;
    }
};