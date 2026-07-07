class Solution {
    vector<int>ans;
public:
void traversal(TreeNode* root){
    if(root == NULL){
        return ;
    }

    traversal(root->left);
    ans.push_back(root->val); //ans.push_back(root->data);
    traversal(root->right);

}
    vector<int> inorderTraversal(TreeNode* root) {
        traversal(root);
        return ans;
    }
    
};
