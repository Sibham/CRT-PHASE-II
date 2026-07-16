class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        long long int high = *max_element(piles.begin(), piles.end());
        long long int ans = -1;
        long long int low = 1;
        while (low <= high) {
            long long int mid = (low + high) / 2;
            long long int total = 0;

            for (int i = 0; i < piles.size(); i++) {
                if (piles[i] % mid != 0) {
                    total++;
                }
                total += (piles[i] / mid);
            }
            if (total <= h) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }
};
