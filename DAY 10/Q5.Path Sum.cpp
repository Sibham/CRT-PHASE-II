class Solution {
public:
    bool solve(TreeNode* root, int targetSum ,int currsum){
     if(!root)
        return false;

        currsum += root->val;
        if(root->left==NULL && root->right==NULL){
            return targetSum==currsum;
        }

        return solve(root ->left ,targetSum , currsum) || solve(root->right , targetSum ,currsum ); 
        //int left = solve(root ->left ,targetSum , currsum);
        //int right = solve(root ->right ,targetSum , currsum)
       // return left || right;

    }
    bool hasPathSum(TreeNode* root, int targetSum) {
       int currsum = 0;
       bool ans = solve(root,targetSum,currsum);
       return ans;
    }
};
