class Solution {
public:
    int count = 1;
    int mx = 0;
    TreeNode* prev = NULL;
    void inorder(TreeNode* root, vector<int>& v) {
        if(root == NULL) return;
        inorder(root->left, v);
        if(prev == NULL) {
            count = 1;
        }
        else if(prev->val == root->val) {
            count++;
        }
        else {
            count = 1;
        }
        if(count > mx) {
            mx = count;
            v.clear();
            v.push_back(root->val);
        }
        else if(count == mx) {
            v.push_back(root->val);
        }
        prev = root;
        inorder(root->right, v);
    }
    vector<int> findMode(TreeNode* root) {
        vector<int> v;
        prev = NULL;
        inorder(root, v);
        return v;
    }
};