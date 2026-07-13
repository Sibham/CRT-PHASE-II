lass Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>>ans;
        if(root == NULL){
            return {};
        }
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            vector<int>v;
            int size = q.size();
            while(size--){
                TreeNode* temp = q.front();
                v.push_back(temp->val);
                q.pop();
                
                if(temp->left != NULL){
                    q.push(temp->left);
                }
                if(temp->right != NULL){
                    q.push(temp->right);
                }
            }
            ans.push_back(v);
            
        }
        reverse(begin(ans),end(ans));
        return ans;
    }
};
