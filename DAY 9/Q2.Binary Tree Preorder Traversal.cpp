class Solution {
public:
    void traversal(TreeNode* root , vector<int>& ans){

        //base case
        if(root==NULL){
            return ;
        }
        ans.push_back(root->val);
        traversal(root->left,ans);
        traversal(root->right,ans);
    }

    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>ans;
        traversal(root,ans);
        return ans;
    }
};
