class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>mp;
        for(int i = 0 ;i<nums.size();i++){
            mp[nums[i]]++;
        }
        priority_queue<pair<int,int>>p;
        for(auto x:mp){
            p.push(make_pair(x.second,x.first));
        }
        vector<int>ans;
        while(k>0){
            pair<int,int>pair=p.top();
            ans.push_back(pair.second);
            p.pop();
            k--;
        }
        return ans;
    }
};
