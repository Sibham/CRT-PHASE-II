//DFS
class Solution {
public:
    int minDepth(TreeNode* root) {
        if(!root)
            return 0;
        
        if(root->left == NULL && root->right == NULL)
            return 1;
        
        int left  = root->left?minDepth(root->left):INT_MAX;
        int right = root->right?minDepth(root->right):INT_MAX;
        
        return 1 + min(left, right);
    }
};

//BFS
class Solution {
public:
    int minDepth(TreeNode* root) {
        if(!root){
            return 0;
        }

        queue<TreeNode*>q;
        q.push(root);

        int depth = 1;

        while(!q.empty()){
            int n = q.size();
            while(n--){
                TreeNode* temp = q.front();
                q.pop();

                if(temp->left==NULL && temp->right==NULL){
                    return depth;
                }
                if(temp->left != NULL){
                    q.push(temp->left);
                }
                if(temp->right != NULL){
                    q.push(temp->right);
                }
            }
            depth++;
        }
        return -1;

    }
};

