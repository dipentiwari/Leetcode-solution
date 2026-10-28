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
    int minval=0;
    void inorder(TreeNode* root, vector<int> &arr){
        if(root==NULL) return;
        inorder(root->left,arr);
        arr.push_back(root->val);
        inorder(root->right,arr);

    }
    int getMinimumDifference(TreeNode* root) {
        vector<int> arr;
        int ans=INT_MAX;
        inorder(root,arr);
        sort(arr.begin(),arr.end());
        for(int i=1;i<arr.size();i++){
            int val=abs(arr[i]-arr[i-1]);
            ans=min(val,ans);
        }
        return ans;
    }
};