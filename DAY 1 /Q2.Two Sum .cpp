//Approach 1
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;  // value -> index
        for(int i = 0; i < nums.size(); i++){
            int diff = target - nums[i];
            if(mp.find(diff) != mp.end()){
                return {mp[diff], i};  // found pair
            }
            mp[nums[i]] = i;  // store current value with index
        }
        return {};  // no pair found
    }
};

//Approach 2
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();

       for(int i = 0; i < n; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            if(nums[i] + nums[j] == target)
            return {i,j};
        }
    }
    return {};
    }
};
