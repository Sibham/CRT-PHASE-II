class Solution {
public:
    vector<int> subarraySum(vector<int> &arr, int target) {
        vector<int> ans;
        int i = 0, j = 0;
        int n = arr.size();
        int sum = 0;

        while(j < n) {
            sum += arr[j];

            // shrink window until sum <= target
            while(sum > target && i <= j) {
                sum -= arr[i];
                i++;
            }

            if(sum == target) {
                ans.push_back(i+1);  // 1-based index
                ans.push_back(j+1);
                return ans;          // return first subarray found
            }

            j++;
        }
        return ans;  // empty if no subarray found
    }
};
