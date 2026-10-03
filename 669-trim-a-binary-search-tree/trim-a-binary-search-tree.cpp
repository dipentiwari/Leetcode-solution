class Solution {
public:
    void Trim(TreeNode* root,int low, int high){
        if(root==NULL) return ;
        while(root->left!=NULL){
            if(root->left->val <low ) root->left=root->left->right;
            else if(root->left->val > high) root->left=root->left->left;
            else break;
        }
        while(root->right!=NULL){
            if(root->right->val>high) root->right=root->right->left;
            else if(root->right->val<low) root->right=root->left->left;
            else break;
        }
        Trim(root->left,low, high);
        Trim(root->right,low, high);
    }
    TreeNode* trimBST(TreeNode* root, int low, int high) {
        if(root==NULL) return NULL;
        TreeNode* dummy=new TreeNode(INT_MAX);
        dummy->left=root;
        Trim(dummy,low,high);
        return dummy->left;
    }
};