class Solution {
public:
    int countNodes(TreeNode* root) {
        if(!root){
            return 0;
        }

        int count= 0;
        queue<TreeNode*>q;
        q.push(root);

        while(!q.empty()){
            TreeNode* temp = q.front();
            count++;
            q.pop();
            if(temp->left != NULL){
                q.push(temp->left);
            }
            if(temp->right != NULL){
                q.push(temp->right);
            }
        }
        return count;
    }
};
