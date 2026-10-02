class Solution {
public:
    TreeNode *iop(TreeNode* root){
        TreeNode* pred=root->left;
        while(pred->right!=NULL){
            pred=pred->right;
        }
        return pred;
    }
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==NULL) return NULL;
        if(root->val==key){
            if(root->left==NULL && root->right==NULL){
                return NULL;
            }
            else if(root->left==NULL || root->right==NULL){
                if(root->left==NULL) return root->right;
                else return root->left;
            }
            if(root->left!=NULL && root->right!=NULL){
                TreeNode* pred=iop(root);
                root->val=pred->val;
                root->left=deleteNode(root->left,pred->val);
            }
        }
        else if(root->val>key)  
        root->left= deleteNode(root->left,key);
        else if(root->val<key)
        root->right= deleteNode(root->right,key);

        return root;

    }
};