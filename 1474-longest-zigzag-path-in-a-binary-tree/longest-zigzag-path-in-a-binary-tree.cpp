class Solution {
public:
    int ans=0;
    int height(TreeNode* root,int l,int r){
        if(root==NULL) return 0;
        ans=max(ans,max(l,r));
        height(root->left,r+1,0);
        height(root->right,0,l+1);
        return ans;
    }
    int longestZigZag(TreeNode* root) {
        if(root==NULL) return 0;
       // int l=0,r=0;
        return (height(root,0,0));
        
    }
};