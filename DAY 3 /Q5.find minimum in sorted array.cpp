class Solution {
public:
    int findMin(vector<int>& nums) {
        int low = 0;
        int high = nums.size() - 1;

        while(low < high) {
            int mid = low + (high - low)/2;

            if(nums[mid] > nums[high]) {
                // Minimum right side mein hoga
                low = mid + 1;
            } else {
                // Minimum left side mein ya mid pe hoga
                high = mid;
            }
        }
        return nums[low]; // low == high, minimum element
    }
};
