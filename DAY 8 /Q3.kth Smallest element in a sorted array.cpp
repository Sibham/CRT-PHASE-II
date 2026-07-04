//APPROACH 1
class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        priority_queue<int,vector<int>,greater<int>>p;
        int n =matrix.size();
        int m =matrix[0].size();


        for(int i = 0;i<n;i++){
            for(int j= 0 ; j<m ; j++){
                p.push(matrix[i][j]);
            }
        } 
        int ans= 0 ;
        while(k>0){
            ans = p.top();
            p.pop();
            k--;
        }
        return ans;
    }
};

//APPROACH 2
