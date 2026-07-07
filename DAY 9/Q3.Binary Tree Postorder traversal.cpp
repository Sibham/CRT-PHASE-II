class Solution {
    vector<int>ans;
public:
    void solve(TreeNode* root){
        if(root == NULL){
            return ;
        }
        solve(root->left);
        solve(root->right);
        ans.push_back(root->val);  //ans.push_back(root->data);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        solve(root);
        return ans;
    }
};
