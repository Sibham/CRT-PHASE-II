class Solution {
    vector<int>ans;
public:
void traversal(TreeNode* root){
    if(root == NULL){
        return ;
    }

    traversal(root->left);
    ans.push_back(root->val);
    traversal(root->right);

}
    vector<int> inorderTraversal(TreeNode* root) {
        traversal(root);
        return ans;
    }
    
};
