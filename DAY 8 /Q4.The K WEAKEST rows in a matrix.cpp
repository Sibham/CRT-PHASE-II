
class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
       priority_queue<pair<int,int>,vector<pair<int ,int>>,greater<pair<int,int>>>p;
       int n = mat.size();
       int m = mat[0].size();

       for(int i = 0; i<n ; i++){
          int ans = 0;
          for(int j = 0; j<m ; j++){
            if(mat[i][j]==1){
                ans++;
            }
          }
        p.push({ans,i});
       } 
       vector<int>res;
       while(k--){
        res.push_back(p.top().second);
        p.pop();
       }
       return res;
    }
};
