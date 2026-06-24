class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int sum =0;
        int j = 0;
        int n = nums.size();
        int ans = 0;
        while(j<n){
            sum += nums[j];
            if(sum==k){
                ans++;
            }
            if(mp.find(sum-k)!=mp.end()){
                ans +=mp[sum-k];
            }
            mp[sum]++;
            j++;
        }
        return ans;
    }
};
