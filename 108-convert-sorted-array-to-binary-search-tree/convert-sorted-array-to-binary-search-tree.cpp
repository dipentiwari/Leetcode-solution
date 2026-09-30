class Solution {
public:
    TreeNode* BST(vector<int>& nums,int low,int high){
        if(low>high) return NULL;
        int mid=low+(high-low)/2;
        TreeNode* root=new TreeNode(nums[mid]);
        root->left=BST(nums,low,mid-1);
        root->right=BST(nums,mid+1,high);
        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int n=nums.size();
        return BST(nums,0,n-1);
    }
};